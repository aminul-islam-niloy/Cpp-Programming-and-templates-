#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int num, f,l,swap,temp,count=0;

    cout<<"Enter number: ";
    cin>>num;

    temp=num;
    l=temp%10;
    // count= (int)log10(temp);

    while(temp>=10){
        temp/=10;
    }

    f=temp;

    // swap=(l*pow(10,count)+f)+ (num-(f*pow(10,count)+l));

   
    cout<<f<<endl;
    cout<<l<<endl;

    // cout<<swap;


}