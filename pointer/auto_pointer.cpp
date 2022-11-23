#include<iostream>
#include<memory>
using namespace std;

class A{
    public:
    void show(){
        cout<<"A: : show()"<<endl;
    }
};

int main(){
    auto_ptr<A> p1(new A);
    p1->show();

    cout<<p1.get()<<endl;

    auto_ptr<A> p2(p1);
    p2->show();

    cout<<p1.get()<<endl;
    cout<<p2.get()<<endl;
    return 0;
}
