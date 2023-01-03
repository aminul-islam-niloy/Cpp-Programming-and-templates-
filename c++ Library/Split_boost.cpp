
// split(Result, Input, Predicate Pred);

// Parameters:
// Input: A container which will be searched.
// Pred: A predicate to identify separators. 
// This predicate is supposed to return true 
// if a given element is a separator.
// Result: A container that can hold copies of 
// references to the substrings.
// Returns: A reference the result



// C++ program to split
// string into substrings
// which are separated by
// separator using boost::split

// this header file contains boost::split function
#include <bits/stdc++.h>
 //#include <boost/algorithm/string.hpp>

using namespace std;

int main()
{
	string input("aminul\tIslam\tNiloy is y name");
	vector<string> result;
	//boost::split(result, input, boost::is_any_of("\t "));

	for (int i = 0; i < result.size(); i++)
		cout << result[i] << endl;
	return 0;
}



