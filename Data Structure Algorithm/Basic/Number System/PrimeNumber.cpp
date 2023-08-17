#include<iostream>
using namespace std;


string PrimeNum(int number)

{
    int div=2;

    while(div<number)
    {
        if(number % div==0)
        {
           return "nonePrime";

            break;
        }
            div= div+1; 

            if(div==number){
            return "prime number";
            }

    }

}

int main(){
    int number;
     cout<<"Enter a integer number ";
     cin>>number;
     
     string result= PrimeNum( number);
     cout<<result;

}