#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int num,i;
cout<< " Enter a number : ";
cin>> num;
for ( i=1; i<=num; i++)
     {
         if (i==10)
        break;
         cout<< i<< endl;
     }
    

    return 0;
}

