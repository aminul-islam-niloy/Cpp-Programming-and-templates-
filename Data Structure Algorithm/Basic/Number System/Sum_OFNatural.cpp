#include<bits/stdc++.h>
using namespace std;

int sumOfNum(int num)
    {
        int sum=0;
       for(int i=0; i<=num; i++)
       {
         sum= sum+i;
         
       }
       cout<<"sum is "<<sum<<endl;

    }

int main(){ 
    #ifndef RUN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int n;
    cin>>n;

   int sum=0;
   sumOfNum(n);

// for(int i=0; i<=n; i++){
//     sum= sum+i;
// }
 //cout<<"Result is "<<sum;

}