#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (auto &i : a)
    {
        cin >> i;
    }

    deque<int> q;
    vector<int> ans;

    // Process the first window
    for (int i = 0; i < k; i++)
    {
        while (!q.empty() && a[q.back()] < a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }

    ans.push_back(a[q.front()]); // Maximum element of the first window

    // Process the remaining windows
    for (int i = k; i < n; i++)
    {
        // Remove elements outside the current window
        while (!q.empty() && q.front() <= i - k)
        {
            q.pop_front();
        }

        // Remove smaller elements in the current window
        while (!q.empty() && a[q.back()] < a[i])
        {
            q.pop_back();
        }

        // Add the current element to the deque
        q.push_back(i);

        ans.push_back(a[q.front()]); // Maximum element of the current window
    }

    // Print the results
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
