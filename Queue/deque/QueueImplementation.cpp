// queue implementation using array

#include <bits/stdc++.h>
using namespace std;
#define n 20

class Myqueue
{
    int *arr;
    int front;
    int back;

public:
    Myqueue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue is overflow";
            return;
        }

        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is empty";
            return;
        }
        front++;
    }

    int peek()
    {

        if (front == -1 || front > back)
        {
            cout << "Queue is empty";
            return -1;
        }

        return arr[front];
    }

    bool empty()
    {

        if (front == -1 || front > back)
        {

            return true;
        }
        return false;
    }
};

int main()
{
    Myqueue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.peek();
    q.pop();

    cout << endl;
    cout << q.peek();
    q.pop();

    cout << endl;
    cout << q.peek();
    q.pop();

    cout << endl;
    cout << q.peek();
    q.pop();

    cout << endl;
    cout << q.empty();
}