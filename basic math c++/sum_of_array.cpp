#include <iostream>
using namespace std;
 
#define MAX_SIZE 100

int sum(int arr[], int start, int len);
 
 
int main()
{
    int arr[MAX_SIZE];
    int num, i, sumofarray;
 
 
    cout<<"Enter size of the array: ";
    cin>>num;
    cout<<"Enter elements in the array: ";
    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }
 
 
    sumofarray = sum(arr, 0, num);
    cout<<"Sum of array elements: "<<sumofarray;
 
    return 0;
}
 
// Recursively finding the sum of elements in an array.
int sum(int arr[], int start, int len)
{
    
    if(start >= len)
        return 0;
 
    return (arr[start] + sum(arr, start + 1, len));
}