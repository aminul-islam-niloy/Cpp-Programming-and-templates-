#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
      vector< vector<int> > vect{
                        {3, 5, 1}, 
                        {4, 8, 6},
                        {7, 2, 9}};

      int m= vect.size();
      int n= vect[0].size();

      cout<<" The matrix before sorting 1st row is :\n ";
      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cout<<vect[i][j]<<" ";
            cout<<endl;
        
      }

      sort(vect[0].rbegin(), vect[0].rend());

       cout<<" The matrix before sorting 1st row is :\n ";
      for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            cout<<vect[i][j]<<" ";
            cout<<endl;
        
      }





}