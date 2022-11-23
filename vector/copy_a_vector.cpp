#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> vector1{1,2,3,4};

// vector<int>vector2;

// by Iterative method

//  for(int i=0; i<vector1.size(); i++){
//     vector2.push_back(vector1[i]);
//  }

//demonstarate copy of a vector

//vector2= vector1;

// vector<int>vector2(vector1);
//constractor method deep copy;

vector<int>vector2;
copy(vector1.begin(), vector1.end(),back_inserter(vector2));
//copying vector by copying function

 cout<<"Old vector elements are : ";
 for(int i=0; i<vector1.size(); i++){
    cout<<vector1[i]<<" ";
 }

 cout<<" \n New vector elements are: ";
 for(int i=0; i<vector2.size(); i++){
    cout<<vector2[i]<<" ";
 }
 cout<<endl;

 vector1[0]=2;
 cout<<" 1st element of the new vector is : ";
 cout<<vector1[0]<<endl;
  cout<<vector2[0]<<endl;
}
