#include<iostream>
using namespace std;
#include<iterator>
#include<list>

int main(){

    list<int> list1{2,2,3,3,10,10};
    list<int>list2{3,5,7,9};

    // list<int> :: iterator it= list1.begin();
 
//   advance(it,3);

//   cout<<" List before unique operatior: ";
//   for(int &x: list1){
//    cout<<x<<" "<<endl;

//   }

//   list1.unique();
//   cout<<" List after unique call: ";
//   for(int &x: list1){
//     cout<<x<< endl;
//   }

//  list1.splice(it,list2);
  cout<<" before swapping list 1: ";
  for(int &x: list1){
    cout<<x<< endl;
  }

   cout<<" before swapping list 2: ";
  for(int &x: list2){
    cout<<x<< endl;
  }

  list1.swap(list2);

  cout<<" after swapping list 1: ";
  for(int &x: list1){
    cout<<x<< endl;
  }

   cout<<" after swapping list 2: ";
  for(int &x: list2){
    cout<<x<< endl;
  }


}