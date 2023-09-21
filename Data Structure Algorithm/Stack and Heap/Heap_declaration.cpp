#include <iostream>
using namespace std;

int main()
{
#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a = 10;
    int *p = new int(); // declare memory in heap

    *p = 10;
    cout << *p << endl;

    delete (p);
    cout << *p << endl;

    p = new int[4];
    cout << *p << endl;

    delete[] p;
    cout << *p << endl;
    cout << p << endl;

    p = NULL;
    cout << p << endl;
}