#include<iostream>
using namespace std;


class Student {

    public:
        int id;
        double cgpa;

    void print(){
        cout<< " Student id is : " << id<< endl;
        cout<< " Student cgpa is:" << cgpa << endl;
    }
};


class Person : public Student{

    public: 
       string name;

       void dispplay(){
           cout<< " Student Name is : " << name<< endl;
           print();
       }

};

int main(){

    Person p;
    p.name= "Aminul";
    p.id= 1838;
    p.cgpa= 3.18;
    p.dispplay();

    return 0;
}