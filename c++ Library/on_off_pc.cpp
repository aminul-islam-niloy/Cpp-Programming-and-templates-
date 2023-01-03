#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int choice;

    cout << "1. Shutdown Your Computer \n";
    cout << "2. Restart Your Computer \n";
    cout << "3. Exit\n";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "System will shutdown after 30 seconds \n";
            system("C:\\windows\\system32\\shutdown /s /t 30 \n\n");
            break;

        case 2:
            cout << "System will restart in 30 seconds\n";
            system("C:\\windows\\system32\\shutdown /r /t 30\n\n");
            break;

        case 3:
            exit(0);
            break;

        default:
            cout << "Wrong Choice!!\n";
            break;
    }

    return 0;
}