// #include <iostream>
//  using namespace std;
//  int main(){
//  int a;
//  int i;
// cout<<"number "<<endl;
//  cin>>a;
//  for(i=0;i<=a;i++)
//  if(i%3==1)
//  cout<<" number is "<<i<<endl;
// }


#include <iostream>
using namespace std;
int findNthTerm(int N) {
   int NthTerm = 0;
   for (int i = 1; i <= N; i++)
      NthTerm = NthTerm + i;
      
   return NthTerm;
}
int main() {
   int N = 8;
   cout<<"The "<<N<<"th term of the series is "<<findNthTerm(N);
   return 0;
}