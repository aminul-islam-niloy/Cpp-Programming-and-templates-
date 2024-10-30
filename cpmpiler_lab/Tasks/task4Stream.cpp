#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Check if the token is an Integer Variable
bool isIntegerVariable(const string& token) {
    if (!((token[0] >= 'i' && token[0] <= 'n') || (token[0] >= 'I' && token[0] <= 'N'))) {
        return false;
    }
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
        return (token[0] >= '1' && token[0] <= '9');
    } else if (length == 2) {
        return (token[0] >= '1' && token[0] <= '9' && isdigit(token[1]));
    } else if (length == 3) {
        return (token[0] >= '1' && token[0] <= '9' && isdigit(token[1]) && isdigit(token[2]));
    } else if (length == 4) {
        return (token[0] >= '1' && token[0] <= '9' && isdigit(token[1]) && isdigit(token[2]) && isdigit(token[3]));
    }
    return false;
}

// Check if the token is a LongInt Number
bool isLongInt(const string& token) {
    if (token.length() < 5 || token[0] < '1' || token[0] > '9') {
        return false;
    }
    for (size_t i = 1; i < token.length(); ++i) {
        if (!isdigit(token[i])) {
            return false;
        }
    }
    return true;
}

// Analyze each token and determine its type
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
    string input;
    cout << "Enter tokens separated by spaces: ";
    getline(cin, input);

    stringstream ss(input);
    string token;

    while (ss >> token) {
        analyzeToken(token);
    }

    return 0;
}

// iVar123 123 12345 x987

// Token: "iVar123" is an Integer Variable.
// Token: "123" is a ShortInt Number.
// Token: "12345" is a LongInt Number.
// Token: "x987" is Invalid or Undefined.
