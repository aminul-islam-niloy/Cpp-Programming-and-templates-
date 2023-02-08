
#include<bits/stdc++.h>
using namespace std;


string firstLetterWord(string str)
{
	string result = "";

	bool v = true;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			v = true;

		// Else check if v is true or not.
		// If true, copy character in output
		// string and set v as false.
		else if (str[i] != ' ' && v == true)
		{
			result.push_back(str[i]);
			v = false;
		}
	}

	return result;
}

int main()
{
	string str = "this is me";
	cout << firstLetterWord(str);
	return 0;
}
