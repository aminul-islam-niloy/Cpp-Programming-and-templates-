#include<bits/stdc++.h>
using namespace std;
int  main(){
    // double x=4.1;
    // double x=-4;
    double x= 3000.0;
    double result= sinh(x);
    cout<<" Sinh(4.1)  = "<<result<<endl;

    // double xdegree= 90;
    // x=xdegree*3.1416/180;

    // result=sinh(x);
    // cout<<"sinh(90 degree) = "<< result<<endl;

    double xDegrees = 90;
    // convert to radians
    x = xDegrees * 3.14159 / 180;
  
    result = sinh(x);
    cout << "sinh(90 degrees) = " << result << endl;
  

}