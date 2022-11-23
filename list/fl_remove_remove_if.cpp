#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;

// bool even(const int & value){
//     return (value %2)==0;
// }

// bool prime(const int & value){
//     int i;
//     for(i=2; i<value; i++){
//         if(value %i==0){
//             return false;
//         }  
        
//     }
//     if(value==i){
//         return true;
//     }
// }

int main(){

    forward_list<int>list1{2,3,4,5,6,7,8,9,};

    forward_list<int>::iterator ptr;
    // list1.remove(8);
    // for(auto i=list1.begin(); i!= list1.end(); i++){
    //     cout<<" "<<*i;
    // }

    // list1.remove_if(prime);

    auto it= list1.before_begin();
    list1.insert_after(it,10);


    for(int &x: list1){
        cout<<x<<" ";
    }
   cout<<"\n";
    list1.emplace_front(20);
    for(int &x: list1){
        cout<<x<<" ";
    }
cout<<" \n";
    list1.push_front(33);
    for(int &x: list1){
        cout<<x<<" ";
    }

//     ptr= list1.erase_after(ptr);

//  for(int &x: list1){
//         cout<<x<<" ";
//     }
cout<<"\n";

// list1.remove_if([](int x){
//     return x>5;
// });

// for(int &k:list1){
//     cout<<k<<" ";
// }



}