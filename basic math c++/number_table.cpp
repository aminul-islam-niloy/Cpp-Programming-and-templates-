#include<iostream>
using namespace std;
int main(){
    int table;
    cout<<"Enter table Number: ";
    cin>>table;
    // int count=1;

    // while(count<=10)
    // {
    //     cout<<table <<" x "<<count<<" = "<<table*count<<endl;
    //     count++;
    // }

    for(int i=1; i<=10; i++){
        cout<<table<<" x "<<i<<" = "<<table*i<<endl;
    }

}
