// #include<iostream>
// #include <bits/stdc++.h>

// #include<vector>

// using namespace std;

// int randomfunc(int a){
//     return rand() % a;
// }

// int main(){

//     srand(unsigned(time(0)));

//     vector<int> arr;

//     for(int j=1; j<10; ++j){
//         arr.push_back(j);
//     }

//  random_shuffle(arr.begin(), arr.end());

//  random_shuffle(arr.begin(), arr.end(),randomfunc);

// cout<<"Array contains: ";
// for (int &x: arr){
//     cout<<x<<" ";
// }
// cout<<endl;

// }





//shuffle 
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    array<int, 5> s{ 1, 2, 3, 4, 5 };
  
  
    unsigned seed = 0;
  
    // Use of shuffle
    shuffle(s.begin(), s.end(), default_random_engine(seed));
  
    
    cout << "shuffled elements are:";
    for (int& i : s)
        cout << ' ' << i;
    cout << endl;
  
    return 0;
}
