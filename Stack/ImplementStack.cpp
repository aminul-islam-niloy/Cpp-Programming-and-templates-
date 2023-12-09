#include <bits/stdc++.h>
using namespace std;

class stackImp
{
private:
    int top;
    int arr[10];

public:
    stackImp()
    {
        top = -1;
        for (int i = 0; i < 10; i++)
        {
            arr[i] = 0;
        }
    }

    void push(int x)
    {
        if (top == 10)
        {
            cout << "Stack overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflw";
        }
        else
        {
            arr[top]=0;
            top--;
        }
    }
    void printStack()
    {
        for (int i = 9; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
};

int main()
{

    stackImp s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.printStack();

    s1.pop();
    s1.printStack();

    s1.push(5);
    s1.printStack();
}