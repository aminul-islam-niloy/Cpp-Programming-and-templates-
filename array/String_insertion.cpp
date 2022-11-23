
// 2. Inserting: Insert
//String to a sorted array. c to position 5.

#include<iostream>
#include <stdlib.h>
#include<string.h>
#define STR 10
#define LEN 50

using namespace std;

char a[STR][LEN];
int n;
void sort(char a[][LEN], int n);
int value(char a[][LEN], int n);
int index(char a[][LEN], int n);


int main(){

    cout<< "Enter the size of array: ";
    cin>>n;

    cout<<"Enter Strings of the array: \n";

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int choice;

    while(1){
        cout<<"\n\n:::Menu:::\n";
        cout<<"1. Sort\n";
        cout<<"2. Insert String with Value\n";
        cout<<"3. Insert String with Index\n";
        cout<<"4. Exit\n";

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){

            case 1: sort(a,n);
                    break;
            case 2: n = value(a,n);
                    break;
            case 3: n = index(a,n);
                    break;
            case 4: exit(0);
            default: 
            cout<<"Enter valid input..."<<endl;
        }
    }

    return 0;
}


void sort(char a[][LEN], int n){

    char temp[100];

    for(int i=0;i<(n-1);i++){
        int j_min = i;
        for(int j=i+1;j<n;j++){
            if(strcmp(a[j],a[j_min])<0){
                j_min=j;
            }
        }
        if(j_min != i){
            strcpy(temp, a[i]);
            strcpy(a[i],a[j_min]);
            strcpy(a[j_min],temp);
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }

}

int value(char a[][LEN], int n){

    char item[LEN];
    int position;
    cout<<"Enter String to be inserted: ";
    cin>>item;

    for(int i=0;i<n;i++){

        if (strcmp(item,a[i])<0){
            position = i;
            break;
        }else{
            position = i+1;
        }
    }

    for(int j=n+1;j>=position;j--){
            strcpy(a[j], a[j-1]);
    }

    strcpy(a[position], item);

    n=n+1;

    cout<<" \nThe final array: ";
    for(int k=0;k<n;k++){
        cout<< a[k];
    }

    return n;
}


int index(char a[][LEN], int n){

    int indexValue;
    char item[LEN];

    cout<<"\nEnter index no. to insert the data: "<<endl;
    cin>>indexValue;
    cout<<"Enter data to be inserted: ";
    cin>>item;

    for(int j=n+1;j>=indexValue;j--){
            strcpy(a[j],a[j-1]);
    }

    strcpy(a[indexValue-1],item);
    n=n+1;

    cout<<" \nFinal Array elements: "<<endl;

    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return n;
}