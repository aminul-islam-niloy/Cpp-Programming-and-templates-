#include<bits/stdc++.h>
using namespace std;

 int  sum_of_Sub(int arr[], int n)
 {
     int sum=0;

     for(int i=1; i<=n; i++)
     {
        sum+= (i*(n-i+1))*arr[i];
     }
     return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n+4];

    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }

   cout << sum_of_Sub(arr,n)<<endl;
}