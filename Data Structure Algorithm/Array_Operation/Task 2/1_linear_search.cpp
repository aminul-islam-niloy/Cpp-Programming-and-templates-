#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n], i, num, index = -1;
    cout<<"Enter array  element: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter a Number to Search: ";
    cin>>num;
    for(i=0; i<n; i++)
    {
        if(arr[i]==num) {
             index = i;
             cout<<"\nFound at Index No."<<index;
             cout<<endl;
             break;
        }
    }
    if(index == -1) {
        cout<<"Index not found!";
        cout<<endl;
    }
    return 0;
}
