#include <iostream>
#include <vector>

using namespace std;

// Merge two sorted sub-arrays
void merge(vector<int> &arr, int left, int middle, int right)
{
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Create temporary arrays to store sub-arrays
    vector<int> leftArray(n1);
    vector<int> rightArray(n2);

    for (int i = 0; i < n1; i++)
    {
        leftArray[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        rightArray[j] = arr[middle + 1 + j];
    }

    // Merge the temporary arrays back into arr
    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2)
    {
        if (leftArray[i] <= rightArray[j])
        {
            arr[k] = leftArray[i];
            i++;
        }
        else
        {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        merge(arr, left, middle, right);
    }
}

int main()
{
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    cout << "Original array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << "\n";

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}

//complexity n log n
