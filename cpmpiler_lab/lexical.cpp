#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
 
using namespace std;
 
int isKeyword(char buffer[]) { char keywords[33][10] = {"main","auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto", "if","int","long","register","return","short","signed",
                            "sizeof","static","struct","switch","typedef","union",  "unsigned","void","volatile","while"};
    
    
    int i, flag = 0;
    
    for(i = 0; i < 33; ++i){
        if(strcmp(keywords[i], buffer) == 0){
            flag = 1;
            break;
        }
    }
    
    return flag;
}
 
int main(){
    int v,c,vc,cc,w,l,d,o=0;

    char ch, buffer[20];
    char  operators[] = "+-*/%=><";
    char special_ch[]= "!@#$%^&?";
    ifstream file("lexical.txt");
    int i,j=0;
    
    while(!file.eof()){
           ch = file.get();
           
        for(i = 0; i < 8; ++i){
               if(ch == operators[i]){
                
                 cout<<ch<<" is an operatior"<<endl;
               }
               else if(ch==special_ch[i]){
                cout<<ch<<" Is an Special char"<<endl;
               }
                         
           }
           
           if(isalnum(ch)){
               buffer[j++] = ch;
           }
        


           else if ((ch == ' ' || ch == '\n'|| ch==',' ) && (j != 0))
           {     
                   buffer[j] = '\0';
                   j = 0;
                                      
                   if(isKeyword(buffer) == 1)
                       cout<<buffer<<" is keyword\n";
                   else
                       cout<<buffer<<" is indentifier\n";
           }
           
    }
    
    file.close();
    
    return 0;
}