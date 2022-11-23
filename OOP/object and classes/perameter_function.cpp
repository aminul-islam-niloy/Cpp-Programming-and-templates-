#include<iostream>
using namespace std;


class Student{
    public :
         int id;
         float cgpa;
         string dept;

         void input(int ID, float gpa, string dep ){
             id= ID;
             cgpa=gpa;
             dept=dep;
         }

         void display(){
              cout << " ID = " << id<< endl;
              cout << " Cgpa  =  " << cgpa<< endl;
              cout<< " Department = "<< dept<< endl; 
         }
};

int main(){

       Student Niloy;
       
        Niloy.input(18380000, 2.99," Computer") ; 
       cout<< " Student information for Niloy  :" << endl;
      Niloy.display();
       cout << " \n";

       Student aminul;
       aminul.input(1777000, 2.89," CDFG") ; 

       cout<< " Student information For Aminul  :" << endl;
       aminul.display();

    return 0;

}