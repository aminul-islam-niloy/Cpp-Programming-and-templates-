// difference Array problem in c++

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;

//init array and insert value in array

    int arr[n+1];
    cout<<"Enter array element: ";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int  dif[n+2]={0};


//init quary
    int q;
    cout<<"Enter quary: ";
    cin>>q;

    while(q--){
        int l,r,v;
        cout<<"Enter range and value for sum: ";
        cin>>l>>r>>v;

      dif[l]+=v;
      dif[r+1]-=v;
    }
//prefix sum

    for(int i=1; i<n; i++){
        dif[i]+=dif[i-1];
    }
    
// adding two array

     for(int i=0; i<n; i++){
        arr[i] += dif[i];
     }

cout<<endl;

 //print the array
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;

}