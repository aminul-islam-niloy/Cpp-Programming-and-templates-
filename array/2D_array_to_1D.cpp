//Copy elements of a 2D array into a 1D/linear array and print the elements of group 3 from the 1D array.

#include<iostream>
using namespace std;

#define n 3

void print1DArray(int arr[])
{
    int x = n*n, i;
    for(i=0; i<x; i++){
        printf(" %d ", arr[i]);
    }
}

int main()
{
    int array[n][n], rowArray[n*n], colArray[n*n], i, j, k=0, l=0;
    cout<<" Enter 2D array elements (Row = 3, Col=3) "<<endl;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin>>array[i][j];
        }
    }

    cout<<"\n\n 2D ARRAY: "<<endl;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
           cout<< array[i][j];
        }
        cout<<" \n";
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            rowArray[k] = array[i][j];
            k++;
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            colArray[l] = array[j][i];
            l++;
        }
    }

    cout<<"\n Linear array (Row wise)"<< endl;
    print1DArray(rowArray);

    cout<<"\n Linear array (Row wise)"<<endl;
    print1DArray(colArray);

    cout<<"\n";
    return 0;
}