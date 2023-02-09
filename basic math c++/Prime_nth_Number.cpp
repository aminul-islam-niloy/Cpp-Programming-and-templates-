// C++ program to display Prime numbers till N
#include <bits/stdc++.h>
using namespace std;

// function to check if a given number is prime
bool isPrime(int n)
{
	// since 0 and 1 is not prime return false.
	if (n == 1 || n == 0)
		return false;

	// Run a loop from 2 to n-1
	for (int i = 2; i < n; i++) {
		// if the number is divisible by i, then n is not a
		// prime number.
		if (n % i == 0)
			return false;
	}
	// otherwise, n is prime number.
	return true;
}


int main()
{
	int N = 100;

	// check for every number from 1 to N
	for (int i = 1; i <= N; i++) {
		// check if current number is prime
		if (isPrime(i))
			cout << i << " ";
	}

	return 0;
}





// #include<iostream>
 
// using namespace std;
   
// int main(){
   
//     int N, i, j, isPrime, n;
 
//     cout << "Enter the value of N\n";
//     cin >> N;
   
//     // For every number between 2 to N, check 
//     // whether it is prime number or not 
      
//     for(i = 2; i <= N; i++){
//         isPrime = 0;
//         // Check whether i is prime or not
//         for(j = 2; j <= i/2; j++){
//              // Check If any number between 2 to i/2 divides I 
//              // completely If yes the i cannot be prime number
//              if(i % j == 0){
//                  isPrime = 1;
//                  break;
//              }
//         }
           
//         if(isPrime==0 && N!= 1)
//             cout << i << " ";
//     }
 
//    return 0;
// }