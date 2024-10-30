#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Check if the token is a Character Variable
bool isCharacterVariable(const string& token) {
    // Check if it starts with "ch_"
    if (token.substr(0, 3) != "ch_") return false;
    // Check the rest are alphanumeric characters
    for (size_t i = 3; i < token.length(); ++i) {
        if (!isalnum(token[i])) return false;
    }
    return true;
}

// Check if the token is a Binary Variable
bool isBinaryVariable(const string& token) {
    // Check if it starts with "bn_"
    if (token.substr(0, 3) != "bn_") return false;
    // Check the rest are alphanumeric characters
    for (size_t i = 3; i < token.length(); ++i) {
        if (!isalnum(token[i])) return false;
    }
    return true;
}

// Check if the token is a Binary Number
bool isBinaryNumber(const string& token) {
    // Check if it starts with "0"
    if (token[0] != '0') return false;
    // Check the rest contain only '0' or '1'
    for (size_t i = 1; i < token.length(); ++i) {
        if (token[i] != '0' && token[i] != '1') return false;
    }
    return true;
}

// Analyze each token to determine its type
void analyzeToken(const string& token) {
    if (isCharacterVariable(token)) {
        cout << "Token: \"" << token << "\" is a Character Variable.\n";
    } else if (isBinaryVariable(token)) {
        cout << "Token: \"" << token << "\" is a Binary Variable.\n";
    } else if (isBinaryNumber(token)) {
        cout << "Token: \"" << token << "\" is a Binary Number.\n";
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

//ch_var1 bn_var2 0101 1011 ch123 bn_ab12 101 xy

// Token: "ch_var1" is a Character Variable.
// Token: "bn_var2" is a Binary Variable.
// Token: "0101" is a Binary Number.
// Token: "ch123" is a Character Variable.
// Token: "bn_ab12" is a Binary Variable.
// Token: "101" is Invalid or Undefined.
// Token: "xyz" is Invalid or Undefined.

