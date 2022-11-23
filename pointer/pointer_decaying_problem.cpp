#include<iostream>
using namespace std;
  
void aDecay(int *p)
{
    cout << "Modified size of array is by "
            " passing by value: ";
    cout << sizeof(p) << endl;
}
 
void pDecay(int (*p)[7])
{
    cout << "Modified size of array by "
            "passing by pointer: ";
    cout << sizeof(p) << endl;
}

void fun(int (&p)[7])
{
    
    cout << "Modified size of array by "
            "passing by reference: ";
    cout << sizeof(p) << endl;
}
  
int main()
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7,};
  
    cout << "Actual size of array is: ";
    cout << sizeof(a) <<endl;
  
    aDecay(a);

    pDecay(&a);  
    fun(a); 
  
    return 0;
}