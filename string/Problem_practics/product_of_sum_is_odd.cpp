#include <bits/stdc++.h>
using namespace std;

// Function to Check whether it is
// possible to partition a string S
// into two non-empty sub-sequences
// S1 and S2.
string check(string S, int n)
{
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = S.at(i) - '0';
    }
  //print chack
  cout<<"Print asci chack";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    int S1 = 0;
    for (int i = 0; i < n; i++)
        if ((arr[i] & 1) != 0)
            S1++;

    cout<<"S of i is "<<S1<<endl;

    if ((S1 & 1) != 0 || S1 == 0)
        return "No";
    return "Yes";
}

int main()
{

    string S = "1122";

    int N = S.length();

    cout << check(S, N);

    return 0;
}
