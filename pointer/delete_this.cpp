#include<iostream>
using namespace std;

class A{
    public:
    void fun(){
        delete this;
    }
};

int main(){

    A *ptr = new A;
    ptr ->fun();
    ptr = NULL;

    A a;
    a.fun();
    

}