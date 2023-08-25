#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef RUN
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
    #endif

    int num;
    cin>>num;
    int reverse=0;

    while(num>0)
    {
       int last= num%10; 
       reverse = reverse*10+last;
       num= num/10;
    }

    cout<<reverse;
   


}