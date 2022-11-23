// CPP program to demonstrate the correct and incorrect
// usage of free() function
#include <cstdlib>
#include <iostream>
using namespace std;

// Driver Code
int main()
{

	int* ptr1 = NULL;
	int* ptr2;
	int x = 5;
	ptr2 = &x;
	int* ptr3 = (int*)malloc(5 * sizeof(int));
      cout<<"Output"<<endl;
      cout<<* ptr1<<endl;
      cout<<* ptr2<<endl;
      cout<<* ptr3<<endl;
      cout<<"Without *:"<<endl;

    //    cout<<ptr1<<endl;
    //   cout<<ptr2<<endl;
    //   cout<<ptr3<<endl;
    //   cout<<"x =";
    //   cout<<&x<<endl;
	// Correct uses of free()
	// free(ptr1);
	// free(ptr3);

	// // Incorrect use of free()
	// free(ptr2);

cout<<"After using free: "<<endl;

cout<<ptr1<<endl;
      cout<<ptr2<<endl;
      cout<<ptr3<<endl;

	return 0;
}
