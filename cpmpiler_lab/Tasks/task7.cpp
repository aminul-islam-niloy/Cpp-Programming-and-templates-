#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <unordered_set>

using namespace std;

// List of C++ keywords
unordered_set<string> keywords = {
    "auto", "break", "case", "char", "const", "continue", "default", "do", "double", 
    "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", 
    "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", 
    "union", "unsigned", "void", "volatile", "while", "class", "private", "public", 
    "protected", "namespace", "using", "template", "typename", "this", "new", "delete", 
    "try", "catch", "bool", "inline", "virtual", "friend", "throw"
};

// List of operators
unordered_set<string> operators = {
    "+", "-", "*", "/", "%", "=", "==", "!=", "<", ">", "<=", ">=", "&&", "||", "!", 
    "++", "--", "+=", "-=", "*=", "/=", "%=", "&", "|", "^", "~", "<<", ">>"
};

// Check if a string is a keyword
bool isKeyword(const string& token) {
    return keywords.find(token) != keywords.end();
}

// Check if a string is an identifier
bool isIdentifier(const string& token) {
    if (!isalpha(token[0]) && token[0] != '_') return false;
    for (size_t i = 1; i < token.length(); ++i) {
        if (!isalnum(token[i]) && token[i] != '_') return false;
    }
    return true;
}



// Check if a string is an operator
bool isOperator(const string& token) {
    return operators.find(token) != operators.end();
}

// Check if a string is a constant
bool isConstant(const string& token) {
    bool decimalPoint = false;
    for (size_t i = 0; i < token.length(); ++i) {
        if (token[i] == '.') {
            if (decimalPoint) return false;  // More than one decimal point
            decimalPoint = true;
        } else if (!isdigit(token[i])) {
            return false;
        }
    }
    return true;
}



// Analyze each token and determine its type
void analyzeToken(const string& token) {
    if (isKeyword(token)) {
        cout << "Token: \"" << token << "\" is a Keyword.\n";
    } else if (isIdentifier(token)) {
        cout << "Token: \"" << token << "\" is an Identifier.\n";
    } else if (isOperator(token)) {
        cout << "Token: \"" << token << "\" is an Operator.\n";
    } else if (isConstant(token)) {
        cout << "Token: \"" << token << "\" is a Constant.\n";
    } else {
        cout << "Token: \"" << token << "\" is Invalid or Undefined.\n";
    }
}

int main() {
    string input;
    cout << "Enter tokens separated by spaces: ";
    getline(cin, input);

    string token;
    for (size_t i = 0; i <= input.size(); ++i) {
        if (isspace(input[i]) || i == input.size()) {
            if (!token.empty()) {
                analyzeToken(token);
                token.clear();
            }
        } else {
            token += input[i];
        }
    }

    return 0;
}

// int x = 10 + 20.5 while return &&
// Token: "int" is a Keyword.
// Token: "x" is an Identifier.
// Token: "=" is an Operator.
// Token: "10" is a Constant.
// Token: "+" is an Operator.
// Token: "20.5" is a Constant.
// Token: "while" is a Keyword.
// Token: "return" is a Keyword.
// Token: "&&" is an Operator.
