#include <bits/stdc++.h>
using namespace std;

void insertElement(int arr[], int &size, int index, int value)
{
    if (index < 0 || index > size)
    {
        cout << "Invalid index for insertion." << endl;
        return;
    }

    // Shift elements to the right to make space for the new element.
    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified index.
    arr[index] = value;

    // Increment the size of the array.
    size++;
}

// Function to delete an element at a specific location in an array.
void deleteElement(int arr[], int &size, int index)
{
    if (index < 0 || index >= size)
    {
        cout << "Invalid index for deletion." << endl;
        return;
    }

    // Shift elements to the left to fill the gap created by deletion.
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array.
    size--;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;

    // Insert a new element
    int insertValue = 6;
    int insertIndex = 2;
    insertElement(arr, size, insertIndex, insertValue);

    // Display the updated array.
    cout << "Array after inserting " << insertValue << " at index " << insertIndex << ":" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Delete an element at a specific location (index 3).
    int deleteIndex = 3;
    deleteElement(arr, size, deleteIndex);

    // Display the updated array.
    cout << "Array after deleting element at index " << deleteIndex << ":" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
