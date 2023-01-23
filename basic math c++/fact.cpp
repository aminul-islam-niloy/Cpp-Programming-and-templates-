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
    int num,facto=1;
    cin >>num;

 for(int i=1; i<=num; i++){
    facto=facto*i;
    
 }
 cout<<"factorial is: "<<facto<<endl;


}