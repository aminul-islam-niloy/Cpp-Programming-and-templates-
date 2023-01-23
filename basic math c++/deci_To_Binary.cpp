// // C++ program to convert a decimal
// // number to binary number

// #include <iostream>
// using namespace std;

// void decToBinary(int n)
// {

// 	int binaryNum[32];

// 	int i = 0;
// 	while (n > 0) {

// 		binaryNum[i] = n % 2;
// 		n = n / 2;
// 		i++;
// 	}

// 	for (int j = i - 1; j >= 0; j--)
// 		cout << binaryNum[j];
// }

// int main()
// {
// 	int n = 15;
// 	decToBinary(n);
// 	return 0;
// }




#include<bits/stdc++.h>
using namespace std;

void decitobin(int n){
	int binN[32];

	int i=0;

	while(n>0){
		binN[i]=n%2;
		n=n/2;
		i++;
	}

	for(int j=i-1; j>=0; j--)
		cout<<binN[j];
	
}

int main(){
	int n=15;

	decitobin(n);
}