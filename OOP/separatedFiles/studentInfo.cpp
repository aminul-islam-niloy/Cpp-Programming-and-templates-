#include<bits/stdc++.h>
#include "demo.h"

using namespace std;

class student{

    public:
    int id;
    float cgpa;

    void setValue(int x, int y){
        id= x;
        cgpa =y;

    }

    void print(){
        cout<<"Student id is: "<<id<<endl;
        cout<<"Student cgpa : "<<cgpa<<endl;
    }
    // student(){
    //     cout<<"This is default id for student: 1838 "<<endl;
    // }
    // student(int id){
    //     cout<<"Student id is : "<<id<<endl;
    // }

};

int main(){

    student amin ;
    // student();
    amin.setValue(12222, 3.66);
    // student(344576);
    amin.print();

}