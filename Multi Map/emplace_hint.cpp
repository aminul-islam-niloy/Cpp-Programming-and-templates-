#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    multimap<int,int>m;
    m.emplace_hint(m.begin(),2,30);
     m.emplace_hint(m.begin(),1,40);
     m.emplace_hint(m.begin(),2,60);
      m.emplace_hint(m.begin(),2,20);
     m.emplace_hint(m.begin(),1,70);
     m.emplace_hint(m.begin(),1,10);

     //main logic of this code is starting with decending order.
    
    cout<<" \n the multimap is: ";
    cout<<"KEY\tELEMENT\n";

    for(auto i=m.begin(); i!=m.end(); i++){
       cout<<i->first << "\t"<< i->second<<endl;
    }

}