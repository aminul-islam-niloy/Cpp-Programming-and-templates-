

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i;
    cin >> n;
    vector<int> v;
    int x;
    for(i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
   for(i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
   }

    return 0;
}

