#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout << " For celsious to farenhite to kelvin temprature : " << endl;
    float c, f,k, celcious, farenhite, kelvin;
    cout << "Enter Celsious temp : ";
    cin>> c;
     cout << "Enter farenhite temp : ";
    cin>> f;
     cout << "Enter kelvin temp : ";
    cin>> k;

    farenhite = (1.8) * c+ 32;
    celcious= ( f-32)/(1.8);
    kelvin = c+273;

    cout<< "  celsious to Farenhite is : "<< farenhite << endl;
    cout<< "  farenhite  to celcious is : "<< celcious << endl;
    cout<< "  celsious to kelvin is : "<< kelvin << endl;

    return 0;

}