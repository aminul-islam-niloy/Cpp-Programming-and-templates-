#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }
    
    towerOfHanoi(n - 1, src, helper, dest);
    cout << "Move form " << src << " to " << dest << endl;
    towerOfHanoi(n - 1, helper, dest, src);
}




int main()
{

#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // int n;
    // cin >> n;
    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    towerOfHanoi(3, 'A', 'C', 'B');
}
