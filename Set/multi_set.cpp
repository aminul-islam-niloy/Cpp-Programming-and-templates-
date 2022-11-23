#include <bits/stdc++.h>
using namespace std;
 
// Driver Code
int main()
{
    // multiset declare
    multiset<int> s;
 
    // Elements added to set
    s.insert(12);
    s.insert(10);
    s.insert(30);
    s.insert(10);
    s.insert(90);
    s.insert(85);
    s.insert(45);
 
 
    multiset<int>::iterator it, it1, it2;

    cout << "Multiset elements after sort\n";
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << ' ';
    cout << '\n';
 
    it1 = s.find(10);
    it2 = s.find(45);


    s.erase(it1, it2);
 
    cout << "Multiset Elements after erase:\n";
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << ' ';
 
    return 0;
}