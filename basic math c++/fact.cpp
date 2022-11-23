#include<iostream>
using namespace std;
// long factorial(int num);

// long factorial(int num){
//     if(num==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return  num*factorial(num-1);
//     }
// }

//in main function after declaration 
 // int fact=factorial(num);
    // cout<<"Factorial is: "<<fact<<endl;

int main(){
    int num,facto;
    cin >>num;
       facto=num;

   
 for(int i=num-1; i>0; i--){
    facto=facto*i;
    
 }
 cout<<"factorial is: "<<facto<<endl;


}