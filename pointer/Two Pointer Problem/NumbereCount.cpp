#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
    {
        cin >> i;
    }

    int count = 0;
    int maxCount = 0;
    int maxNum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
        {
            if (count > maxCount)
            {
                maxCount = count;
                maxNum = arr[i - 1];
            }
            count = 0;
        }
    }

    if (count > maxCount)
    {
        maxCount = count;
        maxNum = arr[n - 1];
    }

    cout << "biggest is " << maxNum << endl;
    cout << "Ocurrance is " << maxCount+1 << endl;
}