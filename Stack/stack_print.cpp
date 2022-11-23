#include<stack>
#include<iostream>

using namespace std;

int main(){
    stack<int>stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);

cout<<"\n Size: ";
cout<<stack.size();
  // stack.pop();
  
  cout<<"\n  ";


cout<<stack.top();
 cout<<"\n";

stack.pop();
while(!stack.empty()){
    cout<<" "<< stack.top();
    stack.pop();
}




}