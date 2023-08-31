
#include<bits/stdc++.h>
using namespace std;

int SelectionSort(int arr[],int n)
{
  

    for(int i=0; i<n-1;i++)
    {
        for(int j=i+1; j<n; j++)
        {
             if(arr[j]<arr[i])
             {
               int temp= arr[j];
               arr[j]= arr[i];
               arr[i]=temp;
             }
        }
       
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
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

 

 // SelectionSort(array,n);

   



}