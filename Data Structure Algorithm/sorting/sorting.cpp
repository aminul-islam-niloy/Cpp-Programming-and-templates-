#include<iostream>
using namespace std;
#include<algorithm>

int main(){
    int array[50],i,n;
    cout<<"Eter array size : ";
    cin>>n;

    cout<<"Enter array element: "<<endl;
    for(i=0; i<n; i++){
        cout<<i<<" element is = ";
        cin>>array[i];
    }
    cout<<"\n";
    cout<<"element before sorting:";
    for(i=0; i<n; i++){
        cout<<array[i]<<" ";
    }

    sort(array,array+ n);

    cout<<"\n";

    cout<<"element after sorting:";
    for(i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
       cout<<"\n";


}