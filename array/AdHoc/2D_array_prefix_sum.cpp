//2d prefix sum

#include<bits/stdc++.h>
using namespace std;

int main(){

    //init 2d  array

    int n,m;
    cout<<"Enter array size [n] & [m] : ";
    cin>>n>>m;

    //enter array element

    int arr[n][m];
    cout<<" Enter array [n] & [m] : "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
  
  //init 2d storage array named pre[n][m]

    int pre[n][m];

  // first of pre is the same of 1st of array index
    pre[0][0]=arr[0][0];

    // calculating 1st row and column prefix sum
    for (int i=1; i<m; i++)
    {
        pre[0][i] = pre[0][i-1] + arr[0][i];
    }

     for (int i=1; i<n; i++)
    {
        pre[i][0] = pre[i-1][0] + arr[i][0];
    }

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
            pre[i][j]= pre[i][j-1]+pre[i-1][j] 
                     + arr[i][j]- pre[i-1][j-1];
        }
    }

    //print the final array
    cout<<endl;

     cout<<"Print result array element : ";
     cout<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<pre[i][j]<<" ";
            
        }
        cout<<endl;
    }


}