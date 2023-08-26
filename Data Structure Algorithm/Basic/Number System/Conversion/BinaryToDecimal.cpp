#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>

using namespace std;
int DecimalToBinary(int n)
    {
      vector<int> reverse;
       if (n == 0) {
        reverse.push_back(0);
    }
      while(n>0)
      {
      reverse.push_back(n%2);
       n=n/2;

      }
      for(int i=reverse.size()-1; i>=0; i--)
      {
        cout<<reverse[i];
      }  

    }


     int BinaryTodecimal(int n)
     {

      int ans=0;
      int temp=1;
      while(n>0)
      {
        int y=n%10;
        ans+=temp*y;
        temp*=2;
        n/=10;
      }

      cout<<ans<<endl;

    }

    int OctalToDecimal(int n)
    {
        int ans=0;
        int temp=1;
        while(n>0){
            int last=n%10;
            ans+=temp*last;
            temp*=8;
            n=n/10;
        }
     cout<<ans;
    }

int OctalDigitToBinary(int n ) {
  
        int ans=0;
        int temp=1;
        while(n>0){
            int last=n%10;
            ans+=temp*last;
            temp*=8;
            n=n/10;
            DecimalToBinary(last);
        }

 
}


int main(){ 
    #ifndef RUN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    // DecimalToBinary(n);
    // OctalToDecimal(n);
    // BinaryTodecimal(n);
    OctalDigitToBinary(n);
    
   
}
