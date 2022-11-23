#include<iostream>
#include<fstream>

using  namespace std;

int main(){
    string text;

    ofstream file;
    file.open("Filename.txt",ios::out|ios::app);
    getline(cin,text);

    file<<"This is new file"<<text;
    file.close();

}