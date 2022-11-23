#include<iostream>
using namespace std;

void insertion_sort(int array[], int n){
    int i,j,k,key;
    for(i=1; i<n; i++){
        key=array[i];
        j=i-1;

        while(j>=0 && array[j]>key){
            array[j+1]= array[j];
            j= j-1;
        }
        array[j+1]= key;
    }
}


int main(){
    int array[50],n,i;
    cout<<"Enter array size:";
    cin>>n;
    cout<<" Enter array elements: "<<endl;
    for(i=0; i<n; i++){
        cout<<i<<" th array = ";
        cin>>array[i];
    }
   
    cout<<"\n";
    cout<<" Before sorting array : ";
    for(i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
 insertion_sort(array,n);
    cout<<"\n";
    cout<<" After sorting array : ";
    for(i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
   

}