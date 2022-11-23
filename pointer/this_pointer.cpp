#include<iostream>
using namespace std;
class Test{
    private:
    int x;
    public:
    void setX(int x){
        this->x=x;
    }
    void print(){
        cout<<"x ="<<x<<endl;
    }
};

int main(){
 Test a;
 int x= 20;
 a.setX(x);
 a.print();
}