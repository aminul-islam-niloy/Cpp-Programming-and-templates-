#include<iostream>
#include<math.h>

using namespace std;

bool is_prime(int n){
    int flag=0;

    if(n==0|| n==1)
     return false;
     
     for(int i=2;i<n; i++){
         if(n%i==0){
            return false;
            flag=1;
            break;
         }
     }

     if(flag==0)
     {
          return true;
     }

   else return false;
  

}

int main(){
    int n;
    cout<<"Enter range 1 to  : ";
    cin>>n;

    for(int i=0; i<n; i++){
        if(is_prime(i)){
            cout<<i<<" ";
        }
    }

}