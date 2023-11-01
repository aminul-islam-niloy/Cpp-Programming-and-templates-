#include <iostream>
using namespace std;

class Student
{
    float cgpa;
    // by default data are private
public:
    string name;
    int id;
    string dept;

    // set method to access private information or attribute
    void setCgpa(float cg)
    {
        cgpa = cg;
    }

    void getCgpa()
    {
        cout << cgpa << endl;
    }
    // constructor
    Student(float cg)
    {
        cgpa = cg;
    }

    // copy constructor
    // Student(Student &a)
    // {
    //     name = a.name;
    // }

    void printInfo()
    {
        cout << "Name =";
        cout << name << endl;
        cout << "Id is= ";
        cout << id << endl;
        cout << "Department is";
        cout << dept << endl;
        cout << endl;
    }
};

int main()
{

    // Student student[5];
    // float cg;
    // for (int i = 0; i < 2; i++)
    // {
    //     cout << "Name is: ";
    //     cin >> student[i].name;
    //     cout << "Id  is: ";
    //     cin >> student[i].id;
    //     cout << "cgpa  is: ";
    //     cin >> cg;
    //     student[i].setCgpa(cg);
    //     cout << "Deparment  is: ";
    //     cin >> student[i].dept;
    //     cout << endl;
    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     student[i].printInfo();
    //     cout << endl;
    // }

    // using perametirize constructor get and set
    Student a(3.88);
    a.getCgpa();

    return 0;
}