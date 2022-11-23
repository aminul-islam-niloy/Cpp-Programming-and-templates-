#include<iostream>
using namespace std;

int  factorial(int n){
    if(n==1){
        return 1;
    }
   else{
       return n*factorial(n-1);
   }
}

int main(){
    int fact, num;

    cout<< " Enter a number for factorial : " ;
    cin >> num;

       fact = factorial(num);
        cout << " Factorial of " << num << " is : " << fact << endl;
    return 0;
}