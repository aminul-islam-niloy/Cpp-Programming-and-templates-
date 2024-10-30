#include <iostream>
#include <sstream>
#include <cctype>
#include <set>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    string str = "Munmun is the student of Computer Science & Engineering";
    set<char> vowelsSet, consonantsSet; // Sets to store unique vowels and consonants
    int vowelCount = 0, consonantCount = 0;
    string vowelWords = "", consonantWords = "";
    
    stringstream ss(str);
    string word;
    
    // Loop through each word in the string
    while (ss >> word) {
        char firstChar = tolower(word[0]);
        
        // Divide words based on first character (vowel or consonant)
        if (isVowel(firstChar)) {
            vowelWords += word + " ";
        } else if (isalpha(firstChar)) {
            consonantWords += word + " ";
        }

        // Loop through each character in the word
        for (char ch : word) {
            if (isalpha(ch)) {
                ch = tolower(ch);
                if (isVowel(ch)) {
                    vowelsSet.insert(ch);
                    vowelCount++;
                } else {
                    consonantsSet.insert(ch);
                    consonantCount++;
                }
            }
        }
    }

    // Output results
    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    cout << "Vowels present: ";
    for (char ch : vowelsSet) {
        cout << ch << " ";
    }
    cout << endl;

    cout << "Consonants present: ";
    for (char ch : consonantsSet) {
        cout << ch << " ";
    }
    cout << endl;

    cout << "Words starting with vowels: " << vowelWords << endl;
    cout << "Words starting with consonants: " << consonantWords << endl;

    return 0;
}
