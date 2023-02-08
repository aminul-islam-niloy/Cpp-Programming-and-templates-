#include<bits/stdc++.h>
using namespace std;

struct Queue{
    stack<int>s1,s2;

    void enQueue(int x){

        //move all the element from s1 to s2;

        while( ! s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        //push everything back to s1;

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }


    }

  int deQue(){
      if(s1.empty()){
        cout<<"Queue is empty ";
        exit(0);
      }

      // return top of s1

      int x = s1.top();
      s1.pop();
      return x;
  }



};

int main(){
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
     q.enQueue(7); 
     q.enQueue(2);

    cout<<q.deQue()<<endl;
    cout<<q.deQue()<<endl;
    cout<<q.deQue()<<endl;
    cout<<q.deQue()<<endl;
    cout<<q.deQue()<<endl;


}