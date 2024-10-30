#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int priotity(char x)
{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if (x == '^')
        return 3;
    return 0;
}

int main()
{
    string exp;
    char x;
    cout << "Enter your expression: ";
    cin >> exp;

    for (int i = 0; i < exp.size(); i++)
    {
        if (isalnum(exp[i]))
        {
            cout << exp[i];
        }
        else if (exp[i] == '(')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            while ((x = pop()) != '(')
            {
                cout << x;
            }
        }
        else
        {
            while (priotity(stack[top]) >= priotity(exp[i]))
            {
                cout << pop();
            }
            push(exp[i]);
        }
    }
    while (top != -1)
    {
        cout << pop();
    }
    return 0;
}

// Enter your expression: (A–B)*(D/E)
// output:  AB-DE/*