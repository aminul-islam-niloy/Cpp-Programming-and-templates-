#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    int arr[n], i, j;
   
    cout<<"Enter Array Elements: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
       

    for (i = 1; i < n; i++)
    {
        int var = arr[i]; 
        for (j = i - 1; j >= 0; j--)
        {
            
            if (arr[j] > var)
            {  
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = var;
    }


    cout<<"\nThe New Array :\n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}

