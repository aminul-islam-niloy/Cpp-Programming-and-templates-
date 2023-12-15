#include <iostream>
using namespace std;

int main()
{
    const int size = 20; // Adjust the size according to your array size
    int arr[size] = {0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0,
                     1, 1, 1, 1, 1, 1, 1, 1};

    int count = 0;
    int maxCount = 0;
    int maxNumber = 0;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            if (count > maxCount)
            {
                maxCount = count;
                maxNumber = arr[i - 1];
            }
            count = 0;
        }
    }

    // Check the last sequence
    if (count > maxCount)
    {
        maxCount = count;
        maxNumber = arr[size - 1];
    }

    cout << "Consecutive biggest number: " << maxNumber << endl;
    cout << "Total consecutive occurrences: " << maxCount << endl;

    return 0;
}
