// #include<map>
// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     map<int, string, greater<int>> mappp;

//     mappp.insert(make_pair(10, "aminul"));
//     mappp.insert(make_pair(20,"islam"));
//     mappp.insert(make_pair(30,"niloy"));

// map<int,string> :: iterator i;
// for(i=mappp.begin(); i!= mappp.end(); i++){
//     cout<<" ("<< (*i).first << ", "<< (*i).second<< ")" <<endl;
// }
// }



// C++ program makes a multimap to store
// elements in descending order.
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
	multimap<int, string, greater<int> > mymap;

	// Inserting the elements one by one
	mymap.insert(make_pair(10, "queen"));
	mymap.insert(make_pair(20, "rose"));
	mymap.insert(make_pair(5, " lion"));
	mymap.insert(make_pair(20, "van"));
    
	// Duplicates allowed
	mymap.insert(make_pair(20, "rose"));
	mymap.insert(make_pair(5, "joker"));

	// begin() returns to the first value of multimap.
	multimap<int, string>::iterator it;
	for (it = mymap.begin(); it != mymap.end(); it++)
		cout << "(" << (*it).first << ", " << (*it).second
			<< ")" << endl;

	return 0;
}
