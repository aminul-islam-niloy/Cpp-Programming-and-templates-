#include <iostream>
#include <stack>
#include <algorithm>
#include<conio.h>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int priotity(char op) {
    if (op == '^')
        return 3;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return -1;
}

string infixToPrefix(const string & expression) {
    string prefix;
    stack<char> stack;
    string reverse_exp = expression;
    
    reverse(reverse_exp.begin(), reverse_exp.end());

    for (char& c : reverse_exp) {
        if (isalpha(c) || isdigit(c))
            prefix += c;
        else if (c == ')')
            stack.push(c);
        else if (c == '(') {
            while (!stack.empty() && stack.top() != ')') {
                prefix += stack.top();
                stack.pop();
            }
            stack.pop(); 
        } else if (isOperator(c)) {
            while (!stack.empty() && priotity(c) < priotity(stack.top())) {
                prefix += stack.top();
                stack.pop();
            }
            stack.push(c);
        }
    }

    while (!stack.empty()) {
        prefix += stack.top();
        stack.pop();
    }

    reverse(prefix.begin(), prefix.end());
    return prefix;
}

int main() {
   string exp;
    cout << "Enter an infix expression: ";
    getline(cin, exp);

   string prefixExpression = infixToPrefix(exp);
    cout << "Prefix expression: " << prefixExpression << endl;

    return 0;
    getch();
}
