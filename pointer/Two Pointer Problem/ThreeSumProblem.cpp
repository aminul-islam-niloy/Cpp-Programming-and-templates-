#include <bits/stdc++.h>
using namespace std;
// we can solve this using burteforce approch O(n^3)
//  3 loop and arr[i]+arr[j]+arr[k]== target?

int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;

    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    sort(a.begin(), a.end());

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        int low = i + 1, high = n - 1;
        while (low < high)
        {
            int current = a[i] + a[low] + a[high];
            if (current == target)
            {
                found = true;
                cout<<"found " << a[i]<<" "<<a[low]<<" "<<a[high]<<endl;
            }
            if (current < target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
    }

    if (found)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}