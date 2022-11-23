#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> Letters, Digits, spc,wordsin;
void separates(string s);

int main() {
    string s;
    cout<<" Enter String : ";
    getline(cin,s);
    separates(s);
}

bool Char(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return true;
    if (ch >= 'a' && ch <= 'z')
        return true;
    return false;
}

        bool Digit(char ch) {
            if (ch >= '0' && ch <= '9')
                return true;
            return false;
        }

        bool Special_char(char ch){
            if(ch=='!'||ch=='@'|| ch=='#'||ch=='$'||ch=='?'){
                return true;

            }
            else return false;
        }

void separates(string str) {

    int letters = 0, digits = 0, other = 0,word=0,special_c=0;

    for (int i = 0; i < str.size(); i++) {
        if (Char(str[i])) {
            Letters.push_back(str[i]);
            letters++;
        }

        if (Digit(str[i])) {
            Digits.push_back(str[i]);
            digits++;
        }

        if (Special_char(str[i]) ) {
            spc.push_back(str[i]);
            special_c++;

        }
        if (str[i] == ' ' && (Char(str[i + 1]) || Digit(str[i + 1]))){
             word++;
        }

         if (str[i] != ' ' || str[i] != '\0'){
             
             wordsin.push_back(str[i]); 
        } 
    }

 cout << "Numbers of Words: " << word << endl;
   cout << "Words : " ;
    for (char w :wordsin )
        cout << w ;
    cout << endl << endl;

cout << "Numbers of Letters: " << letters << endl;
   cout << "Letters: " ;
    for (char l : Letters)
        cout << l << " ";
    cout << endl << endl;

cout << "Numbers of digits: " << digits << endl;
    cout << "Digits: ";
    for (char d : Digits)
        cout << d << " ";
    cout << endl << endl;

 cout << "Number of Specil characture : " << special_c << endl;
    cout << "Special Char: " ;
    for (char Spc : spc)
        cout << Spc << " ";
    cout << endl << endl;
}


