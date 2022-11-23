#include<iostream>
#include<iomanip>
using namespace std;

int main(){

float traingle, square, circle, rectangle, trapezoid, elipse, sector;

// for square
float a;
cout<< " For square"<<endl;
cout<< "enter length of a :";
cin>> a;
square= a*a;
cout<< " Area of square is : "<<square<< endl;

// for traingle
cout<< " for tringle" << endl;
float base, height;
cout<< " Enter base and height : ";
cin>> base>> height;
traingle= 0.5* base*height;
cout << "Traingle is : " << traingle<< endl;

// for circle
cout<< " for circle"<< endl;

float pi= 3.1416, redious;
cout<< " Enter redious of traingle : ";
cin>> redious;
circle= pi* (redious*redious);

cout<< " Circle is : "<< circle<< endl;

// for eleapse
float b;
cout<< " For eleapse"<<endl;
cout<< "enter length of a and b :";
cin>> a>>b;
elipse= pi*a*b;
cout<< " Area of elepse is : "<<elipse<< endl;

// for sector
float theta = 90;
cout<< " For sector"<<endl;
sector = 0.5*(redious*redious)*theta;
cout<< " Area of sector is : "<<sector<< endl;



return 0;

}