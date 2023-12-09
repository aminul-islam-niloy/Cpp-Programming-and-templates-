#include <bits/stdc++.h>
using namespace std;

void printQueue(queue<int> q)
{
    queue<int> qq = q;

    while (!q.empty())
    {
        cout << " " << q.front();
        q.pop();
    }
}

int main()
{
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);

    printQueue(que);
}