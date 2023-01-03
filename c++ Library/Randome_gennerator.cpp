#include<iostream>
#include<chrono>
#include<random>

using namespace std;

int main(){
    //find the times between the system clock;
    //present time and clock's epoch

    unsigned seed= chrono::system_clock::now().time_since_epoch().count();

    //1. for linear configuration  engine standard
    minstd_rand0 generator (seed);

    //2. for mersenne_twister_engine standard
    //mt19937 generator(seed);

     //3. for substruct_with_carray_engine standard
    //subtract_with_carry_engine<unsigned,24,10,24>generator (seed);


    cout<< generator()<<" is a random number between  ";
    cout<<generator.min()<< "  and  "<<generator.max();

    return 0;

}