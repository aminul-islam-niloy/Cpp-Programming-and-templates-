#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
const int maxn = 100000 + 15;
int n, a[maxn];
int main()
{
	int T;
	stack <int> s;
	scanf("%d", &T);
	while(T --)
	{
		while(!s.empty()) s.pop();
		scanf("%d", &n);
		for(int i = 1; i <= n; ++ i) scanf("%1d", &a[i]);
		
		for(int i = n; i; -- i)
		{
			if(s.empty() || s.top() == 1)
			{
				s.push(a[i]);
				continue;
			}
			if(a[i] == 0) s.push(a[i]);
			else
			{
				while(!s.empty() && !s.top())
				{
					s.pop();
				}
				s.push(a[i] - 1);
			}
		}
		while(!s.empty())
		{
			printf("%d", s.top());
			s.pop();
		}
		puts("");
	}
	return 0; 
}