#include<iostream>
#include<queue>

using namespace std;

int main(){
    int arr[]={1,2,3};
    priority_queue<int> list(arr,arr+3);

    cout<<"max priority queue : ";
    while(list.empty()==false){
         cout<<list.top()<<" ";
         list.pop();
    }
    cout<<endl;

//array reverse
    for(int i=0; i<3; i++){
        arr[i]= -arr[i];
    }

    priority_queue<int> list2(arr,arr+3);

    cout<<"min priority queue : ";
    while(list2.empty()==false){
         cout<<-list2.top()<<" ";
         list2.pop();
    }
}