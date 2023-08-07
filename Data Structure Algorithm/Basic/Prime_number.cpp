#include <iostream>

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
    int num , total;
    std::cout << "Enter a total number: ";
    std::cin >> total;
    

for(int i=0; i<=total; i++)
{
        if (isPrime(i))
         {
        std::cout << i  << std::endl;
    } 
    
}
    
}
