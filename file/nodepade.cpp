#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string name;

    ofstream file;

    file.open("simpleText.txt", ios::out|ios::app);
    cout<<" Text here: ";
    getline(cin,name);
    file<<name<<endl;
    cout<<"\n";

    file.close();
    return 0;
}