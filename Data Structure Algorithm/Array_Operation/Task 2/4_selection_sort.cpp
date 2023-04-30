#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n], i, j, temp;

    cout << "Enter Array Elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // selection sort
    for (i = 0; i < n-1; i++) {
        int min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // swap elements
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    // print sorted array
    cout << "Sorted Array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
