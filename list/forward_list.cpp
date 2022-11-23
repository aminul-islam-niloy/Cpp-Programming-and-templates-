#include<iostream>
#include<list>
#include<forward_list>
using namespace std;

int main(){

  forward_list<int> list1;
   forward_list<int> list2;
    forward_list<int> list3;
  
  list1.assign({2,4,6});
  list2.assign(5,10);
  list3.assign(list1.begin(),list1.end());

  cout<<" For list 1: ";
  for(int &x: list1){
    cout<<x<<" ";
   
  }
  cout<<"\n\n";

   cout<<" For list 2 : ";
  for(int &x: list2){
    cout<<x<<" ";
   
  }
  cout<<"\n\n";
   cout<<" For list 3 : ";
  for(int &x: list3){
    cout<<x<<" ";
  }

  cout<<" Push pop emplace ";
  list1.push_front(10);
  list2.emplace_front(70);
  list3.pop_front();



  cout<<" For list 1: ";
  for(int &x: list1){
    cout<<x<<" ";
   
  }
  cout<<"\n\n";

   cout<<" For list 2 : ";
  for(int &x: list2){
    cout<<x<<" ";
   
  }
  cout<<"\n\n";
   cout<<" For list 3 : ";
  for(int &x: list3){
    cout<<x<<" ";
  }

}  
