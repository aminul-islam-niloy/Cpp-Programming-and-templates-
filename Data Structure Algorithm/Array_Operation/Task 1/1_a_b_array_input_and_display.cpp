#include <iostream>
using namespace std;

int main() {
 
  int N;
  cout<<"Enter array size: ";
  cin>>N;

  int numbers[N], i;
 
  cout << "Enter "<<N <<" numbers: " << endl;
  for ( i = 0; i<N; i++)
   {
    cin >> numbers[i]; 
    }

  cout<<"\n";

  cout << "Display array element : ";

  for ( i = 0; i<N; i++)
  {
    cout << numbers[i] <<" ";
  }
   cout<<"\n";

  return 0;
}