#include <bits/stdc++.h>
using namespace std;
#define n 20

class myqueue
{
	int *arr;
	int front;
	int rear;

public:
	myqueue()
	{
		arr = new int[n];
		front = -1;
		rear = -1;
	}

	void push(int x)
	{
		if (rear == n - 1)
		{
			cout << "stack is overflow";
			return;
		}
		rear++;
		arr[rear] = x;

		if (front == -1)
		{
			front++;
		}
	}

	void pop()
	{
		if (front == -1 || front > rear)
		{
			cout << "Queue is empty";
			
		}

		front++;
		
	}

	int  peek(){
		if(front ==-1 || front >rear){
			cout<<"queue is empty";
			return -1;
		}
		return arr[front];
	}
};

int main()
{

	myqueue q;
	q.push(5);
	q.push(6);
	q.push(7);

	cout<<q.peek()<<endl;
	// q.pop();
	// cout<<q.peek()<<endl;

}
