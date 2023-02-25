// program for array prefix sum

#include<bits/stdc++.h>
using namespace std;

//prefix sum 

void prefix_sum(int arr[], int n)
{
   int sum[n+1];

//first index in same

   sum[0]=arr[0];

   for(int i=1; i<n; i++){
         sum[i]= sum[i-1]+arr[i];
   }

//init nth time 
  int t;
  cout<<"Enter time ";cin>>t;

  while(t--){
    int l,r;

   cout<<"\n Enter subarray for sum: ";
   cin>>l>>r;

   //finding sum of an range without burte fource

    if(l==0)
    {
        cout<<"Sum is :"<<sum[r];
    }

   else 
     cout<< "Sum is :"<<sum[r]-sum[l-1];
  }
   
}


int main() {
    int n;
    cout<<"Enter array size: ";
    cin>>n;
     int arr[n+1];

    cout<<"Enter array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    prefix_sum(arr,n );


}