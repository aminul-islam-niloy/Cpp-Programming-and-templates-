#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> Letters, Digits, spc,wordsin;

void separates(string s);
void vowels_consonants(string s);
void  separate_by(string s);

int main() {
    string s;
    cout<<" Enter String : ";
    getline(cin,s);
    separates(s);
    vowels_consonants(s);
    separate_by(s);
}



        bool Char(char ch) {
            if (ch >= 'A' && ch <= 'Z')
                return true;
            if (ch >= 'a' && ch <= 'z')
                return true;
            return false;
        }


        bool is_Vowel(char ch) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
            {
                return true;
            }
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

    int letters = 0, digits = 0, other = 0,word=0, special_c=0,  w=0;
       

    for (int i = 0; i < str.size(); i++) {

        // if(str[i]==' ')
        //  word++;

        if (Char(str[i])) {
            Letters.push_back(str[i]);
            letters++;
        }

        if (Digit(str[i])) {
            Digits.push_back(str[i]);
            digits++;
        }

        if (Special_char(str[i]) ) 
        {
            spc.push_back(str[i]);
            special_c++;

        }
        

         if (str[i] != ' ' || str[i] != '\0'){
             
             wordsin.push_back(str[i]); 
            
        } 
         if (str[i] == ' ' && (Char(str[i + 1]) || Digit(str[i + 1])))
        {
            w++;
        }
        
    }


 //cout << "Numbers of Words: " << w+1 << endl;
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

 cout << "Number of special char : " << special_c << endl;
    cout << "Special Char: " ;
    for (char Spc : spc)
        cout << Spc << " ";
    cout << endl << endl;
}

  void vowels_consonants(string str) {
        
        vector<char>vowel,consonent;

        int vowels = 0, consonants = 0;

        for (int i = 0; i < str.size(); i++) {
            if (is_Vowel(str[i])) {
                vowels++;
                vowel.push_back(str[i]);
            }

            if (!is_Vowel(str[i]) && Char(str[i])) {
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
        for (int i = 0; i < e.size(); i++)
         {
            if (e[i] == ' ' || i == e.size() - 1)
             {
                if (i == e.size() - 1) 
                {
                    token += e[i];
                }
                if (is_Vowel(token[0]) && Char(token[0])) {
                    Vowel.push_back(token);
                } else if (!is_Vowel(token[0]) && Char(token[0])) {
                    consonent.push_back(token);
                }
                token = "";
            } 
            else {
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


