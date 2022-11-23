#include <iostream>
#include <string>	
#include <cstdio>	
#include<vector>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#include <ctype.h>	
using namespace std;

int main(){
	string s;
    char b[30];	
	int words = 0, ch = 0, dig = 0, letter = 0, vow = 0, cons = 0,spc=0;
	
    cout << "Enter a string ";
	getline(cin, s);  

    int mark[1000]={0};
    int i,j=0,kc=0,ic=0,lc=0,mc=0,nc=0,oc=0,aaa=0;
    vector < string > k;
    vector<char >id;
    vector<char>lo;
    vector<char>ma;
    vector<string>nu;
    vector<char>ot;



	for (int i = 0; i <= s.length(); ++i) {
		
        if (isalpha(s[i]))	
        { 
            ++letter; 

        }
			
		if (s[i] == ' ' || s[i] == '\0')	
			        {
                        ++words;
                        
                       
                    }
                     
 else if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9' || s[i]=='.' ||s[i] == ' ' || s[i] == '\n' || s[i] == ';')
        {

            if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9' || s[i]=='.') 
           
                          b[aaa++]=s[i];
            if((s[i] == ' ' || s[i] == '\n' || s[i] == ';') && (aaa != 0)){
                   b[aaa] = '\0';
                   aaa = 0;
                   char arr[30];
                    strcpy(arr,b);
                        nu.push_back(arr);
                    ++nc;

                }
        }
                    

            else if(s[i]=='@'|| s[i]=='#'||s[i]=='$'|| s[i]=='?')
                    {
                         ++spc;
                                {
                                    int aa=ch;

                                    if(mark[aa]!=1)
                                    {
                                        ot.push_back(ch);
                                        mark[aa]=1;
                                        ++oc;
                                    }
                                }
                         
                    }
	}

	cout << "Number of words= " << words << endl;
    cout << "Number of letter= "<<letter << endl;
    cout << "Number of digits= " << dig << endl;
    cout << "Number of Special Char ="<<oc<<endl;

 
 printf("Numerical Values: ");
    for(int f=0;f<nc;++f){
            if(f==nc-1){
                cout<<nu[f]<<"\n";
            }
            else {
                cout<<nu[f]<<", ";
            }

    }

    printf("Others: ");
    for(int f=0;f<oc;++f){
            if(f==oc-1){
                cout<<ot[f]<<"\n";
            }
            else {
                cout<<ot[f]<<" ";
            }

    }


	return 0;
}