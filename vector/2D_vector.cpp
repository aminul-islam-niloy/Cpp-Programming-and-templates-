#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool sizecom(const vector<int> & v1,
             const vector<int> &v2)
{
    return v1.size() > v2.size();
}

int main(){
    vector<vector<int>> vect{{1,2},{3,4,5},{6}};

cout<<"Before sorting : ";
    for(int i=0; i<vect.size(); i++){
        for(int j=0; j<vect[i].size(); j++)
        
            cout<<vect[i][j]<<" ";
            cout<<endl;
        
        
    }

    sort(vect.begin(), vect.end(), sizecom );



cout<<"After sorting : ";
    for(int i=0; i<vect.size(); i++){
        for(int j=0; j<vect[i].size(); j++)
        
            cout<<vect[i][j]<<" ";
            cout<<endl;
        
        
    }
}