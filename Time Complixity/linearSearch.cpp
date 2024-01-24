// #include <iostream>
// #include <chrono>
// using namespace std;

// int linearSearch(int arr[], int size, int target) {
//     for (int i = 0; i < size; ++i) {
//         if (arr[i] == target) {
//             return i; // Element found, return its index
//         }
//     }

//     return -1; // Element not found
// }

// int main() {
//    // int arr[] = {2, 5, 8, 12, 16, 23, 38, 42, 50};
//    // int size = sizeof(arr) / sizeof(arr[0]);

//    int n;
//    cout<<"Enter array size: ";
//    cin>>n;
//    int arr[n];

//    for(int i=0; i<n; i++)
//    {
//     cin>>arr[i];
//    }

//     int target;
//     cin>>target;

//     // Measure the execution time
//     auto start = chrono::high_resolution_clock::now();

//     int result = linearSearch(arr, n, target);

//     auto stop = chrono::high_resolution_clock::now();
//     auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

//     if (result != -1) {
//         cout << "Element " << target << " found at index " << result <<endl;
//     } else {
//         cout << "Element " << target << " not found in the array." <<endl;
//     }

//     // Print the time complexity in seconds
//     cout << "Time taken by linear search: " << duration.count() / 1e6 << " seconds" << endl;

//     return 0;
// }


#include <iostream>
#include <chrono>
#include <cstdlib>  // for rand function
using namespace std::chrono;

using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; // Element found, return its index
        }
    }

    return -1; // Element not found
}

int main() {
    const int arraySize = 10000;
    int arr[arraySize];

    // Populate the array with random values
    for (int i = 0; i < arraySize; ++i) {
        arr[i] = rand() % 100000;  // Random values between 0 and 999
    }

    int target = rand() % 10000;  // Random target value

    // Measure the execution time
    auto start = std::chrono::high_resolution_clock::now();

    int result = linearSearch(arr, arraySize, target);

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    // Print the time complexity in seconds
   cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

    return 0;
}
