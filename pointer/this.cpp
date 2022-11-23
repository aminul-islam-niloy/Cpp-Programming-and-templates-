#include<iostream>
using namespace std;

class Test{
    private:
    int x;
    public:
    void setx(int x){
        this ->x=x;
    }
    void print(){
        cout<<"X ="<< x<< endl;
    }
};

int main(){
    Test t;
    int x=20;

    t.setx(x);
    t.print();
}