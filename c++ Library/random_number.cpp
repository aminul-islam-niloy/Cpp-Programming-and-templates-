#include<iostream>
#include<random>
using namespace std;

int main(){

    random_device example;

    cout<<" default random_device charaacteristics: "<<endl;

    cout<<"minimum: "<<example.min()<<endl;
    cout<<"maximum: "<<example.max()<<endl;
    cout<<"entropy: "<<example.entropy()<<endl;
    cout<<"a random number: "<<example()<<endl;
}