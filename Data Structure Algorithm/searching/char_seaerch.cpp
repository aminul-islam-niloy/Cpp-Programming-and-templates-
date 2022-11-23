#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

void linear_search(char array[][50], int n, char search[])
{
    int i;
    for(i=0; i<=n; i++)
    {
        if(strcmp(search,array[i])==0)
        {
            break;
        }
        
    }
      cout<<search<<" element found at "<< i<< " index"<<endl;
   
    if(i=n)
   
            cout<<search<< " element not found"<<endl;
        
     
}


void binary_search(char array[][50], int n, char search[]){

    int i, first, mid, last;
    first=0;
    last=n-1;
    mid=(first+last)/2;

    while(first<=last){
        if(strcmp(search,array[mid])>0){
        first = mid+1;
        }
        else if(strcmp(search,array[mid])==0){

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
     char  array[10][50],search[50];
     int i, select,n;

   cout<<"Enter char array size: ";
   cin>>n;

   cout<<" char Array elements are: "<<endl;
   for(i=0; i<n; i++){
    cout<<i<<" string = ";
    scanf("%s",& array[i]);
   }

   cout<<"Enter array element that you want to search: ";
   scanf("%s",& search);

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
