#include<iostream>
#include<iomanip>
using namespace std;

long double operator"" _kg(long double x){
    return x*1000;
}

long double operator"" _g(long double x){
    return x;
}

long double operator"" _mg(long double x){
    return x/1000;
}


int main()
{
    long double weight=3.6_kg;
    cout<<weight<<endl;
    cout<<setprecision(8)<<(weight+2.3_mg)<<endl;
    cout<<(32.3_kg/2.0_g)<<endl;
}