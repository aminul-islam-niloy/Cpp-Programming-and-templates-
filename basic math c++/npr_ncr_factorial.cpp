#include<iostream>
using namespace std;


long int  factorial(int y)
{
  int i, fact=1;
  for(i=2; i<=y; i++)
  {
    fact= fact*i;
  }
  return fact;

}

int main(){

    int n,r;
    long int ncr,npr;

    cout<<"Enter the value for n: ";
    cin>>n;
    cout<<"Enter the value for r: ";
    cin>>r;

    ncr= factorial(n) / (factorial(r) * factorial(n - r));
    npr= ncr * factorial(r);

    cout<<"NCR value is " <<ncr << endl;
    cout<<"NPR value is " <<npr <<endl;



}