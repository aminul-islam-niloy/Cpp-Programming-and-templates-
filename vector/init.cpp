#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){

//system 1
    // vector<int> vect;
    // vect.push_back(1);
    // vect.push_back(2);
    // vect.push_back(3);


//system 2
// int n=3;
//  vector<int> vect(n, 10);


//system 3
// vector<int> vect{2,4,5,6,7};

//system 4
//  int arr[]= {2,4,5,6,7,8,8,};
//  int n= sizeof(arr)/ sizeof(arr[0]);

//  vector<int> vect(arr,arr+n);

//system 5

// vector<int> vect1{10,20,30};
// vector<int> vect(vect1.begin(), vect1.end());


//system 6

// vector<int> vect(10);
// int v=5;

// fill(vect.begin(), vect.end(),v);


//system 7
int arr[10000];
iota(arr,arr+100000,1);
for(int i=0; i<100000; i++){
    cout<<arr[i]<<" ";
}

    // for(int x:vect){
    //     cout<<x<<" ";
    // }
}