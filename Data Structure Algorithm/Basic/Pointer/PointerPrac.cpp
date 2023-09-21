#include <bits/stdc++.h>
using namespace std;

int increment(int *a)
{
    *a++;
}
int swap2(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // int a = 29;
    // int *ptr;
    // ptr = &a;

    // cout << *ptr << endl;
    // cout << ptr << endl;

    // // pointer and array

    // // int arr[] = {10, 20, 30, 40, 50};

    // // int *ptr22 = arr;

    // // for (int i = 0; i < 5; i++)
    // // {
    // //   cout<<*ptr22<<endl;
    // //   ptr22++;
    // // }

    // int **q = &ptr;

    // cout << *q << endl;
    // cout << **q << endl;

    // // implmentation of pointer in c++

    // int test = 2;
    // increment(&test);
    // cout << test << endl;

    int a = 10;
    int b = 20;
    cout << "Before swapint " << endl;
    cout << a << " " << b << endl;

    cout << "before use of pointer: ";
    swap2(a, b);
    cout << endl;
    cout << a << " " << b << endl;
    cout << "after use of pointer " << endl;
    swap(&a, &b);
    cout << a << " " << b << endl;
}