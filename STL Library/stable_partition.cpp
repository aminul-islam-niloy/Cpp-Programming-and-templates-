// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v{ 6, 9, 0, 1, 2, 7, 5, 8, 0 };
//     stable_partition(v.begin(), v.end(), [](int n) {return n>5; });
//     for (int n : v) {
//         cout << n << ' ';
//     }
//     cout << '\n';
// }


//another example for partition 

// #include <iostream>
// #include <algorithm> // std::stable_partition
// #include <vector>

// using namespace std;

  
// bool odd(int i) { return (i % 2) == 1; }
  

// int main()
// {
//   vector<int> vct;
  
//     for (int i = 1; i < 10; ++i)
//         vct.push_back(i);
  
// vector<int>::iterator bound;
//     bound = stable_partition(vct.begin(), vct.end(), odd);
     
     
//      cout << "odd numbers:";
//     for (vector<int>::iterator it = vct.begin(); it != bound; ++it)
//         cout << ' ' << *it;
//          cout << '\n';
  
//     cout << "evennumbers:";
//     for (vector<int>::iterator it = bound; it != vct.end(); ++it)
//         cout << ' ' << *it;
//         cout << '\n';
    
  
//     return 0;
// }



//another complex example for stable partation

// CPP program to illustrate stable_partition
#include <algorithm>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>

using namespace std;

  
template <class Arg>
struct is_even : public unary_function<Arg, bool> {
    bool operator()(const Arg & arg1) const
    {
        return (arg1 % 2) == 0;
    }
};


  
int main()
{
    typedef deque<int, allocator<int> > Deque;
    typedef ostream_iterator<int, char,char_traits<char> >  Iter;
  
    const Deque::value_type a[] = { 1, 2, 3, 4, 5,
                                    6, 7, 8, 9, 10 };
  
    Deque d1(a + 0, a + sizeof a / sizeof *a);
    Deque d2(d1);
  
  cout << "Unpartitioned values: \t\t";
  copy(d1.begin(), d1.end(), Iter(cout, " "));
  
  partition(d2.begin(), d2.end(), is_even<int>());

   cout << "\nPartitioned values: \t\t";
   copy(d2.begin(), d2.end(), Iter(cout, " "));
   
  
    stable_partition(d1.begin(), d1.end(),is_even<int>());

    cout << "\nStable partitioned values: \t";
    copy(d1.begin(), d1.end(), Iter(cout, " "));
    cout << endl;
  
    return 0;
}