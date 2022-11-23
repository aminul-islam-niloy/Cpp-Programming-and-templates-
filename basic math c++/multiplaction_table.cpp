#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int num,i;
cout<< " Enter a number : ";
cin>> num;
for ( i=1; i<=10; i++){
  cout<< num<< " X " << i << setw(4) << " =" << (num*i)<< endl;
}


    return 0;
}