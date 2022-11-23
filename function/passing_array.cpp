#include<iostream>
using namespace std;


void display(int number[], int size)
{
    for(int i=0; i<size; i++)
    cout<< " Number is : " << number[i] << endl;
}

int main(){

    int num[5] = { 3,5,6,7,8};
    display(num, 5);

    return 0;
}