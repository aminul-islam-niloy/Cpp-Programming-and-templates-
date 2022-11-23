#include<iostream>
using namespace std;
 
int main()
{
  int i, Number, count, Minimum, Maximum; 
  
  cout<<"Please Enter the Minimum & Maximum Values : " ;
  cin>> Minimum>> Maximum ;

  Number = Minimum; 
  

  while(Number <= Maximum)
  {
    count = 0;
    i = 2;
    while(i <= Number/2)
    {
      if(Number%i == 0)
      {
        count++;
	    break;
      }
      i++;	
    }	
    if(count == 0 && Number != 1 )
    {
       cout<< Number << "\t" ;
    }
    Number++; 
  }
  return 0;
}
 