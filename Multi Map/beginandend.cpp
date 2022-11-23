
#include<bits/stdc++.h>

using namespace std;

int main()
{

  multimap<int, int> mp;
	// initialize container
	// insert elements in random order
	mp.insert({ 2, 30 });
	mp.insert({ 1, 40 });
	mp.insert({ 3, 60 });
	mp.insert({ 4, 20 });
	mp.insert({ 5, 50 });

	auto ite = mp.begin();

	cout<<"The 1st element is "<<endl;
    cout<<"KEY\tElement\n";
	for(auto it=mp.begin(); it != mp.end(); it++)
    {
        cout<<it->first <<"\t"<< it->second<<endl;

    }

}
