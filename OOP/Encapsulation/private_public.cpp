#include<iostream>
using namespace std;

class Student
{
    private:
          string name;
          int age;
          int pin;
    
    public:
     void setName(string x){
         name= x;
     }

     string getName(){
         return name;
     }

      void setAge(int y){
         age= y;
     }

     int getAge(){
         return age;
     }

      void setPin(int p){
         pin= p;
     }

     int getPin(){
         return pin;
     }

        void display(){

            cout<< "Your name is :" << name<< endl;
            cout << "Your age is :" << age<< endl;
            cout<< " Your pin is :" << pin << endl;
        }     
};

int main(){
         Student s1;
         s1.setName("Niloy");
         s1.setAge(23);
         s1.setPin(9443);
         s1.display();
    return 0;
}