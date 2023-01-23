#include<iostream>
using namespace std;
int main(){

int marks;
cout<< " Enter marks:  ";
cin>> marks;

switch (marks/810){
   
   case 10: cout<<" Your grade is A+ ";
            break;
   case 9: cout << " Your marks is A ";
            break;
   case 8: cout<<" Your grade is A-";
            break;
   case 7: cout << " Your marks is B+ ";
            break; 
   case 6: cout<<" Your grade is B ";
            break;
   case 5: cout << " Your marks is B- ";
            break;
   case 4: cout<<" Your grade is C ";
            break;
   case 3: cout << " Your marks is D ";
            break;
   default: 
           cout << " Your marks is F ";
            break;  

return 0;
}

}