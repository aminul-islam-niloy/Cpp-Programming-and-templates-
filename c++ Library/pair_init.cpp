#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<string,double> PAIR1("Niloy",3.5);
    cout<<PAIR1.first<<" ";
    cout<<PAIR1.second<<endl;
     
      pair<string, double> PAIR2;

    PAIR2 = make_pair("you are  the Best", 4.56);
    cout<<PAIR2.first<<" ";
    cout<<PAIR2.second<<endl;

    return 0;

}


//pair<int, <char, int> > p = { 3, { 'a', 10 } };

//a touple can handle different data type
//tuple t = {3, 4, 5, 'a'};

