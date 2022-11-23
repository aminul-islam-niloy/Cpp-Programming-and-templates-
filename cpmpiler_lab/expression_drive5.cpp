#include<bits/stdc++.h>
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
    if (isValidShortInt)
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


bool integer(string s){

    if (isInteger(s)||isShortInt(s)||isLongInt(s) )
        {
            return true;
        }
        else
        return false;
        

}

bool identifier(string str, int n)
{

	// If first character is invalid
	if (!((str[0] >= 'a' && str[0] <= 'z')
		|| (str[0] >= 'A' && str[0] <= 'Z')
		|| str[0] == '_'))
		return false;

	// Traverse the string for the rest of the characters
	for (int i = 1; i < str.length(); i++) {
		if (!((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9')
			|| str[i] == '_'))
			return false;
	}

	return true;
}


bool ID(string s){
    int n= s.length();

    if( integer(s)||identifier(s,n))
    {
        return true;
    }
    else 

    return false;

}

// bool operator(string s,int n)
// {
    
// }


int main(){
    string s;
    cout<<"Enter expression to cheack: ";
    cin>>s;

}