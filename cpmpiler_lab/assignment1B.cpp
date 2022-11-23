#include <iostream>
#include <string>
#include <vector>
using namespace std;

        bool is_Char(char ch) {
            if (ch >= 'A' && ch <= 'Z')
                return true;
            if (ch >= 'a' && ch <= 'z')
                return true;
            return false;
        }

        bool is_Vowel(char ch) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                return true;
            }
            return false;
        }


    void vowels_consonants(string str) {
        
        vector<char>vowel,consonent;

        int vowels = 0, consonants = 0;

        for (int i = 0; i < str.size(); i++) {
            if (is_Vowel(str[i])) {
                vowels++;
                vowel.push_back(str[i]);
            }

            if (!is_Vowel(str[i]) && is_Char(str[i])) {
                consonants++;
                consonent.push_back(str[i]);
            }
        }

        cout << "Numbers of Vowels: " << vowels << endl;
        cout << " Vowels are : ";
        for(char v:vowel){
            cout<<v<<" ";
        }
      cout << endl;
        cout << "\n Numbers of Consonants: " << consonants << endl;
        cout << " Consonents are : " ;
        for(char c:consonent){
            cout<<c<<" ";
        } 

         cout << endl;  
    }


    void separate_by(string e) {
        
        vector<string> Vowel, consonent;
        
        string token = "";
        for (int i = 0; i < e.size(); i++) {
            if (e[i] == ' ' || i == e.size() - 1) {
                if (i == e.size() - 1) {
                    token += e[i];
                }
                if (is_Vowel(token[0]) && is_Char(token[0])) {
                    Vowel.push_back(token);
                } else if (!is_Vowel(token[0]) && is_Char(token[0])) {
                    consonent.push_back(token);
                }
                token = "";
            } else {
                token += e[i];
            }
        }

        cout << "Vowels part: ";
        for (string v : Vowel) {
            cout << v << " ";
        }

        cout << endl;

        cout << "Consonants part: ";
        for (string c : consonent) {
            cout << c << " ";
        }
        cout << endl;
    }


int main() {
    string s;
    cout<<"Enter String : ";
    getline(cin,s);

    vowels_consonants(s);
    separate_by(s);
}

