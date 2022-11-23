// C++ program to demonstrate stable sort() in STL
// #include <bits/stdc++.h>
// using namespace std;

// // Driver Code
// int main()
// {
// 	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	stable_sort(arr, arr + n);

// 	cout << "Array after sorting using  stable_sort is : \n";
// 	for (int i = 0; i < n; ++i)
// 		cout << arr[i] << " ";

// 	return 0;
// }


// C++ program to demonstrate stable sort() in STL


//reverse using greater<int>()

// #include <bits/stdc++.h>
// using namespace std;

// // Driver Code
// int main()
// {
// 	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
// 	int n = sizeof(arr) / sizeof(arr[0]);

// 	 stable_sort(arr, arr + n, greater<int>());
     

// 	cout << "Array after sorting using  stable_sort is : \n";
// 	for (int i = 0; i < n; ++i)
// 		cout << arr[i] << " ";

// 	return 0;
// }



//start an pair array 


// A C++ program to demonstrate STL stable_sort()
// to sort intervals according to start time.
#include <bits/stdc++.h>
using namespace std;
 
// An interval has start time and end time
struct Interval {
    int start, end;
};
 
// Compares two intervals according to starting
// times.
bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}
 
int main()
{
    // Given intervals are sorted according to end time
    Interval arr[]
        = { { 1, 4 }, { 2, 4 }, { 1, 7 }, { 2, 19 } };

    int n = sizeof(arr) / sizeof(arr[0]);
 
    // sort the intervals in increasing order of
    // start time such that the start time intervals
    // appear in same order as in input.
    stable_sort(arr, arr + n, compareInterval);

 
    cout << "Intervals sorted by start time : \n";
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i].start << ", " << arr[i].end << "] ";
 
    return 0;
}