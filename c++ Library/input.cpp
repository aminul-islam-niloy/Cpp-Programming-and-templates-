// C program to illustrate sscanf statement
// This program will run on system having the file file.txt
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1[10], s2[10], s3[10];
	int year;
	
	FILE * fp;
	
	// opening/creation of file
	fp = fopen ("file.txt", "w+");	
	
	// storing string in the file
	// fputs("Hello World its 2022", fp);
    fputs("Hi i'am niloy 122", fp);
	
	// sets the file position to the beginning of the file
	rewind(fp);
	
	// taking input from file
	fscanf(fp, "%s %s %s %d", s1, s2, s3, &year);
	
	printf("String1 |%s|\n", s1 );
	printf("String2 |%s|\n", s2 );
	printf("String3 |%s|\n", s3 );
	printf("Integer |%d|\n", year );
	
	// close file pointer
	fclose(fp);	
	
	return(0);
}
