#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main( )
{


  float x, y, x1, y1, x2, y2, dx, dy, for_case;
  int i=0;

  cout << " x1 and y1: ";
  cin >> x1 >> y1;
  cout << " x2 and y2: ";
  cin >> x2 >> y2;
  
  dx = (x2 - x1);
  dy = (y2 - y1);

        cout<<"For initial x and y= "<<dx<<" and "<<dy<< endl;

    if (abs(dx) >= abs(dy))
    {
        for_case = abs(dx);
        cout<<"case value is less than equal and value is "<<for_case<<endl;
    }
       
    else
    {
        for_case = abs(dy);
        cout<<"case value is greater and value is "<<for_case<<endl;
    }
       
  dx = dx / for_case;   
  dy = dy / for_case;   
  cout<<"Depends on case value x = "<<dx<<" and y "<<dy<< endl;

  x = x1;
  y = y1;

  while (i <= for_case) 
  {
    cout<<x<<"  "<<y <<endl;

    x = x + dx;
    y = y + dy;
    
    i = i + 1;
  }

}

