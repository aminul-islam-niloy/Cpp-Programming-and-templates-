#include <bits/stdc++.h>
#include <string>
using namespace std;

int reverse(int num)
{
    int rem = 0;
    int final_res = num;
    while (num < 0)
    {
        int last = num % 10;
        rem = rem * 10 + last;
        num = num / 10;
    }
    if (final_res == rem)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not a palindrome number";
    }
}

void reverseCharArray(char arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {

        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int ChackPalindrome(char arr[], int n)
{
    int chack = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            chack = 1;
            break;
        }
    }

    if (chack == 0)
    {
        cout << "plaindrome";
    }
    else
    {
        cout << "not palindrome";
    }
}

int BiggestWord(string arr)
{
    int i = 0;
    int current = 0;
    int maxlen = 0;

    while (true)
    {

        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (current > maxlen)
            {
                maxlen = current;
            }
            current = 0;
        }
        else
        {
            current++;
        }

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << maxlen;
}

int main()
{
#ifndef RUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // char arr[100] = "this is big apple";
    // int n;
    // cin>>n;
    // char arr[n];
    // cin>>arr;

    string arr;
    getline(cin, arr);
    // ChackPalindrome(arr, n);
    // reverseCharArray(arr,n);
    BiggestWord(arr);
}
