#include<iostream>
using namespace std;
class Pet{
    public:
    virtual string getDescription()const{
        return "This is pet class";
    }
};

class Dog: public Pet{
    public:
    virtual string getDescription() const{
        return "This is dog class";
    }
};

void describe(Pet p){
cout<<p.getDescription()<<endl;
}

int main(){
    Dog d;
    describe(d);
    return 0;
}