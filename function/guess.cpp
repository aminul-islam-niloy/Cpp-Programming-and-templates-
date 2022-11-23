#include<iostream>
#include<stdlib.h>
using namespace std;

float guessing(){

     float rendom = rand()%10 +1;
       return rendom;
    
}

int main(){

    while(1){
        float num ;
        cout<< " Enter a number for guassing  1 to 10 : ";
        cin>> num;
        cout<< " \n";

        float guess = guessing();

        if( num > 10){
            cout<< " Input wrong ! Enter number 1 to 10 " << endl;
            cout<< " \n";
        }
        else{
            if( guess == num){
            cout << " WOW You won " << endl;
            cout<< " \n";
            
             }
        else
            cout << "  Ohh no, You lose ! try again"<< endl;

            cout<< " Random Number was : " << guess<< endl;
            cout<< " \n";
        }

    }

    return 0;
}