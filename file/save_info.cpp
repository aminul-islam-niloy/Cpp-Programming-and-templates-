#include<iostream>
#include<fstream>
using namespace std;


int main()
{
   string name;
   int age;

    ofstream file;
    file.open("student.txt", ios::out|ios::app);
     
     for( int i=1; i<=3; i++)
        {
      cout<< " Enter Your name: ";
     getline(cin,name);
     file<< " Welcome " << name<< endl;

     cout<< " Enter your age: ";
     cin>> age;
     file<< " Age is :"<< age<< endl;
     cin.ignore();
        }

    file.close();


    return 0;
}
