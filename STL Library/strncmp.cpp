// C, C++ program to demonstrate
// functionality of strncmp()
  
// #include <stdio.h>
// #include <string.h>
  
// int main()
// {
//     // Take any two strings
//     char str1[10] = "akash";
//     char str2[10] = "akashA";
  
//     // Compare strings using strncmp()
//     int result = strncmp(str1, str2, 6);
  
//     if (result == 0) {
//         // num is the 3rd parameter of strncmp() function
//         printf("str1 is equal to str2 upto num characters\n");
//     }
//     else if (result > 0)
//         printf("str1 is greater than str2\n");
//     else
//         printf("str2 is greater than str1\n");
  
//     printf("Value returned by strncmp() is: %d", result);
  
//     return 0;
// }



// CPP program to illustrate strncmp()
#include <cstring>
#include <iostream>
  
void display(char* abc, char* xyz, int res, int count)
{
    if (res > 0)
        std::cout << xyz << " come-before " << abc;
    else if (res < 0)
        std::cout << abc << " come-before " << xyz;
    else
        std::cout << "First " << count << " characters of string " << 
        abc << " and " << xyz << " are same";
    ;
}
  
int main()
{
    char abc[] = "my name  is niloy";
    char xyz[] = " is niloy and it s very big deal";
    int res;
    res = std::strncmp(abc, xyz, 6);
    display(abc, xyz, res, 6);
    return 0;
}