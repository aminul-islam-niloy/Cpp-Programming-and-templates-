// C++ program to demonstrate working of fill()
#include <bits/stdc++.h>
using namespace std;

int main ()
{
vector<int> vect(8);

fill(vect.begin() + 1, vect.end() - 1, 8);

for (int i=0; i<vect.size(); i++)
	cout << vect[i] << " ";

return 0;
}





// C++ program to demonstrate working of fil_n()
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	vector<int> vect(8);

// 	// calling fill to initialize first four values
// 	// to 7
// 	fill_n(vect.begin(), 4, 7);

// 	for (int i=0; i<vect.size(); i++)
// 		cout << ' ' << vect[i];
// 	cout << '\n';

// 	// calling fill to initialize 3 elements from
// 	// "begin()+3" with value 4
// 	fill_n(vect.begin() + 3, 3, 4);

// 	for (int i=0; i<vect.size(); i++)
// 		cout << ' ' << vect[i];
// 	cout << '\n';

// 	return 0;
// }
