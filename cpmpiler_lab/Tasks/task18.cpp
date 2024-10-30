#include <iostream>
#include <stack>
#include <sstream>
#include <vector>
#include <map>
#include <cctype>

using namespace std;

enum TokenType { OPERAND, OPERATOR, IF, ELSE, THEN };

// Structure to define token
struct Token {
    string value;
    TokenType type;
};

// Utility function to identify the type of token
TokenType getTokenType(const string& token) {
    if (token == "if") return IF;
    if (token == "else") return ELSE;
    if (token == "then") return THEN;
    if (token == "+" || token == "-" || token == "*" || token == "/") return OPERATOR;
    return OPERAND;
}

// Function to split the input into tokens
vector<Token> tokenize(const string& input) {
    vector<Token> tokens;
    istringstream iss(input);
    string word;

    while (iss >> word) {
        TokenType type = getTokenType(word);
        tokens.push_back({word, type});
    }

    return tokens;
}

// Function to convert an expression (like a+b) to postfix notation
string infixToPostfix(const string& expr) {
    stack<char> operators;
    string result;

    for (char ch : expr) {
        if (isalnum(ch)) { // If it's an operand, add to the result
            result += ch;
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') { // Operators
            while (!operators.empty() && (operators.top() == '*' || operators.top() == '/')) {
                result += operators.top();
                operators.pop();
            }
            operators.push(ch);
        }
    }

    // Pop all remaining operators in the stack
    while (!operators.empty()) {
        result += operators.top();
        operators.pop();
    }

    return result;
}

// Function to process if-else condition in postfix notation
string convertIfElseToPostfix(const vector<Token>& tokens) {
    stack<string> postfixStack;
    string postfixResult;

    for (size_t i = 0; i < tokens.size(); ++i) {
        if (tokens[i].type == IF) {
            postfixStack.push("?");
        } else if (tokens[i].type == ELSE) {
            // Do nothing here; handle in THEN
        } else if (tokens[i].type == THEN) {
            postfixResult += postfixStack.top() + " ";
            postfixStack.pop();
        } else if (tokens[i].type == OPERAND) {
            if (i + 1 < tokens.size() && tokens[i + 1].type == OPERATOR) {
                // It's part of an expression, grab full expression
                string expr;
                while (i < tokens.size() && tokens[i].type == OPERAND) {
                    expr += tokens[i].value;
                    ++i;
                    if (i < tokens.size() && tokens[i].type == OPERATOR) {
                        expr += tokens[i].value;
                        ++i;
                    }
                }
                postfixResult += infixToPostfix(expr) + " ";
                --i;
            } else {
                postfixResult += tokens[i].value + " ";
            }
        }
    }

    // Ensure all '?' are added for each `if`-`else` clause
    while (!postfixStack.empty()) {
        postfixResult += postfixStack.top() + " ";
        postfixStack.pop();
    }

    return postfixResult;
}

int main() {
    string input;
    cout << "Enter infix statement: ";
    getline(cin, input);

    vector<Token> tokens = tokenize(input);
    string postfix = convertIfElseToPostfix(tokens);

    cout << "Postfix: " << postfix << endl;
    return 0;
}

//Enter infix statement:  if a then if c-d then a+c else a*c else a+b
