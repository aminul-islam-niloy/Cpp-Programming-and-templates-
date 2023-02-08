#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "aaavvvvbbnnfrr";
    int n= unique(s.begin(), s.end())- s.begin();
    for(int i=0; i<n; i++)
        cout<<s[i];

   
    

}

