
#include <bits/stdc++.h>
using namespace std;

int PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int SelectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    PrintArray(arr, n);
}

int BubbleSort(int arr[], int n)
{
    int count = 1;
    while (count < n)
    {
        for (int i = 0; i < n - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        count++;
    }
    // Print the array
    PrintArray(arr, n);
}

int insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int currrent = arr[i];
        int j = i - 1;

        while (arr[j] > currrent && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = currrent;
    }

    // Print the array
    PrintArray(arr, n);
}

int main()
{
#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // SelectionSort(array,n);
    // BubbleSort(array,n);
    insertionSort(array, n);
}