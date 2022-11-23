#include<iostream>
using namespace std;

int main(){
int array[10],i,n,search;

cout<<"Enter array size ; ";
cin>>n;
  cout<<" Enter " <<n<<" sorted array : "<< endl;
    for( i=0; i<n; i++){
        cout<<i<< " array = ";
        cin>> array[i];
    }

    cout<< " Enter search number:";
    cin>>search;
 
 int first=0;
 int last= n-1;
 int mid=(first+last)/2;

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

 if(first>last)
 cout<< search<< " Element not fount"<< endl;
        

return 0;

}