#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>list;
    list.push_back(2);
    list.push_back(3);

    list.push_back(99);
    list.push_back(7);


    // for(int &x: list){
    //     cout<<x<<" ";
    // }

    // elements of list are retrieved through iterator.

    
    for (vector<int>::iterator it = list.begin(); it != list.end(); ++it)
        cout << *it << " ";


}