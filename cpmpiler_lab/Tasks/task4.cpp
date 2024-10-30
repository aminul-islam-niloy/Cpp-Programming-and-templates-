#include <iostream>
#include <string>

using namespace std;

// Check if the token is an Integer Variable
bool isIntegerVariable(const string& token) {
    // Check if the first character is in the range i-n or I-N
    if (!((token[0] >= 'i' && token[0] <= 'n') || (token[0] >= 'I' && token[0] <= 'N'))) {
        return false;
    }
    // Check if the remaining characters are alphanumeric
    for (size_t i = 1; i < token.length(); ++i) {
        if (!isalnum(token[i])) {
            return false;
        }
    }
    return true;
}

// Check if the token is a ShortInt Number
bool isShortInt(const string& token) {
    int length = token.length();

    if (length == 1) {
        // One-digit number (1-9)
        return (token[0] >= '1' && token[0] <= '9');
    } else if (length == 2) {
        // Two-digit number (10-99)
        return (token[0] >= '1' && token[0] <= '9' && isdigit(token[1]));
    } else if (length == 3) {
        // Three-digit number (100-999)
        return (token[0] >= '1' && token[0] <= '9' && isdigit(token[1]) && isdigit(token[2]));
    } else if (length == 4) {
        // Four-digit number (1000-9999)
        return (token[0] >= '1' && token[0] <= '9' && isdigit(token[1]) && isdigit(token[2]) && isdigit(token[3]));
    }
    return false;
}

// Check if the token is a LongInt Number
bool isLongInt(const string& token) {
    // Must be at least 5 characters long, starting with 1-9
    if (token.length() < 5 || token[0] < '1' || token[0] > '9') {
        return false;
    }
    // Check if all remaining characters are digits
    for (size_t i = 1; i < token.length(); ++i) {
        if (!isdigit(token[i])) {
            return false;
        }
    }
    return true;
}

void analyzeToken(const string& token) {
    if (isIntegerVariable(token)) {
        cout << "Token: \"" << token << "\" is an Integer Variable.\n";
    } else if (isShortInt(token)) {
        cout << "Token: \"" << token << "\" is a ShortInt Number.\n";
    } else if (isLongInt(token)) {
        cout << "Token: \"" << token << "\" is a LongInt Number.\n";
    } else {
        cout << "Token: \"" << token << "\" is Invalid or Undefined.\n";
    }
}

int main() {

    while(1)
    {
    string input;
    cout << "Enter a token: ";
    cin >> input;

    analyzeToken(input);
    }
    

    return 0;
}


// Enter a token: iVar123
// Token: "iVar123" is an Integer Variable.

// Enter a token: 123
// Token: "123" is a ShortInt Number.
// Enter a token: x987
// Token: "x987" is Invalid or Undefined.

