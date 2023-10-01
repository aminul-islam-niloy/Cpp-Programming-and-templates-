#include <bits/stdc++.h>
using namespace std;

bool SortedOrNot(int a[], int n)
{
    if (n == 1)
    {
        return true;
    }

    bool sorted = SortedOrNot(a + 1, n - 1);

    bool ans = (a[0] < a[1] && sorted);
    return ans;
}

void DecreasingOrder(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;

    DecreasingOrder(n - 1);
}

void IncreasingOrder(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }

    IncreasingOrder(n - 1);
    cout << n << endl;
}

int firstOccurance(int arr[], int n, int i, int key)
{
    if (i == n) // if empty
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return firstOccurance(arr, n, i + 1, key);
}

int lastOccurance(int arr[], int n, int i, int key)
{
    if (i == n) // if empty
    {
        return -1;
    }

    int restArray = lastOccurance(arr, n, i + 1, key);

    if (restArray != -1)
    {
        return restArray;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int reverse(int n)
{
    int result = 0;
    while (n > 0)
    {
        int last = n % 10;
        result = result * 10 + last;
        n = n / 10;
    }
    return result;
}

int reverseNumber(int n, int reversedNum = 0)
{
    if (n == 0)
    {
        return reversedNum;
    }
    else
    {
        int lastDigit = n % 10;
        int remainingDigits = n / 10;
        reversedNum = reversedNum * 10 + lastDigit;

        return reverseNumber(remainingDigits, reversedNum);
    }
}

void reverseString(string s)
{
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    cout << s << endl;
}

void reverseStringRecursion(string &s, int left, int right)
{
    if (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        return reverseStringRecursion(s, left + 1, right - 1);
    }
}

void reverseRecursion(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    reverseRecursion(ros);
    cout << s[0];
}

void replaceWithReate(string s)
{
    if (s.length() == 0)
    {
        return;
    }

    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << 3.14;
        replaceWithReate(s.substr(2));
    }
    else
    {
        cout << s[0];
        replaceWithReate(s.substr(1));
    }
}

string reverseWords(string s)
{
    int start = 0;

    for (int i = 0; i <= s.length(); ++i)
    {
        if (i == s.length() || s[i] == ' ')
        {
            int end = i - 1;

            while (start < end)
            {
                swap(s[start], s[end]);

                start++;
                end--;
            }
            // Move start to the next word
            start = i + 1;
        }
    }
    return s;
}

int main()
{

#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // cout << SortedOrNot(arr, n);

    //  DecreasingOrder(n);
    // IncreasingOrder(n);

    // cout << firstOccurance(arr, n, 0, 2) << endl;
    // cout << lastOccurance(arr, n, 0, 2) << endl;

    //  cout << reverse(255);

    // reverseString("thisisMe");
    // cout << reverseRecursion(2588885);
    // cout << reverseNumber(255, 0);

    // string s = "piand";
    // int left = 0;
    // int right = s.size() - 1;
    //  reverseStringRecursion(s, left, right);

    //replaceWithReate(s);

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i];
    // }
}
