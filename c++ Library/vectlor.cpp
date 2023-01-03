// A C++ program to demonstrate that push_back() happens at the end of resized vector.
#include<bits/stdc++.h>
using namespace std;


int func(vector<int>& vect){
    vect.push_back(30);
}

int main()
{
	vector<int> vect;
	for (int i = 0; i < 5; i++)
		vect.push_back(i);

	vect.resize(10);

	for (int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
	cout << "\n";

	vect.push_back(20);
    vect.push_back(25);

    func(vect);

	for (int i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";

	return 0;
}
