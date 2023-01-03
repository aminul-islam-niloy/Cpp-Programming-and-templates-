#include<bits/stdc++.h>

using namespace std;

int main( )
{
  float x, y,c, x1, y1, x2, y2, dx, dy, m,limit;

  cout << " x1 and y1: ";
  cin >> x1 >> y1;
  cout << " x2 and y2: ";
  cin >> x2 >> y2;

  dx=(x2-x1);
  dy=(y2-y1);

  m = dy/dx; 
  cout<<"slope "<<m<<endl;
   
  c = y1-(m*x1); 

    if (dx<0)  
    {  
        x=x2;  
        y=y2;  
        limit=x1;  
    }  
    else  
    {  
        x=x1;  
        y=y1;  
        limit=x2;  
    } 
     
while (x<=limit)  
    {  
        cout<<x<<" "<<y<<endl;  
        x++;  
        y=(m*x)+c;  
    }  
} 


