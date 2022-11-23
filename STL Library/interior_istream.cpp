//copy elelment input to outpt

// #include<algorithm>
// #include<iostream>
// #include<iterator>

// using namespace std;
// int main(){

//     istream_iterator<int>cin_it(cin);
//     istream_iterator<int>a;
//     ostream_iterator<int> cout_it(cout," ");
    
//     copy(cin_it,a,cout_it);

// }


//example 2;
//copy elelment input to vector

// #include<fstream>
// #include<algorithm>
// #include<iostream>
// #include<iterator>
// #include<string>
// #include<vector>

// using namespace std;

// int main(){
//     vector<string>list;

//     ifstream fin("input_file.txt");

//     istream_iterator<string>fin_it(fin);
//     istream_iterator<string>eos;

//     ostream_iterator<string>out_it(cout," ");

//     //copy element input to vector using copy function
//     copy(fin_it,eos,back_inserter(list));

//     //sort the vector

//     sort(list.begin(), list.end());

//     // copy elelement form vector to output
    
//     copy(list.begin(), list.end(),out_it);


// }




//example 3
// print the sorted order of even integer only
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
 
using namespace std;
int main()
{
 

    vector<int> list;
 
    istream_iterator<int>cin_it(cin);
    istream_iterator<int> eos;
 
    // Get output stream iterators
    ostream_iterator<int> cout_it(cout, " ");
 
    // Copy even integer elements from input to vector using for_each function
    for_each(cin_it, eos, [&](int a) {
        if (a % 2 == 0) {
            // if a is even push it to vector
            list.push_back(a);
        }
    });
 
    // Sort the vector
    sort(list.begin(), list.end());
 
    // Copy elements from vector to output
    copy(list.begin(), list.end(), cout_it);
 
    return 0;
}