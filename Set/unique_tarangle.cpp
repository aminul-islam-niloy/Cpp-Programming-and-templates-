
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int>iPair;

struct Triangle {
    int a,b,c;
};


void sort3(int &a, int &b, int &c){
    vector<int>arr({a,b,c});
    sort(arr.begin(), arr.end());
    a=arr[0]; b=arr[1]; c=arr[2];
}

int countUniqueTriangles(struct Triangle arr[],
                           int n)
{
    // A set which consists of unique Triangles
    set < pair< int, iPair > > s;
 
    // Insert all triangles one by one
    for (int i=0; i<n; i++)
    {
        int a = arr[i].a, b = arr[i].b, c = arr[i].c;
        sort3(a, b, c);
 
        // Insert a triangle into the set
        s.insert({a, {b, c}});

          
        }
        return s.size();
    }
 
 

int main()
{
    struct Triangle arr[] = {{3, 2, 2}, {3, 4, 5}, {1, 2, 2},{2, 2, 3}, {5, 4, 3}, {6, 4, 5}};
    int n = sizeof(arr)/sizeof(Triangle);
 
    cout << "Number of Unique Triangles are " << countUniqueTriangles(arr, n);
    return 0;
}