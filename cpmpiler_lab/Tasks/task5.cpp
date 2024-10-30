#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Check if the token is a Float Variable
bool isFloatVariable(const string& token) {
    // Check if the first character is in the allowed range
    if (!((token[0] >= 'a' && token[0] <= 'h') || (token[0] >= 'A' && token[0] <= 'H') ||
          (token[0] >= 'o' && token[0] <= 'z') || (token[0] >= 'O' && token[0] <= 'Z'))) {
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

// Check if the token is a Float Number
bool isFloatNumber(const string& token) {
    int len = token.length();
    if (len < 4) return false;  // Minimum length for "0.xx" or "x.xx"
    
    if (token[0] == '0') {
        // Format: 0.xx
        return (token[1] == '.' && isdigit(token[2]) && isdigit(token[3]) && len == 4);
    } else if (isdigit(token[0])) {
        // Format: x.xx with digits before decimal and two digits after
        size_t i = 0;
        while (i < len && isdigit(token[i])) ++i;
        if (i < len && token[i] == '.' && isdigit(token[i + 1]) && isdigit(token[i + 2]) && i + 2 == len - 1) {
            return true;
        }
    }
    return false;
}

// Check if the token is a Double Number
bool isDoubleNumber(const string& token) {
    int len = token.length();
    if (len < 5) return false;  // Minimum length for "0.xxx"

    if (token[0] == '0') {
        // Format: 0.xxx... (three or more decimal places)
        if (token[1] == '.' && isdigit(token[2]) && isdigit(token[3]) && isdigit(token[4])) {
            for (size_t i = 4; i < len; ++i) {
                if (!isdigit(token[i])) return false;
            }
            return true;
        }
    } else if (isdigit(token[0])) {
        // Format: x.xxx... (three or more decimal places)
        size_t i = 0;
        while (i < len && isdigit(token[i])) ++i;
        if (i < len && token[i] == '.' && isdigit(token[i + 1]) && isdigit(token[i + 2]) && isdigit(token[i + 3])) {
            for (size_t j = i + 3; j < len; ++j) {
                if (!isdigit(token[j])) return false;
            }
            return true;
        }
    }
    return false;
}

// Analyze each token to determine its type
void analyzeToken(const string& token) {
    if (isFloatVariable(token)) {
        cout << "Token: \"" << token << "\" is a Float Variable.\n";
    } else if (isFloatNumber(token)) {
        cout << "Token: \"" << token << "\" is a Float Number.\n";
    } else if (isDoubleNumber(token)) {
        cout << "Token: \"" << token << "\" is a Double Number.\n";
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


// aVar1 0.12 5.23 0.1234 123.4567 xyz!

// Token: "aVar1" is a Float Variable.
// Token: "0.12" is a Float Number.
// Token: "5.23" is a Float Number.
// Token: "0.1234" is a Double Number.
// Token: "123.4567" is a Double Number.
// Token: "xyz!" is Invalid or Undefined.

