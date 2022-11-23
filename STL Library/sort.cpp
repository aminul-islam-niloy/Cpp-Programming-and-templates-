// C++ program to demonstrate default behaviour of  sort() in STL.
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	sort(arr, arr + n);

// 	for (int i = 0; i < n; ++i)
// 		cout << arr[i] << " ";

// 	return 0;
// }



///****************************************************************************************************
// C++ program to demonstrate descending order sort using
// greater<>().
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	sort(arr, arr + n, greater<int>());

// 	cout << "Array after sorting : \n";
// 	for (int i = 0; i < n; ++i)
// 		cout << arr[i] << " ";

// 	return 0;
// }



//******************************************************************************************************

// C++ program to demonstrate sort()

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int arr[] = { 0, 1, 5, 8, 9, 6, 7, 3, 4, 2 };
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	// Sort the elements which lies in the range of 2 to
// 	// (n-1)
// 	sort(arr + 2, arr + n);

// 	cout << "Array after sorting : \n";
// 	for (int i = 0; i < n; ++i)
// 		cout << arr[i] << " ";

// 	return 0;
// }


//***********************************************************************************************


// A C++ program to demonstrate
// STL sort() using
// our own comparator

// #include <bits/stdc++.h>
// using namespace std;

// // An interval has a start
// // time and end time
// struct Interval {
// 	int start, end;
// };

// // Compares two intervals
// // according to starting times.
// bool compareInterval(Interval i1, Interval i2)
// {
// 	return (i1.start < i2.start);
// }

// int main()
// {
// 	Interval arr[]
// 		= { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	// sort the intervals in increasing order of
// 	// start time
// 	sort(arr, arr + n, compareInterval);

// 	cout << "Intervals sorted by start time : \n";
// 	for (int i = 0; i < n; i++)
// 		cout << "[" << arr[i].start << "," << arr[i].end
// 			<< "] ";

// 	return 0;
// }


// ***********************************************************************************

// The time complexity of std::sort() is:

// Best Case – O(N log N)
// Average Case – O(N log N)
// Worst-Case – O(N log N)
// Space Complexity: It may use O( log N) auxiliary space.

//************** ))))))))))))))))))))))) )))))))))))))))))))))))))))))) 0000000000000000000 0000000000 )0000000000*********
#include <algorithm>
#include <iostream>
using namespace std;

template <class T>
class Comparator { // we pass an object of this class as
				// third arg to sort function...
public:
	bool operator()(T x1, T x2)
	{
		return x1 < x2;
	}
};

template <class T> bool funComparator(T x1, T x2)
{ // return type is bool
	return x1 <= x2;
}

void show(int a[], int array_size)
{
	for (int i = 0; i < array_size; i++) {
		cout << a[i] << " ";
	}
}

int main()
{
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int asize = sizeof(a) / sizeof(int);
	cout << "The array before sorting is : ";
	show(a, asize);
	cout << endl << "The array after sorting is(asc) :";
	sort(a, a + asize);
	show(a, asize);
	cout << endl << "The array after sorting is(desc) :";
	sort(a, a + asize, greater<int>());
	show(a, asize);
	cout << endl

		<< "The array after sorting is(asc but our "
			"comparator class) :";

	sort(a, a + asize, Comparator<int>());
	show(a, asize);
	cout << endl

		<< "The array after sorting is(asc but our "
			"comparator function) :";
            
	sort(a, a + asize, funComparator<int>);
	show(a, asize);

	return 0;
}
