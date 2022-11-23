#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int main(){

//    int n;
//    cout<<"Enter array size: ";
//    cin>>n;

//     vector <int> arr;

//     cout<<" Enter array element: ";
//       for(int i=1; i<=n; i++){
//         cin>>arr[i];
//       }

// cout<<"\n  Elements are : ";
//  for(auto &x: arr){
//     cout<<x<<" ";
//  }

 cout<<"Enter target number to search: ";

         int pos;
        cin>>pos;

    vector<int> arr={ 10,15,20,30,35};
    vector<int> arr2={ 2,4,7,8,4,2,5,6,7,11};
    vector<int> arr3={ 62,22,77,11};

      if(binary_search(arr.begin(), arr.end(), pos)){
        cout<< pos<<" exists in arr1 ";
      }
      else
      cout<<pos<<" does not exists in arr1 ";
    cout<<"\n";

      if(binary_search(arr2.begin(), arr2.end(), pos)){
        cout<< pos<< " is exixts in arr2 ";
      }
      else
      cout<<pos<< " is not exists in arr2 "<<"\n";

         cout<<"\n"; 

      if(binary_search(arr3.begin(), arr3.end(), pos)){
        cout<<pos<< " found in arr3 ";
      }

      else
        cout<<pos<< " is not found on arr3 ";

        getch();
}