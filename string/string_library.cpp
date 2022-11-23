#include<iostream>
#include<cstring>
#include<stdio.h>


using namespace std;

int main(){

    char name[]= "aminul";
    // char name2[40];
    char name3[]="aminul";

    int lenth= strlen(name);
    cout << " Length is : "<< lenth<< endl;

    // strcpy(name2,name);
    // cout<< " Copied name 2 is :  " << name2<< endl;

    // strcat(name,name3);
    // cout<< " marge is: " << name << endl;

        int value= strcmp(name,name3);
        if(value==0){
            cout<< " Strigs are equal";
        }
        else
        {
            cout<< " Strings are not equal";
        }




    
return 0;

}