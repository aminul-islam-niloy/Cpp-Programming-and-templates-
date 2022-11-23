#include<iostream>
using namespace std;


class Student{
    public :
         int id;
         float cgpa;
         string dept;

         void display(){
              cout << " ID = " << id<< endl;
              cout << " Cgpa  =  " << cgpa<< endl;
              cout<< " Department = "<< dept<< endl; 
         }
};

int main(){

       Student Niloy;
       Niloy.id= 1838;
       Niloy.cgpa= 2.9;
       Niloy.dept= "CSE";

       cout<< " Student information for Niloy  :" << endl;
      Niloy.display();
       cout << " \n";

       Student aminul;
       aminul.id= 18765438;
       aminul.cgpa= 3.9;
       aminul.dept= "CE";

       cout<< " Student information For Aminul  :" << endl;
       aminul.display();

    return 0;

}