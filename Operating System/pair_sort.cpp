
#include<bits/stdc++.h>
using namespace std;

struct sort_pred {
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
        return left.second < right.second;
    }
};



int main()
{
	vector< pair <int,int> > vect;

	int bt[] = {7, 4, 1, 4 };
	int at[] = {0, 2, 4, 5};

	int n = sizeof(bt)/sizeof(bt[0]);

	for (int i=0; i<n; i++)
		vect.push_back( make_pair(bt[i],at[i]) );

	cout << "The vector before sort operation is:\n" ;
	for (int i=0; i<n; i++)
	{
	
		cout << vect[i].first << " "
			<< vect[i].second << endl;
	}

    sort(vect.begin(), vect.end());


	cout << "The vector after sort operation is:\n" ;
	for (int i=0; i<n; i++)
	{

		cout<< " "<< vect[i].first << endl;
	}

	return 0;
}


