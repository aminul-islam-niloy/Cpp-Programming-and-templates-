#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>

using namespace std;

// List of C++ keywords
unordered_set<string> keywords = {
    "auto", "break", "case", "char", "const", "continue", "default", "do", "double",
    "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register",
    "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef",
    "union", "unsigned", "void", "volatile", "while", "class", "private", "public",
    "protected", "namespace", "using", "template", "typename", "this", "new", "delete",
    "try", "catch", "bool", "inline", "virtual", "friend", "throw"};

// List of arithmetic operators
unordered_set<string> arithmeticOperators = {"+", "-", "*", "/", "%"};

// Check if a string is a keyword
bool isKeyword(const string &token)
{
    return keywords.find(token) != keywords.end();
}

// Check if a string is an identifier
bool isIdentifier(const string &token)
{
    if (!isalpha(token[0]) && token[0] != '_')
        return false;
    for (size_t i = 1; i < token.length(); ++i)
    {
        if (!isalnum(token[i]) && token[i] != '_')
            return false;
    }
    return true;
}

// Check if a string is an integer
bool isInteger(const string &token)
{
    for (char ch : token)
    {
        if (!isdigit(ch))
            return false;
    }
    return true;
}

// Check if a string is a float
bool isFloat(const string &token)
{
    bool decimalPoint = false;
    for (char ch : token)
    {
        if (ch == '.')
        {
            if (decimalPoint)
                return false; // More than one decimal point
            decimalPoint = true;
        }
        else if (!isdigit(ch))
        {
            return false;
        }
    }
    return decimalPoint; // Must have one decimal point to be a float
}

// Check if a string is an arithmetic operator
bool isArithmeticOperator(const string &token)
{
    return arithmeticOperators.find(token) != arithmeticOperators.end();
}

void analyzeToken(const string &token)
{
    if (isKeyword(token))
    {
        cout << "Output: Keyword\n";
    }
    else if (isInteger(token))
    {
        cout << "Output: Integer\n";
    }
    else if (isFloat(token))
    {
        cout << "Output: Float\n";
    }
    else if (isIdentifier(token))
    {
        cout << "Output: Identifier\n";
    }
    else if (isArithmeticOperator(token))
    {
        cout << "Output: Arithmetic Operator\n";
    }
    else
    {
        cout << "Output: Invalid or Undefined Token\n";
    }
}

int main()
{

    while (1)
    {
        string input;
        cout << "Enter a token: ";
        cin >> input;

        analyzeToken(input);
    }

    return 0;
}
