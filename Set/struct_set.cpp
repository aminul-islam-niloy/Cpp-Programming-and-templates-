// A C++ program to find number of unique Triangles
#include <bits/stdc++.h>
using namespace std;
 
// Creating shortcut for an integer pair.
typedef pair<int, int> iPair;
 
// A structure to represent a Triangle with
// three sides as a, b, c
struct Triangle
{
    int a, b, c;
};
 
// A function to sort three numbers a, b and c.
// This function makes 'a' smallest, 'b' middle
// and 'c' largest (Note that a, b and c are passed
// by reference)
void sort3(int &a, int &b, int &c)
{
    vector<int> arr({a, b, c});
    sort(arr.begin(), arr.end());
    a = arr[0]; b = arr[1]; c = arr[2];
}
 
// Function returns the number of unique Triangles
int countUniqueTriangles(struct Triangle arr[],
                           int n)
{
    // A set which consists of unique Triangles
    set < pair< int, iPair > > s;
 
    // Insert all triangles one by one
    for (int i=0; i<n; i++)
    {
        // Find three sides and sort them
        int a = arr[i].a, b = arr[i].b, c = arr[i].c;
        sort3(a, b, c);
 
        // Insert a triangle into the set
        s.insert({a, {b, c}});
    }
 
    // Return set size
    return s.size();
}
 
// Driver program to test above function
int main()
{
    // An array of structure to store sides of 6 Triangles
    struct Triangle arr[] = {{3, 2, 2}, {3, 4, 5}, {1, 2, 2},
                             {2, 2, 3}, {5, 4, 3}, {6, 4, 5}};
    int n = sizeof(arr)/sizeof(Triangle);
 
    cout << "Number of Unique Triangles are "
         << countUniqueTriangles(arr, n);
    return 0;
}