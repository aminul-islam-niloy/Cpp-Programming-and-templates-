#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[100],size, isunique;
    int i,j,k;

    cout<<"Enter arry size: ";
    cin>>size;

    cout<<"Enter array element: ";
    for(int i=0; i<size; i++){
         cin>>arr[i];
    }

    //removine

    for(i=0; i<size; i++)
    {
        isunique=1;//current is unique.

        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                //removiing duplicate: 
                for(k=j; k<size-1; k++)
                {
                    arr[k]= arr[k+1];
                }
                    size--;
                    j--;
                    isunique=0;

            }
        }

        //also remove element
        if(isunique !=1)
               {
                for(j=i; j<size-1; j++)
                {
                arr[j]=arr[j+1];
                }
                size--;
                i--;
                }

    }

    cout<<"Print the element is: ";
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }


}