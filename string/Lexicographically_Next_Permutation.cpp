#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s= {"gfg"};
    bool val= next_permutation(s.begin(),s.end());

    if(val == false){
        cout<<" N0 word is possible";
    }
    else
    cout<<s<<endl;
}