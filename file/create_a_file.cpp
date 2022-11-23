#include<iostream>
#include<fstream>

using namespace std;


int main()
{
   string name;

    ofstream file;
    file.open("text.txt", ios::out|ios::app);

     cout<< " Enter Your name: ";
     getline(cin,name);
     file<< " Welcome " << name<< endl;
    file.close();


    return 0;
}
