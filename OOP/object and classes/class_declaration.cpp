#include<iostream>
using namespace std;


class Student{
    public :
         int id;
         float cgpa;
         string dept;
};

int main(){

       Student Niloy;
       Niloy.id= 1838;
       Niloy.cgpa= 2.9;
       Niloy.dept= "CSE";

       cout<< " Student information for Niloy  :" << endl;
       cout << " ID = " << Niloy.id<< endl;
       cout << " Cgpa  =  " << Niloy.cgpa<< endl;
       cout<< " Department = "<< Niloy.dept<< endl;

       cout << " \n";

       Student aminul;
       aminul.id= 18765438;
       aminul.cgpa= 3.9;
       aminul.dept= "CE";

       cout<< " Student information For Aminul  :" << endl;
       cout << " ID = " << aminul.id<< endl;
       cout << " Cgpa  =  " << aminul.cgpa<< endl;
       cout<< " Department = "<< aminul.dept<< endl;

    return 0;

}