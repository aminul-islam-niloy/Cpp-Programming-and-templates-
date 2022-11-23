#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<int, string> pair1(17122,"Niloy");
    pair<int,string>pair2(1838,"ICE");

    cout<<"Before swaping pair "<<endl;
    cout<<pair1.first<<"  "<<pair1.second<<" and ";
    cout<<pair2.first<< " and "<<pair2.second<<endl;

    pair1.swap(pair2);
 cout<<"After swaping pair "<<endl;
    cout<<pair1.first<<" and "<<pair1.second<<" and ";
    cout<<pair2.first<< " and "<<pair2.second<<endl;

}

