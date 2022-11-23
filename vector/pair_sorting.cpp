#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<algorithm>



bool sizeac( const pair<int,int>& v1,
                const pair<int,int>& v2){
return v1.second<v2.second;

}


int main(){
    vector<pair<int,int> > vect;
    int arr[]= {3,5,8,2};
    int arr1[]= {1,12,6,9};

    int n= sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        vect.push_back(make_pair(arr[i],arr1[i]));
    }

    cout<<" Vector before sorting elements are : ";
    for(int i=0; i<n; i++){
        cout << vect[i].first << " "
            << vect[i].second << endl;
    }

    sort(vect.begin(), vect.end(), sizeac);


    cout<<" Vector after sorting elements are : ";
    for(int i=0; i<n; i++){
        cout << vect[i].first << " "
            << vect[i].second << endl;
    }

}
