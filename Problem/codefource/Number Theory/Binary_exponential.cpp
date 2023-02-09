#include<iostream>
using namespace std;
 
 int for_result(int a, int n, int m){
    int result =1;
    
     while(n){
         if(n%2==1){
             result= (result* a)%m;
             n--;
         }
         else
         {
             a = (a*a)%m;
             n= n/2;
         }
     }
     return result;
 }
 
 
int main(){
    int n;
    cin>>n;
    
    cout<<for_result(1378,n,10)<<endl;
}