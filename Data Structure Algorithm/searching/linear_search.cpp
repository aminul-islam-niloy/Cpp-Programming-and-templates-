#include<iostream>
using namespace std;

int main(){
int array[100],i,x,n,search;

cout<< " Enter array size : ";
cin>>n;

  cout<<"\n Enter array number:\n ";
    for( i=0; i<n; i++){
        cout<<i<< " array = ";
        cin>> array[i];
    }

    cout<< " Enter search number:";
    cin>>search;

        for( i=0; i<search; i++){
            if(array[i]==search)
            break;    
        }

        if(i<n)
        cout<< " Found in " <<i<<endl;
        else
        cout<< " Not found";


return 0;

}