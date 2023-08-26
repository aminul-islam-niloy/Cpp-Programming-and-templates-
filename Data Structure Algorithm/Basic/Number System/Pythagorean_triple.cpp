#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
using namespace std;

bool Triple(int x, int y,int z)
    {
       int a = max( x, max( y,  z));
       int b,c;

       if(a==x){   //a---->x
        b=y;
        c=z;
       }
       else if(a==y) //a---->y
       {
          b=x;
          c=z;
       }
       else{ //a---->z
       b=z;
       c=y;
       }


       if(a*a == b*b + c*c)
       {
         return true;
       }
       else {
        return false;
       }
    }

int main(){ 
    #ifndef RUN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int c= n3*n3;

    if(Triple(n1,n2,n3))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"Not";
    }
}
