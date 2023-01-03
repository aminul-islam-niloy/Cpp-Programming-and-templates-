// C program to illustrate sscanf_s statement
// scanf_s() will only work in Microsoft Visual Studio.
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[5];
	
	// sizeof(a) is buffer size
	scanf_s("%s", a, sizeof(a));
	
		printf("\n%s ", a);

	return 0;
}
