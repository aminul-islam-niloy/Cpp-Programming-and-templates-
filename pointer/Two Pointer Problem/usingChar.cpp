#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (input.empty()) {
        cout << "Input string is empty." << endl;
        return 1;
    }

    map<char, int> charCount;

    for (char ch : input) {
        if (isalpha(ch)) {  // Check if the character is alphabetic
            ch =tolower(ch);  // Convert to lowercase for case-insensitive counting
            charCount[ch]++;
        }
    }

    cout << "Character occurrences:" <<endl;

    for (const auto& pair : charCount) {
       cout << pair.first << ": " << pair.second << " times" <<endl;
    }

    return 0;
}
