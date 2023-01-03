// C++ program to demonstrate use of _Exit()
#include <stdio.h>
#include <stdlib.h>

// Driver Code
int main(void)
{
	int exit_code = 10;
	printf("Termination using _Exit");
	_Exit(exit_code);
}
