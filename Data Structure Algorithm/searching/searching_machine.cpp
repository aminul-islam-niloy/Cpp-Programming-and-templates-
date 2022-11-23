#include<iostream>
using namespace std;

void linear_search(int array[], int n, int search){
    int i;
    for(i=0; i<=n; i++){
        if(array[i]==search){
            break;
        }
        
    }
    if(i<n){

       cout<<search<<" element found at "<< i<< " index"<<endl;
    }
    else{
            cout<<search<< " element not found"<<endl;
        }
     
}


void binary_search(int array[], int n, int search){

    int i, first, mid, last;
    first=0;
    last=n-1;
    mid=(first+last)/2;

    while(first<=last){
        if(array[mid]<search){
        first = mid+1;
        }
        else if(array[mid]==search){

        cout<< search<< " Element found  in "<<mid<<" th position"<< endl;
        break;
           
        }
        else
            last= mid-1;
            mid=(first + last)/2;

 }
 if(first>last){
    cout<<"Element Not Found"<<endl;
 }

}

int main(){
  
   while(1){
     int  array[100],i, n, search, select;

   cout<<"Enter array size: ";
   cin>>n;

   cout<<"Array elements are: "<<endl;
   for(i=0; i<n; i++){
    cout<<i<<" element = ";
    cin>>array[i];
   }

   cout<<"Enter array element that you want to search: ";
   cin>>search;

   cout<<"\n";
    cout<<"Select an operation of seraching: "<<endl;
   cout<<"1.Linear Search "<<endl;
   cout<<"2.Binary search "<<endl;
   cout<<"\n";
   cout<<"Choose an option: ";
    cin>>select;
    switch(select){
        case 1: linear_search(array,n,search); break;
        case 2: binary_search(array,n,search); break;
        default: 
        cout<<"Enter a valid number "<<endl;

    }
   }
   
   
    return 0;

}
