#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int array[100],i,x,n, search;

    cout<<"Enter array size: ";
    cin>>n;
    for(int i=0; i<=n ; i++){
        cout<<i<< "  Array = ";
        cin>>array[i];
    }
cout<<"Enter search item: ";
cin>>search;

for(i=0; i<search; i++){
    if(array[i]==search){
        break;
    }
}

if(i<n){
    cout<<"Element found in "<<i<<endl;

}
else 
cout<<"Not found";
getch();
}
