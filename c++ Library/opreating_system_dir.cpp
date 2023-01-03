// C++ program to list all directories.

#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifdef _WIN32
	system("dir");
#else
	system("ls");
#endif
	return 0;
}
