#include<bits/stdc++.h>
using namespace std;
int main(){


    #ifndef RUN 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


    int num;
    cin>>num;
    int prime=0;
    bool flag=0;

    if(num==0||num==1 || num<0)
    {
       cout<<"not a prime number";
    }

    for(int i=2; i<sqrt(num); i++)
    {
        if(num%i==0)
        {
        flag=1;
        break;
        }
       
    }

    if(flag==0){
        cout<<"Prime number";
    }
    else{
        cout<<"non prime number";
    }

        
 

}