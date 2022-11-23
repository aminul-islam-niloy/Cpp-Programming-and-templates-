#include<iostream>
#include<vector>
#include<iterator>
#include<list>

using namespace std;

int main(){
    list<int> list1 {1,2,7,8,9};
    // list<int>:: iterator it = list1.begin();
    list<int>list2{2,3,4,5,6,7};
     
    //  for(int i=1; i<=5; i++){
    //     list1.emplace_back(i);
    //  }
    //  cout<<" Last element  emplace back operation is : ";
    //  for(int &x: list1){
    //     cout<<x<<" ";
    //     cout<<"\n";
       
    //  }

    //  for(int i=10; i<=50; i += 5){
    //      list1.emplace_front(i);
    //  }
    //  cout<<" First element of empalce back is : ";
    //  for( int &y: list1){
    //     cout<<y<<" ";
    //  }
      

//  advance(it,1);
//  list1.emplace(it,100);
 
 cout<<" List after implease operation: ";
 for(int &x: list1){
    cout<<x<<" ";
    cout<<"\n";
 }

 //merging two list: 
list1.merge(list2);
cout<<" After mergint 2 list: ";
for(int &x: list1){
    cout<<x<<" ";
    
}

//removig function for list;

list1.remove_if([](int x){
    return x%2 ==0;
});

cout<<" After remove the list look like as given vilew: ";
for(int &x: list1){
    cout<<x<<" ";
}

}