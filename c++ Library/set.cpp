//assending order

// #include<iostream>
// #include<set>

// using namespace std;

// int main(){
//    set<int>a={4,7,8,3,2,1,9};

//     for(auto & c: a){
//         cout<<" "<<c<<endl;
//     }
//       cout<< '\n';
// }





//desending order
// #include<iostream>
// #include<set>

// using namespace std;

// int main(){
//    set<int, greater<int> >a={4,7,8,3,2,1,9};

//     for(auto & c: a){
//         cout<<" "<<c<<endl;
//     }
//       cout<< '\n';
// }




//single char set
// #include<iostream>
// #include<set>

// using namespace std;

// int main(){
//     set<char>a;
//     a.insert('L');
//     a.insert('M');
//     a.insert('C');
//     a.insert('G');
//     a.insert('h');
//     a.insert('k');
//     a.insert('A');
//     a.insert('X');
//     a.insert('K');
//     a.insert('M');

//     for(auto & c: a){
//         cout<<" "<<c<<endl;
//     }
//       cout<< '\n';
// }



#include <bits/stdc++.h>
using namespace std;
 
int main()
{

    multiset<int> s;
 
    s.insert(12);
    s.insert(10);
    s.insert(30);
    s.insert(10);
    s.insert(90);
    s.insert(85);
    s.insert(45);
 
 
    multiset<int>::iterator it, it1, it2;

    cout << "Multiset elements after sort\n";
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << ' ';
    cout << '\n';
 
    it1 = s.find(10);
    it2 = s.find(45);

    s.erase(it1, it2);  //position start to end erase
 
    cout << "Multiset Elements after erase:\n";
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << ' ';
 
    return 0;
}