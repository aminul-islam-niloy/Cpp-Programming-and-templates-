#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float cel,fahrenheit;

   // cout<<"Enter celcious temp to convert: ";
    //cin>>cel;
     cout<<"Enter farenhite temp to convert: ";
     cin>>fahrenheit;

  //  fahrenheit=(1.8 * cel)+32;
    cel=(fahrenheit - 32) * 5 / 9;

   // cout<<"Farenhite is "<<fahrenheit<<endl;
      cout<<"celcias is "<<setprecision(4)<<cel<<endl;
}