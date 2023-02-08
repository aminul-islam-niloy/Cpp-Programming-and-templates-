#include<bits/stdc++.h>
using namespace std;

int main(){
    string s= "dhfjdgfbfbgfffb";
      cout<<*max_element(s.begin(),s.end())<<endl;
        cout<<*min_element(s.begin(),s.end())<<endl;

        s.erase(s.begin()+6, s.begin()+10);
        cout<<"Original string is: "<<s<<endl;

      

        cout<<"\n";

        if(s.find("fb") != -1)
        {
            cout<<" Substring found";
        }
        else
        cout<<"Substring not found";
   
}