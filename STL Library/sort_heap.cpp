// CPP program to illustrate
// std::sort_heap
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v = {8, 6, 2, 1, 5, 10}; 
   
//     make_heap(v.begin(), v.end());
   
//     cout << "heap:   ";
//     for (const auto &i : v) {
//      cout << i << ' ';
//     }   
   
//     sort_heap(v.begin(), v.end());
   
//     std::cout <<endl<< "now sorted:   ";
//     for (const auto &i : v) {                                                   
//         cout << i << ' ';
//     }   
//     std::cout <<endl;
// }






// CPP program to illustrate
// std::sort_heap
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

int main( ) {
using namespace std;
vector <int> vt1, vt2;
vector <int>::iterator Itera1, Itera2;

int i;
for ( i = 1 ; i <=5 ; i++ )
	vt1.push_back( i );

random_shuffle( vt1.begin( ), vt1.end( ) );

cout << "vector vt1 is ( " ;
for ( Itera1 = vt1.begin( ) ; Itera1 != vt1.end( ) ; Itera1++ )
	cout << *Itera1 << " ";
cout << ")" << endl;

sort_heap (vt1.begin( ), vt1.end( ) );
cout << "heap vt1 sorted range: ( " ;

for ( Itera1 = vt1.begin( ) ; Itera1 != vt1.end( ) ; Itera1++ )
	cout << *Itera1 << " ";
    
cout << ")" << endl;
}
	
