#include<iostream>
#include<queue>

using namespace std;

void display(queue<int>list){
    queue<int>l=list;
    while(!l.empty()){
        cout<<'\t'<<l.front();
        l.pop();
    }
    cout<<"\n";
}

int main(){
    queue<int>list1;
    list1.push(10);
    list1.push(20);
    list1.push(30);
    list1.push(40);
    list1.push(50);

    cout<<"The queue is : ";
    display(list1);
    list1.pop();

    cout<<"\n";
    cout<<"After pop : ";
    display(list1);

}
