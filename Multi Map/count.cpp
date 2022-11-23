#include<bits/stdc++.h>
using namespace std;

int main(){
    multimap< int, int> m;
    m.emplace(1,80);
    m.emplace(2,15);
    m.emplace(3,20);
    m.emplace(4,25);
    m.emplace(1,50);
    m.emplace(6,5);


cout<<"1 exists in the list is : "<<m.count(1);
cout<<'\n';


cout<<"2 exist in the list is : "<<m.count(2);

//main hint is startin gwith accending order
    cout<<" \n after finding the map is : \n";
    cout<< "KEY\t ELEMENT\n ";
    for(auto i = m.find(3); i!=m.end(); i++){
        cout<<i->first<< '\t'<< i->second<<endl;
    }
}