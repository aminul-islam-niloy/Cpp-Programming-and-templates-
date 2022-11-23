#include<iostream>
using namespace std;

void addition( int a, int b)
{
    int sum = a+b;
    cout<<" Sum is : "<< sum<< endl;
}

int main(){
    
    int x, y,a,b;

    cout<< " \n Enter value for x : ";
      cin>> x;
    cout << " Enter value for y : ";
      cin>> y;

      cout<< " \n Enter value for a : ";
      cin>> a;
    cout << " Enter value for b : ";
      cin>> b;

      addition( x,y);
       addition( a,b);

  

    return 0;
}