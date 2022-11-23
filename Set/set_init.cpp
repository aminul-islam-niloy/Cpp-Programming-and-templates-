// #include<iostream>
// #include<set>

// int main(){
//          std::set<char> a;
//          a.insert('G');
//          a.insert('F');
//          a.insert('F');
//          a.insert('A');

//          for(auto & str: a){
//             std::cout<<str<<' ';

//          }
//          std::cout<< '\n';
// }


#include<iostream>
#include<set>

using namespace std;

int main(){
    set<char>a;
    a.insert('L');
    a.insert('M');
    a.insert('C');
    a.insert('G');
    a.insert('h');
    a.insert('k');
    a.insert('A');
    a.insert('X');
    a.insert('K');
    a.insert('M');

    for(auto & c: a){
        cout<<" "<<c<<endl;
    }
      cout<< '\n';
}
