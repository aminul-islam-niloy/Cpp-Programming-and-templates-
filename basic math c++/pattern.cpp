#include<iostream>
using namespace std;

void print_star(int n){
    for(int i=n; i>0; i--){
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n=5;
    print_star(n);

}