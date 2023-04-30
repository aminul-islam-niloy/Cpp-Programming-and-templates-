#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n], i, num;
    cout<<"Insert element in ascending order : ";
    for(i=0; i<n; i++)
    {
       cin>>arr[i];
    }
        
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    
    int first = 0;
    int last = n-1;
    int mid = (first+last)/2;
    while(first <= last)
    {
        if(arr[mid]<num)
        {
             first = mid+1;
        }
           
        else if(arr[mid]==num)
        {
            cout<<"\n number, "<<num<<" found at index "<<mid;
            break;
        }
        else
            last = mid-1;
            mid = (first+last)/2;
    }
    if(first>last)
        cout<<"\n number, "<<num<<" is not found ";
        cout<<endl;
    
}