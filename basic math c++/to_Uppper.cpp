// #include<bits/stdc++.h>
// using  namespace std;

// int main(){
//    char str[100];
//    char  Constr;
 
//    cout<< "Enter any String : ";
//    gets(str);

//    for(int i=0; i<strlen(str); i++){
//     {
//          toupper(str[0]);
//     }
     
//       cout<< Constr;
//    }
   
// }


// #include <iostream>
// #include <string>

// std::string makeFirstWordUppercase(std::string str)
// {
//     bool is_first_word = true;

//     for (char& c : str)
//     {
//         if (is_first_word && isalpha(c))
//         {
//             c = toupper(c);
//             is_first_word = false;
//         }
//         else if (c == ' ')
//         {
//             is_first_word = true;
//         }
//     }

//     return str;
// }

// int main()
// {
//     std::string str = "hello world";
//     std::cout << makeFirstWordUppercase(str) << std::endl;

//     return 0;
// }


#include<iostream>
#include<cctype>
#include<string.h>
using namespace std;

string convert(string s)
{
    bool is_first_word = true;

    for(char &c: s){
        if(is_first_word && isalpha(c)){
            c= toupper(c);
            is_first_word = false;
        }
        else if(c==' '){
           is_first_word = true;
        }
    }
    return s;
}

int main(){
    string  str= "this is me";
    cout<<convert(str);
}