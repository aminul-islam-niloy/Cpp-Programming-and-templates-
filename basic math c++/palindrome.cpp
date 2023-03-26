#include<bits/stdc++.h>

using namespace std;

int main(){
    int num,test, rev=0, n,rem;
    cin>>num;

     n=num;

    while(num !=0)
    {
      rem= num%10;
      rev= (rev*10)+rem;
      num=num/10;
    }

    if(n==rev){
        cout<<"true";

    }
    else
    cout<<"false";
   
}