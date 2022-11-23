#include <iostream>
#include <string>	
#include <cstdio>	
#include <ctype.h>	
using namespace std;

int main(){
	string s;	
	int words = 0, ch = 0, dig = 0, letter = 0, vow = 0, cons = 0,spc=0;
     string alpha, num, special,word,consonent,vowel;
	ch = s.length();

    cout << "Enter a string ";
	getline(cin, s);  
	

	for (int i = 0; i <= s.length(); ++i) {	
            
            if (isalpha(s[i]))
             { 
                ++letter; 
        
                alpha.push_back(s[i]);

                    if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u')	

                            {
                                ++vow;
                                vowel.push_back(s[i]);
                                
                            }                

                    else  {
                            ++cons;                 
                            consonent.push_back(s[i]);	                 
                            }
		      }
              	
			
             if (s[i] != ' ' || s[i] != '\0')	
			        {
                         word.push_back(s[i]); 
                    }

             if (isdigit(s[i]))
        	        {
                          ++dig;
                         num.push_back(s[i]);           
                     }
                    
             if(s[i]=='@'|| s[i]=='#'||s[i]=='$'|| s[i]=='?')
                    {
                         ++spc;
                         special.push_back(s[i]);
                         
                    }

             if (s[i] != ' ' || s[i] != '\0')	
			        {
                        words++;               
                    }
           
	}
int w= words-letter;
	cout << "\n Number of words= " <<w<< endl;
     cout<<"Words are: "<< " "<< word<<" "; 
 cout<<"\n";
	cout << "\n Number of letter= " << letter << endl;
    cout<<"Letters are: "<<" "<<alpha<<" ";
 cout<<"\n";
    cout << "Number of digits= " << dig << endl;
     cout<<"Numbers are: "<< num <<" "; 
 cout<<"\n";
    cout << "Number of Special Char ="<<spc<<endl;
    cout<<"Special Charcture are: "<< special <<" "; 
 cout<<"\n";
	cout << "Number of vowels= " << vow << endl;
    cout<<"vowels are: "<< vowel <<" "; 
 cout<<"\n";
	cout << "Number of consonants= " << cons << endl;
    cout<<"consonents are: "<< consonent <<" "; 
 cout<<"\n";
	return 0;
}