// 5. Build a lexical analyzer for Float, Double

#include <bits/stdc++.h>
using namespace std;

bool checkFloatVariable(string str)
{
    bool isStartingOK = false;

    int size = str.size();

    if ((str[0] >= 'a' && str[0] <= 'h') || (str[0] >= 'A' && str[0] <= 'H') || (str[0] >= 'o' && str[0] <= 'z') || (str[0] >= 'O' && str[0] <= 'Z'))
    {
        isStartingOK = true;
    }

    bool isRestOK = true;
    for (int i = 1; i < str.size(); i++)
    {
        if (!isalpha(str[i]) && !isdigit(str[i]))
        {
            isRestOK = false;
            break;
        }
    }

    if (isStartingOK && isRestOK)
        return true;
    else
        return false;
}

bool checkFloatNumber(string str)
{
    // cout << "Calling" << endl;
    int size = str.size();

    // Length should be higher than >=4 || EXAMPLE : 12592.22 or 0.00
    if (size < 4)
        return false;
    // Handling 00125.255 case

    if (size >= 2 && str[0] == '0' && str[1] == '0')
        return false;

    // Check for 2 digits after point (.)

    int digitAfterPoint = 0;
    int gotPoint = 0;

    for (int i = 0; i < size; i++)
    {
        if (str[i] == '.')
        {
            gotPoint = true;
            continue;
        }
        if (gotPoint)
            digitAfterPoint++;
    }
    // cout << "Digit After Point :" << digitAfterPoint << endl;

    if (digitAfterPoint != 2 || gotPoint == 0 || gotPoint > 1)
        return false;

    // Check if it is like 00125125.255

    return true;
}

bool checkDoubleNumber(string str)
{
    // cout << "Calling" << endl;
    int size = str.size();

    // Length should be higher than >=4 || EXAMPLE : 12592.22 or 0.00
    if (size <= 4)
        return false;

    // Handling 00125.255 case
    if (size >= 2 && str[0] == '0' && str[1] == '0')
        return false;

    // Check for 2 digits after point (.)

    int digitAfterPoint = 0;
    int gotPoint = 0;

    for (int i = 0; i < size; i++)
    {
        if (str[i] == '.')
        {
            gotPoint = true;
            continue;
        }
        if (gotPoint)
            digitAfterPoint++;
    }
    // cout << "Digit After Point :" << digitAfterPoint << endl;

    if (digitAfterPoint <= 2 || gotPoint == 0 || gotPoint > 1)
        return false;

    // Check if it is like 00125125.255

    return true;
}

int main()
{

    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        string str;
        cin >> str;
        cout << "Scanned : " << str << endl;

        if (checkFloatVariable(str))
        {
            cout << "Float Variable" << endl;
        }
        else if (checkFloatNumber(str))
        {
            cout << "Float Number" << endl;
        }
        else if (checkDoubleNumber(str))
        {
            cout << "Double Number" << endl;
        }
        else
        {
            cout << "Invalid Input" << endl;
        }
        cout << "\n\n";
    }
}