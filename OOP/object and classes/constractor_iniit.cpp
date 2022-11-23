#include<iostream>
using namespace std;

class Student{
    public:
     const int fee;

      Student(int x)
      : fee(x)
      {
          cout<< " Admission fee is : "<< fee<< endl; 
      }
};


int main(){

           Student stu(10000);


    return 0;
}