// // CPP program to illustrate std :: none_of
// #include <iostream> // cout
// #include <algorithm> // none_of
// using namespace std;

// // functions to check whether the
// // element is even or odd
// bool isEven(int a) { return (a % 2); }
// bool isOdd(int a) { return (a % 2 == 0); }

// int main()
// {
// 	int arr[] = { 7,5 };
// 	int n = sizeof(arr)/sizeof(arr[0]);

// 	cout << "Array contains :";
// 	for (int i = 0; i < n; i++)
// 		cout << ' ' << arr[i];
// 	cout << "\n";

// 	bool even = none_of(arr, arr + n, isEven);
// 	bool odd = none_of(arr, arr + n, isOdd);

// 	if ((!even) && (!odd))
// 		cout << "Contains both even and"
// 			" odd number\n";
// 	else if ((!even) && odd)
// 		cout << "Contains odd number only\n";
// 	else if (even && (!odd))
// 		cout << "Contains even number only\n";
// 	else
// 		cout << "Array is empty\n";

// 	return 0;
// }





// CPP program to illustrate std :: none_of
#include <iostream> // cout
#include <algorithm> // none_of
using namespace std;

// function to check whether the
// element is negative or not
bool comp(int a) { 
    cout<<a<<endl;
    return a < 0;
 }


int main()
{
	int arr[] = { 2, 4, 6, -8, 12, 9 };
	int n = sizeof(arr)/sizeof(arr[0]);

	cout << "Array contains :";
	for (int i = 0; i < n; i++)
		cout << ' ' << arr[i];
	cout << "\n";

	if (none_of(arr, arr+n, comp))
        {
		    cout << "No negative elements in the range.\n";
        }
	else
		cout << "There is at least one negative"
			" element in the array range.\n";
	return 0;
}









 // CPP program to illustrate std :: none_of
// #include <algorithm> // none_of
// #include <iostream> // cout
// using namespace std;

// bool isPrime(int n)
// {
// 	// Corner cases
// 	if (n <= 1)
// 		return false;
// 	if (n <= 3)
// 		return true;

// 	// This is checked so that we can skip
// 	// middle five numbers in below loop
// 	if (n % 2 == 0 || n % 3 == 0)
//     cout<<"out  "<< n<<endl;
// 	return false;

// 	for (int i = 5; i * i <= n; i = i + 6)
// 		if (n % i == 0 || n % (i + 2) == 0)
//            cout<<"middle: " <<n<<endl;
// 			return false;

// 	return true;
// }

// int main()
// {
// 	int arr[] = {1,3, 4, 6, 8, 12, 7 };
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	cout << "Array contains :";
// 	for (int i = 0; i < n; i++)
// 		cout << ' ' << arr[i];
// 	cout << "\n";

// 	if (none_of(arr, arr + n, isPrime))
// 		cout << "All numbers are composite.\n";
// 	else
// 		cout << "There are primes in array \n";
// 	return 0;
// }
