#include<iostream>
using namespace std;

class MobileUser
{
    public:
       virtual void sendMessage()= 0;

};

class Public : public MobileUser{

    public:
      void sendMessage(){
          cout<< " Hi, this is Aminul islam Niloy" << endl;
      }
};

class people : public MobileUser{

    public:
      void sendMessage(){
          cout<< " Hi, this is Random guy"<< endl;
      }
};



int main(){

   MobileUser *m;

   Public p;
    m= &p;
    m->sendMessage();

   people po;

   m= &po;
   m->sendMessage();
    return 0;
}