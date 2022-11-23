// CPP program to illustrate std::memcmp()
#include <iostream>
#include <cstring>
  
int main()
{
    char buff1[] = "it's first day";
    char buff2[] = " before or after is a day and ";
  
    int a;
  
    a = std::memcmp(buff1, buff2, sizeof(buff1));
  
    if (a > 0)
        std::cout << buff1 << " is greater than " << buff2;
    else if (a < 0)
        std::cout << buff1 << "is less than " << buff2;
    else
        std::cout << buff1 << " is the same as " << buff2;
  
    return 0;
}