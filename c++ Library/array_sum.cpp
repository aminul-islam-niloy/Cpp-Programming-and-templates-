// C++ program to demonstrate working of accumulate()
// #include <iostream>
// #include <numeric>
// using namespace std;

// // User defined function that returns sum of
// // arr[] using accumulate() library function.
// int arraySum(int a[], int n)
// {
// 	int initial_sum = 0;
// 	return accumulate(a, a+n, initial_sum);
// }

// int main()
// {
// 	int a[] = {5 , 10 , 15} ;
// 	int n = sizeof(a)/sizeof(a[0]);
// 	cout << arraySum(a, n);
// 	return 0;
// }




// C++ program to demonstrate working of accumulate()
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

// User defined function that returns sum of
// arr[] using accumulate() library function.
int arraySum(vector<int> &v)
{
	int initial_sum = 0;
	return accumulate(v.begin(), v.end(), initial_sum);
}

int main()
{
	vector<int> v{5 , 10 , 15} ;
	cout << arraySum(v);
	return 0;
}

