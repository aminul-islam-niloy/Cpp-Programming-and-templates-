#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> myvector{ 1,2,3,4,5,6,7,8,9};
    for(auto i= myvector.begin(); i!= myvector.end(); i++){
        if(*i%2!=0){
           myvector.erase(i);
           i--;
        }
    }

    for(auto it = myvector.begin(); it != myvector.end(); it++){
        cout<<" "<<*it;
    }

    vector<int>vector;
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.clear();
      cout<<"\n Output will be empty";
    for(auto it = vector.begin(); it != vector.end(); it++){
        cout<< ' '<<*it;
    }

}