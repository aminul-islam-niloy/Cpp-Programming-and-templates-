// 2. Build a lexical analyzer for Integer, ShortInt, LongInt, floatNum, float,binary...
#include <bits/stdc++.h>

using namespace std;

bool isInteger(string str)
{
    bool isStarting = false;

    int size = str.size();

    if (size >= 1)
    {
        if ((str[0] >= 'i' && str[0] <= 'n') || (str[0] >= 'I' && str[0] <= 'N'))
        {
            isStarting = true;
        }
    }
    
    bool others = true;
    for (int i = 1; i < str.size(); i++)
    {
        if (!isalpha(str[i]) && !isdigit(str[i]))
        {
            others = false;
            break;
        }
    }

    if (isStarting && others)
        return true;
    else
        return false;
}

bool isShortInt(string str)
{
    int size = str.size();

    if (str.size() > 4)
        return false;

    bool isValidShortInt = true;

    if (str[0] == '0')
        isValidShortInt = false;

    for (int i = 1; i < str.size(); i++)
    {
        if (!isdigit(str[i]))
        {
            isValidShortInt = false;
            break;
        }
    }


     bool others = true;
    for (int i = 1; i < str.size(); i++)
    {
        if (!isalpha(str[i]) && !isdigit(str[i]))
        {
            others = false;
            break;
        }
    }

    if (isValidShortInt && others)
        return true;
    else
        return false;
}



bool isLongInt(string str)
{
    int size = str.size();

    if (str.size() <= 4)
        return false;

    bool isValidLongInt = true;

   
    if (str[0] == '0')
        isValidLongInt = false;

    for (int i = 1; i < str.size(); i++)
    {
        if (!isdigit(str[i]))
        {
            isValidLongInt = false;
            break;
        }
    }
    if (isValidLongInt)
        return true;
    else
        return false;
}



bool isFloatVariable(string str)
{
    bool isStarting = false;

    int size = str.size();

    if ((str[0] >= 'a' && str[0] <= 'h') || (str[0] >= 'A' && str[0] <= 'H') || (str[0] >= 'o' && str[0] <= 'z') || (str[0] >= 'O' && str[0] <= 'Z'))
    {
        isStarting = true;
    }

    bool others = true;
    for (int i = 1; i < str.size(); i++)
    {
        if (!isalpha(str[i]) && !isdigit(str[i]))
        {
            others = false;
            break;
        }
    }

    if (isStarting && others)
        return true;
    else
        return false;
}

bool isFloatNumber(string str)
{
  
    int size = str.size();

    if (size < 4)
        return false;

    if (size >= 2 && str[0] == '0' && str[1] == '0')    // minimum two digit without 0 and 2nd 0
        return false;


    int findPosition = 0;
    int point = 0;

    for (int i = 0; i < size; i++)
    {
        if (str[i] == '.')
        {
            point = true;
            continue;
        }
        if (point)
            findPosition++;
    }

    if (findPosition != 2 || point == 0 || point > 1) // point position is not 2nd or not point or more than one point then it's false
        return false;

    return true;
}

bool isDoubleNumber(string str)
{
    int size = str.size();
    if (size <= 4)
        return false;

    if (size >= 2 && str[0] == '0' && str[1] == '0')
        return false;

    int digitAfterPoint = 0;
    int Point = 0;

    for (int i = 0; i < size; i++)
    {
        if (str[i] == '.')
        {
            Point = true;
            continue;
        }
        if (Point)
            digitAfterPoint++;
    }

    if (digitAfterPoint <= 2 || Point == 0 || Point > 1)
        return false;

    return true;
}


bool isCharacterVariable(string str)
{
    int size = str.size();

    if (size < 4)
        return false;

    if (str[0] != 'c' || str[1] != 'h' && str[2] != '_')
    {
        return false;
    }

    bool other = true;
    for (int i = 3; i < str.size(); i++)
    {
        if (!isalpha(str[i]) && !isdigit(str[i]))
        {
            other = false;
            break;
        }
    }
    if (other)
        return true;
    else
        return false;
}

bool isBinaryVariable(string str)
{
    int size = str.size();

    if (size < 4)
        return false;

    if (str[0] != 'b' || str[1] != 'n' && str[2] != '_')
    {
        return false;
    }

    bool other = true;
    for (int i = 3; i < str.size(); i++)
    {
        if (!isalpha(str[i]) && !isdigit(str[i]))
        {
            other = false;
            break;
        }
    }
    if (other)
        return true;
    else
        return false;
}

bool isBinaryNumber(string str)
{
    int size = str.size();

    if (size < 2)
        return false;

    if (str[0] != '0')
    {
        return false;
    }

    if (str[1] != '0' && str[1] != '1')
    {
        return false;
    }

    bool other = true;

    for (int i = 2; i < str.size(); i++)
    {
        if (str[i] != '1' && str[i] != '0')
        {
            other = false;
            break;
        }
    }
    if (other)
        return true;
    else
        return false;
}




int main()
{
     string s;
     cout<<"Enter any String or Number or anything.... : ";
        cin >> s;

        cout << "Input  : " << s << endl;

        if (isInteger(s))
        {
            cout << "Integer Variable" << endl;
        }
        else if (isShortInt(s))
        {
            cout << "Short Integer Number" << endl;
        }
        else if (isLongInt(s))
        {
            cout << "Long Integer Number" << endl;
        }

        else  if (isFloatVariable(s))
        {
            cout << "Float Variable" << endl;
        }
        else if (isFloatNumber(s))
        {
            cout << "Float Number" << endl;
        }
        else if (isDoubleNumber(s))
        {
            cout << "Double Number" << endl;
        }

        else if (isBinaryVariable(s))
        {
            cout << "Binary Variable" << endl;
        }
        else if (isBinaryNumber(s))
        {
            cout << "Binary Number" << endl;
        }
       else  if (isCharacterVariable(s))
        {
            cout << "Character Variable" << endl;
        }
        else
        {
            cout << "Invalid Input or Undefined" << endl;
        }
    }
