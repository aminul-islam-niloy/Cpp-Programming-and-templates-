#include<iostream>
using namespace std;

int addition( int, int);



int main(){

    int x, y;

    cout<< " \n Enter value for x : ";
      cin>> x;
    cout << " Enter value for y : ";
      cin>> y;   

      int sum = addition( x,y);
        cout << " sum is :" << sum;
  
    return 0;
}

int addition( int a, int b)
{
    int sum = a+b;
    return sum;
}