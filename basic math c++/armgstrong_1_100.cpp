
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int ord1, ord2, ord3, total_sum;
//    int n1,n2;
// 	cout<<"Enter range: ";

// 	cin>>n1>>n2;

// 	cout << "Armstrong numbers between "<<n1<< " to : "  <<n2<<" is : ";

// 	for (int num = n1; num <= n2; ++num)
// 	{

// 		if (num <= 9)
// 		{
// 			cout << num << " ";
// 		}

// 		else
// 		{
// 			ord1 = num % 10;
// 			ord2 = (num % 100 - ord1) / 10;
// 			ord3 = (num % 1000 - ord2) / 100;


// 			total_sum = ((ord1 * ord1 * ord1) +
// 						(ord2 * ord2 * ord2) +
// 						(ord3 * ord3 * ord3));

// 			if (total_sum == num)
// 			{
// 				cout << num << " ";
// 			}
// 		}
// 	}
// 	return 0;
// }






// C++ program to find Armstrong numbers
// between 1 to 1000 using a brute force
// approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the order of
// a number.
int order(int num)
{
	int count = 0;
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return count;
}

// Function to check whether the
// given number is Armstrong number
// or not
bool isArmstrong(int num)
{
	int order_n = order(num);
	int num_temp = num, sum = 0;

	while (num_temp > 0)
	{
		int curr = num_temp % 10;
		sum += pow(curr, order_n);
		num_temp /= 10;
	}
	if (sum == num)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Driver code
int main()
{

	cout << "Armstrong numbers between 1 to 1000 : ";
	
	for (int num = 1000; num <= 9999; ++num)
	{

		if (isArmstrong(num))
		{
			cout << num << " ";
		}
	}
	return 0;
}

