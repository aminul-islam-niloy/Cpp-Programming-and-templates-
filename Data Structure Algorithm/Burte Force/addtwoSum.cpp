#include<iostream>
#include<vector>
using namespace std;


int main()

{
    int arr[] = {2,7,11,15};
    int target=9;

    vector <int> res;

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        for(int j=i+1; j<sizeof(arr); j++){
            if((arr[i]+ arr[j]) == target)
            {
              res.push_back(i);
              res.push_back(j);
            }
        }

    }
   
   for(int x: res){
    cout<<x<<" ";
   }
   
   
}