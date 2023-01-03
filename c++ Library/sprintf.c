// The snprintf() function formats and stores a series of characters and values in the array buffer. 
// The snprintf() function accepts an argument ‘n’, which indicates the maximum number of characters 
//(including at the end of null character) to be written to buffer. 
// The snprintf() function is used to redirect the output of  printf() function onto a buffer. 
// The snprintf() also returns the number characters that were supposed to be written onto the buffer
// (excluding the null terminator), irrespective of the value of ‘n’ passed.
// So, only when the returned value is non-negative and less than ‘n’, 
//the string has been completely written as expected.




// C program to demonstrate snprintf()
#include <stdio.h>

int main()
{
	char buffer[50];
	char* s = "aminul islam niloy";

	// Counting the character and storing
	// in buffer using snprintf
	printf("Writing %s onto buffer"
		" with capacity 10",
		s);
	int j = snprintf(buffer, 10, "%s\n", s);

	// Print the string stored in buffer and
	// character count
	printf("\nString written on "
		"buffer = %s", buffer);
	printf("\nValue returned by "
		"snprintf() method = %d\n", j);

	return 0;
}
