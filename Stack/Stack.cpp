#include <iostream>
#include <vector>

using namespace std;

class StackImp
{
private:
    vector<int> arr;

public:
    StackImp() {}

    void push(int x)
    {
        arr.push_back(x);
    }

    void pop()
    {
        if (!arr.empty())
        {
            arr.pop_back();
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }

    void printStack()
    {
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    StackImp s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.printStack();

    s1.pop();
    s1.printStack();

    s1.push(5);
    s1.printStack();

    return 0;
}
