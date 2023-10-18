#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void generatePermutations(int arr[], int start, int end)
{
    if (start == end)
    {
        for (int i = 0; i <= end; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        for (int i = start; i <= end; i++)
        {
            swap(arr[start], arr[i]);
            generatePermutations(arr, start + 1, end);
            swap(arr[start], arr[i]);
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Permutations:" << endl;
    generatePermutations(arr, 0, n - 1);

    return 0;
}



// #include <iostream>
// #include <algorithm>
// #include <vector>

// int main() {
//    vector<int> elements = {1, 2, 3};

//     do {
//         for (int element : elements) {
//            cout << element << ' ';
//         }
//         cout << '\n';
//     } while (next_permutation(elements.begin(), elements.end()));

//     return 0;
// }
