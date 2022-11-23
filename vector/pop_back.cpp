#include<iostream>
#include<vector>
using namespace std;

int main(){
    int count=0;

    vector<int> vector;
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);

    while(! vector.empty()){
        vector.pop_back();
        count++;

    }
    cout<<count;
}