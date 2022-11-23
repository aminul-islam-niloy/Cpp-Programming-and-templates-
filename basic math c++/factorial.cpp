#include<iostream>
using namespace std;

long factorial(int number);


long  factorial( int number){

    if( number == 0){
      return 1;
    }
    else
       return number*factorial(number-1);
   

}

int main(){

int num;
cout<< " Enter a positive number : ";
cin>> num;

cout << " Factorial of "<< num << " is " << factorial(num) << endl;



}