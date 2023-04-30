#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n], i, j;

    cout << "Enter Array Elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++) {
            
            for (int j = 0; j < n-i-1; j++) {
            
                if (arr[j] > arr[j+1]) {
                    swap(arr[j], arr[j+1]);
                }
            }
        }
    

    // print sorted array
    cout << "Sorted Array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
