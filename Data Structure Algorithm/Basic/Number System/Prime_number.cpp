#include <iostream>
using namespace std;

bool isPrime(int number) {
    if (number <= 1)
        return false;

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0)
            return false;
    }

    return true;
}

int main() {

   #ifndef ONLINE
       freopen("input.txt", "r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    int num , total;
    //  cout << "Enter a total number: ";
     cin >> total;
    

for(int i=0; i<=total; i++)
{
        if (isPrime(i))
         {
         cout << i  << endl;
         } 
    
}
    
}
