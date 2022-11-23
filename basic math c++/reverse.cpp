#include<iostream>
using namespace std;
int main(){

    int num, temp=0, reminder, sum =0;

    cout<< " Enter  for reverse : ";
    cin>> num;

    while( num !=0){

        reminder = num %10;
        sum = (sum*10) + reminder;
        num /= 10;
    }
    cout<< " Reverse is : "<< sum<< endl;
return 0;
}