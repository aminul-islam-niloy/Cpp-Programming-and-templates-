#include<bits/stdc++.h>
using namespace std;
  int mx=-19999999;

    int MaximumFound(int arr[], int n)
    {
       
      for(int i=0; i<n; i++)
      {
        mx= max(mx,arr[i]);
          cout<<mx;   
      }  
       
    }

   int sumOfSubArray(int arr[], int n)
   {
        int sum=0;
        for( int i=0; i<n; i++)
        {
            sum=0;
            for(int j=i; j<n; j++)
            {
            sum += arr[j];
            cout<<arr[i]<<endl;
            }
        }

   }

int main()
{ 
    #ifndef RUN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int array[n];
    

    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

  // MaximumFound(array,n);
   sumOfSubArray(array,n);



}