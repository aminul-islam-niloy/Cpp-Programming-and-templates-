#include<iostream>
#include<string>
using namespace std;

int main(){
    char count=0;
    char ch='A';

    for(int ch='A'; ch<='Z'; ch++){
        count=int(ch);
 
         cout<<ch<<" ";
         count++;
         ch=char(count);
    }
}
