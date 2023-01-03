#include<iostream>
#include <string.h>


using namespace std;

int  main()

{
	char str1[30], str2[30] ;
	cout<<"Enter a string : ";
	cin>>str1;

	strcpy(str2,str1);
        
	strrev(str2);     
	if( strcmp(str1, str2) == 0 ) 
		cout<<"\n The string is a palindrome.\n";
	else
		cout<<"\n The string is not a palindrome.\n";
}