#include<bits/stdc++.h>
using namespace std;

int main(){
    string s= "AminulislaNiloy";
    int n=3;

    cout<<s.length()-n <<endl;

    for(int i=0; i<s.length()-n +1; i++){
        cout<<s.substr(i,n)<<" ";
    }
}

