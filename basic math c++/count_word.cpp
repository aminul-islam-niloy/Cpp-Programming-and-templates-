#include<bits/stdc++.h>
using namespace std;

int main(){
     char str[100];
     int i, len , count=0;

     cout<<"Enter String: ";
     gets(str);
     
    len= strlen(str);

    for(int i=0; i<len; i++){
        if(str[i]==' '){
            count++;
        }
    }

    cout<<"Total number of word in this sentence is: "<<count;

}