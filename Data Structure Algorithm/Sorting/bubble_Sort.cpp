
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int arr[50];
int main(){
    int n; cin >> n;
    for(int i=0; i<n; ++i)
        cin >> arr[i];
    for(int i=0; i<n-1; ++i){ // n*(n-1)/2 // n*n //
        for(int j=0; j<n-1-i; ++j){
            if( arr[j] > arr[j+1] )
                swap(arr[j], arr[j+1]);
        }
    }
   for(int i=0; i<n; ++i)
        cout << arr[i] << " ";

    return (0);
}