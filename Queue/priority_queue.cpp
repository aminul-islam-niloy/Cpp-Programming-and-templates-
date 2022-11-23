//mean heap for priority queue

// #include<iostream>
// #include<queue>

// using namespace std;

// void show( priority_queue<int,vector<int>,greater<int>>list){
//          priority_queue<int,vector<int>,greater<int>>l=list;
//          while(!l.empty()){
//             cout<<' '<<l.top();
//             l.pop();
//          }
//          cout<<"\n";
//     }


// int main(){
//     priority_queue<int,vector<int>,greater<int>>list;

//     list.push(30);
//     list.push(20);
//     list.push(10);
//     list.push(5);
//     list.push(2);
//    cout<<"Display value ";
//     show(list);
    
// }


#include<iostream>
#include<queue>

using namespace std;

void show( priority_queue<int,vector<int>,greater<int>>list){
         priority_queue<int,vector<int>,greater<int>>l=list;
         while(!l.empty()){
            cout<<' '<<l.top();
            l.pop();
         }
         cout<<"\n";
    }


int main(){
    priority_queue<int,vector<int>,greater<int>>list;

    list.push(30);
    list.push(20);
    list.push(10);
    list.push(5);
    list.push(2);
   cout<<"Display value ";
    show(list);
    
}