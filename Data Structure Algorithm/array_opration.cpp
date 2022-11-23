#include<iostream>
using namespace std;

void searching(int array[], int number){

    int i,search;
    cout<<"Enter an element for search: "<<endl;
    cin>>search;

    for(i=0; i<search; i++){
        if(array[i]==search){
            break;
        }
    }
    if( i<number){
        cout<<search << " element found in  "<<i << " th index "<<endl;
          cout<<"\n";
    }
    else
    cout<<"Array ellement not found"<<endl;
      cout<<"\n";


}

void sorting(int array[], int n){
   int i,j, temp;
   for(i=0; i<n-1; i++){
    for(j=0; j<n-i-1; j++){
        if(array[j]>array[j+1]){
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
    }
   }

   cout<<" Array element is assending order: ";
   for(i=0; i<n; i++){
    cout<<array[i]<<" ";
   }
     cout<<"\n";

}

void deletef(int array[],int n) {
 int i, position;
  cout<<"\n";

 for(i=0; i<n; i++){
    cout<<"remining " <<i<< " th array is "<< array[i]<<" "<<endl;
 }
 cout<<"Enter positioin number to delete an element : ";
 cin>>position;

 if(position<0 || position>n){
    cout<<" Invalid position !"<<endl;

 }
  else{
    for(i=position-1; i<n-1; i++){
        array[i]=array[i+1];
    }
    n--;
    cout<<"  After deleting an element, array is "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
  }
    cout<<"\n";

}


int main(){
    while(1){
     
     int array[100],i,n,search,choose;
    cout<<"Enter array size ";
    cin>>n;
    cout<<"Enter Array Element:"<<endl;
    for(i=0; i<n; i++){
      cout<<i<<" th element = ";
      cin>>array[i];
    }
     cout<<"\n";
    int  loop=1;

    while(loop !=0){
        cout<<"\n";
      cout<<"Operation Menu : "<<endl;
    cout<<"1. Searching "<<endl;
    cout<<"2. Sorting "<<endl;
    cout<<"3. Delete"<<endl;
    cout<<"4. Exit"<<endl;

    cout<<"\n";
    cout<<"Enter Chosse for : ";
    cin>>choose;


    switch(choose){
        case 1: searching(array,n); break;
        case 2: sorting(array,n); break;
        case 3: deletef(array,n); break;
        case 4: loop=0;break;
        default: cout<<"Enter a valid choose "<<endl;
        cout<<"\n";
    }

    }
    }
    

    
return 0;



}