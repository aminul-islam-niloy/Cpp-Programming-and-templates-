#include <bits/stdc++.h>
using namespace std;

// a given tile 2x1 and another big tile 4x1 find way to fill with tile
int tilingWays(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    return tilingWays(n - 1) + tilingWays(n - 2);
}


// count single or couple 
string CaupleorSingle(string group)
{

    int couples = 0;
    int singles = 0;

    int i = 0;
    while (i < group.length())
    {
        if (group[i] == 'b' && group[i + 1] == 'g')
        {
            couples++;
            i += 2; // Skip the couple
        }
        else if (group[i] == 'g' && group[i + 1] == 'b')
        {
            couples++;
            i += 2; // Skip the couple
        }
        else
        {
            singles++;
            i++; // Move to the next person
        }
    }

    cout << "Total couples: " << couples << endl;
    cout << "Total singles: " << singles << endl;

    return 0;
}

// possible way to live them single or pair them
int friendsPariing(int n)
{
    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }

    return friendsPariing(n - 1) + friendsPariing(n - 2) * (n - 1);
}

int main()
{

#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    // cout << tilingWays(n);
    cout << friendsPariing(n);
}
