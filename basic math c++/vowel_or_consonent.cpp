#include<iostream>
using namespace std;
int main()
{

  char ch;
  int uppercase, lowercase;

  cout << "Enter a Character: ";
  cin >> ch;
  uppercase = (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
  lowercase = (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');

  if(uppercase || lowercase)
    cout << ch << " is Vowel." << endl;
  else
    cout << ch << " is Consonant." << endl;

  return 0;
}