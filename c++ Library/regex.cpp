// // C++ program to demonstrate working of regex_match()
// #include <iostream>
// #include <regex>

// using namespace std;
// int main()
// {
// 	string a = "AminulIslamNiloy";

// 	regex b("(Aminul)(.*)"); 

// 	if ( regex_match(a, b) )
// 		cout << "String 'a' matches regular expression 'b' \n";

// 	// regex_match function for matching a range in string
// 	// against regex b
// 	if ( regex_match(a.begin(), a.end(), b) )
// 		cout << "String 'a' matches with regular expression "
// 				"'b' in the range from 0 to string end\n";

// 	return 0;
// }




// C++ program to demonstrate working of regex_search()
// #include <iostream>
// #include <regex>
// #include<string.h>
// using namespace std;

// int main()
// {
// 	// Target sequence
// 	string s = "I am looking for minulIslam Niloy "
// 			"articles" "Name is AminulNiloy" ;

// 	// An object of regex for pattern to be searched
// 	regex r("Aminul[a-zA-Z]+");

// 	// flag type for determining the matching behavior
// 	// here it is for matches on 'string' objects
// 	smatch m;

// 	// regex_search() for searching the regex pattern
// 	// 'r' in the string 's'. 'm' is flag for determining
// 	// matching behavior.
// 	regex_search(s, m, r);

// 	// for each loop
// 	for (auto x : m)
// 		cout << x << " ";

// 	return 0;
// }



// C++ program to demonstrate working of regex_replace()

#include <iostream>
#include <string>
#include <regex>
#include <iterator>
using namespace std;

int main()

{
	string s = "I am looking for AminulIslamNiloy \n";
	regex r("Aminul[a-zA-z]+");
	// regex_replace() for replacing the match with 'geek'
	cout << std::regex_replace(s, r, "geek");
	string result;
	// regex_replace( ) for replacing the match with 'geek'
	regex_replace(back_inserter(result), s.begin(), s.end(),
				r, "geek");

	cout << result;

	return 0;
}


