
#include<iostream>
#include<array>
#include<tuple>

using namespace std;

int main(){
array<int,6> ar = {1, 2, 3, 4, 5, 6};

    cout << "The array elements are (using at()) : ";
    for ( int i=0; i<6; i++)
    cout << ar.at(i) << " ";
    cout << endl;

    cout << "The array elements are (using get()) : ";
    cout << get<0>(ar) << " " << get<1>(ar) << " ";
    cout << get<2>(ar) << " " << get<3>(ar) << " ";
    cout << get<4>(ar) << " " << get<5>(ar) << " ";
    cout << endl;

    cout << "The array elements are (using operator[]) : ";
    for ( int i=0; i<6; i++)
    cout << ar[i] << " ";
    cout << endl;


    // Printing first element of array
    cout << "First element of array is : ";
    cout << ar.front() << endl;
 
    // Printing last element of array
    cout << "Last element of array is : ";
    cout << ar.back() << endl;
 

    cout << "The number of array elements is : ";
    cout << ar.size() << endl;
 
    // Printing maximum elements array can hold
    cout << "Maximum elements array can hold is : ";
    cout << ar.max_size() << endl;

    // Swapping ar1 values with ar
   // ar.swap(ar1);

    //    cout << "The first array elements after swapping are : ";
    //     for (int i=0; i<6; i++)
    //     cout << ar[i] << " ";
    //     cout << endl;

}
