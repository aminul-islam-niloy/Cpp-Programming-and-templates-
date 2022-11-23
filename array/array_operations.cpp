#include<iostream>
using namespace std;

int main(){

    int num[100], i,n, sum=0;

    cout<< " Enter  how much item : ";
    cin>> n;

    cout<< "  Enter array " << n << "  element : " << endl ;
    for( i=0; i< n; i++)
    {
        cout << " element of  " << i+1 << " is : " ;
       cin>> num[i];
       
         sum = sum+ num[i];
    }
  
cout << "\n";

cout <<" Sum of " << n << " Number is " << sum<< endl;

float avarage = (float) sum/ n;

cout <<" avarage of " << n << " Number is " << avarage << endl;

int max = num[0];
for ( i=1; i< n; i++){
    if( max< num[i]){
       max= num[i]; 
    }
}
cout<< " Maximum number is :" << max << endl;

int min = num[0];
for ( i=1; i< n; i++){
    if( min > num[i]){
       min= num[i]; 
    }
}
cout<< " Minimum number is : " << min;


return 0;
}