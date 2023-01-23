#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[20],b[20],c[50];
    gets(a);
    gets(b);
    strcat(a,b);
    strupr(a);
   // strlwr(b);
    strrev(b);

    cout<<"String is "<<a<<endl;
    cout<<"String is "<<b;


    // while (s[c] != '\0') {
    //       if (s[c] >= 'A' && s[c] <= 'Z') {
    //          s[c] = s[c] + 32;
    //       }
    //       c++;
    //    }
}