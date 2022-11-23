#include<iostream>
#include<fstream>
using namespace std;

int main(){

    //  ifstream fin("text.txt");
    ifstream file("text.txt");

     int char_count=0;
     char c= file.get();
     while(!file.eof()){
        ++char_count;
        cout<<char_count<<" "<<c<< " \n";

        c=file.get();
     }
     cout<<char_count<<" Characters : \n";

}
