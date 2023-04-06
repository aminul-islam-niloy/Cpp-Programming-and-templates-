#include <iostream>
using namespace std;
int main()
{
   int n, k = 0;
   cout<<"Enter number of rows: ";
   cin>> n;
   cout<<"\n";
   
   for (int i = 1; i <= n; ++i)
   {
      for (int j = 1; j <= n - i; ++j)
            cout<<"  ";
                k=0;
      while (k != 2 * i - 1)
      {
			cout<<"* ";
			++k;
      }
      cout<<"\n";
   }
   return 0;
}


   