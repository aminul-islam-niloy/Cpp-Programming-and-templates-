#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    string str = "Md. Tareq Zaman, Part-3, 2011";
    
    int letters = 0, digits = 0, others = 0, words = 0;
    string letter_str = "", digit_str = "", other_str = "";
    
    // Counting words based on space
    for (int i = 0; i < str.length(); ++i) {
        char ch = str[i];
        
        if (isalpha(ch)) { // Check if it's a letter
            letters++;
            letter_str += ch;
        } 
        else if (isdigit(ch)) { // Check if it's a digit
            digits++;
            digit_str += ch;
        } 
        else if (isspace(ch)) { // Check for word separation
            if (i == 0 || !isspace(str[i-1])) {
                words++;
            }
        }
        else { // Other characters (punctuation, etc.)
            others++;
            other_str += ch;
        }
    }

    // Final word count adjustment
    if (!str.empty()) words++;

    // Output results
    cout << "Number of words: " << words << endl;
    cout << "Number of letters: " << letters << endl;
    cout << "Number of digits: " << digits << endl;
    cout << "Number of other characters: " << others << endl;

    cout << "Letters: " << letter_str << endl;
    cout << "Digits: " << digit_str << endl;
    cout << "Other characters: " << other_str << endl;

    return 0;
}
