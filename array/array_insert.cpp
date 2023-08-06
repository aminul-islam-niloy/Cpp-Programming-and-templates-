#include <iostream>
using namespace std;

int main()
{
	int arr[100] = { };
	int i, value, pos, n = 10;

	// initial array of size 10
	for (i = 0; i < 10; i++)
		arr[i] = i + 1;

	// print the original array
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	value = 4;
	pos = 9;

	// increase the size by 1
	n++;

	// shift elements forward
	for (i = n-1; i >= pos; i--)
		arr[i] = arr[i - 1];

	// insert x at pos
	arr[pos - 1] = value;

	// print the updated array
	for (i = 0; i < n; i++)
		cout<< arr[i] <<" ";
	cout<<"\n";

	return 0;
}