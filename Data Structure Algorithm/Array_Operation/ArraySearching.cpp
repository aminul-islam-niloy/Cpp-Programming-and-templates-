#include<bits/stdc++.h>
using namespace std;

int MaxMIn(int array[],int n)
{
    int min= INT_MAX;
    int max= INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(array[i]>max)
        {
            max= array[i];
        }

        if(array[i]<min){
            min= array[i];
        }
    }

     
    cout<<"Minumum  is: "<<min <<endl;
    cout<<"Maximum  is: "<<max << endl;

}

    int linearSearch(int arr[],int n,int search)
    {
      bool flag=0; 
         for(int i=0; i<n; i++)
        {
            if(search==arr[i])
            {
                cout<<"found index "<<i;
                flag=1;
                break;
            }
            
        }
        if(flag==0)
        {
            cout<<"not Found";
        }
       

    }

    string BinarySearch(int arr[],int n,int search)
    {
      
        int start=0;
        int end=n;

        while(start<=end)
        {
            int mid= (start+end)/2;

           if(arr[mid]==search)
           {
            return "found";
           }
           else if( arr[mid]>search)
           {
             end= mid-1;
           
           }
           else
           {
            start=mid+1;
           }

        }
        return "not found";
        
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
    int search;
    cin>>search;

    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    
  // MaxMIn(array,n);

  //linearSearch(array,n,search);

cout<< BinarySearch(array,n,search)<<endl;
   



}