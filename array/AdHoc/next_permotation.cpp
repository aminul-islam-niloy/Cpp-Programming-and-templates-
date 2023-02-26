
#include<bits/stdc++.h>
using namespace std;

// int main(){
// string s;
// cin>>s;
//  int count=0;
// // sort(s.begin(), s.end());

// while(next_permutation(s.begin(),s.end()))
// {
//     cout<<s<<endl;
//     count ++;
// }
// cout<<"Total possible is: "<< count <<endl;
// }



//using vector and int next permotation

void print_sum(vector<int>&v, int n)
{
   for(int i=0; i<n; i++)
   {
    cout<<v[i]<<" ";

   }
       cout<<endl;
}

int main(){
    vector<int>v;

    int n,x;
    cout<<"Enter element: ";

    cin>>n;
   cout<<"Enter vector values: "<<endl;

    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }

    while(next_permutation(v.begin(),v.end()))
    {
         print_sum(v,n);

    }
}