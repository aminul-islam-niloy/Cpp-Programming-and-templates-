// #include <cstring>
// #include <iostream>
  
// using namespace std;
  
// int main()
// {
//     char sr[] = "It i really very big ";
//     char ch = 's';
//     int count = 13;
  
//     if (memchr(sr, ch, count))
//         cout << ch << " is present in first "
//              << count << " characters of \"" << sr << "\"";
//     else
//         cout << ch << " is not present in first "
//              << count << " characters of \"" << sr << "\"";
  
//     return 0;
// }


//another example of memchr

// CPP program to illustrate memchr()
#include <iostream>
#include <cstring>
  
int main()
{
    char arr[] = { 'b', 'a', 'd', 'e', 'f', 'A', 'g' };
    
    char* pc = (char*)std::memchr(arr, 'g', sizeof arr);
    if (pc != NULL)
        std::cout << "search character found\n";
    else
        std::cout << "search character not found\n";
}