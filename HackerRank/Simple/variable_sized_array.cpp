#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define max 1000
using namespace std;


int main() {
    
    int array[max][max], size[max];
    int n,i,j,q,s, pos1,pos2;
     cin>>n>>q;

     for(i=0; i<n; i++){
        cin>>s;
        for(j=0; j<s; j++){
            cin>>array[i][j];
        }
     }
     for(i=0; i<q; i++){
        cin>>pos1>>pos2;
        cout<<array[pos1][pos2]<<endl;
     }

    return 0;
}