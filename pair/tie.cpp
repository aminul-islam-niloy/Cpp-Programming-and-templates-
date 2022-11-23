#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int , int> pair1{1,1};
    int a, b;
    tie(a,b)=pair1;
    cout<<a<< " "<< b<< "\n";
     
     cout<<"what is ignore ? "<<endl;

    pair<int , int> pair2 {2,4};
    tie(a,ignore)=pair2;

      cout<<a<< " "<< b<< "\n";

      pair<int, pair<int, string> >pair3{3, {4,"Niloy"}};
     int x,y;
     string z;

     x= pair3.first;
     tie(y,z)= pair3.second;

     cout<<x<<" "<< y<<" "<<z<<" "<<"\n";

     return 0;

}



