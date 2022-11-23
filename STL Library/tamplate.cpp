// #include<iostream>
// using namespace std;
 
// void show(int,int);
// void show(double,double);
// void show(char,char);
 
// main()
// {
//     show(2,5);
//     show(2.6,7.6);
//     return 0;
// }
 
// void show(int a,int b)
// {
//     cout<<"a="<<a<<endl;
//     cout<<"b="<<b<<endl;
// }
 
// void show(double a,double b)
// {
//     cout<<"a="<<a<<endl;
//     cout<<"b="<<b<<endl;
// }






// #include<bits/stdc++.h>
// using namespace std;

// template<class T>

//     void show(T a, T b){
//         cout<<"a = "<<a<<endl;
//         cout<<"b = "<<b<<endl;
//     }


// int main(){
//     show(2,4);
//     show(3.6, 7.8);
// }


// #include<bits/stdc++.h>
// using namespace std;

// template<class T>

//     void show(T a, T b){
//         T  result;
//         result= (a>b)? a:b;
//         cout<<"Maximam is : "<<result<<endl;
//     }


// int main(){
//     show(2,4);
//     show(3.6, 7.8);
//     show('g','r');
// }




// #include<bits/stdc++.h>
// using namespace std;
 
// template<class T>
// void lswap(T &a,T &b)
// {
//     T temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
 
// main()
// {
//   int a=10,b=20;
//   double x=20.3,y=55.3;
  
//   cout<<endl<<"Before Swap"<<endl;
//   cout<<endl<<"A="<<a<<"\t"<<"B="<<b;
//   cout<<endl<<"X="<<x<<"\t"<<"B="<<y;
   
//    lswap(a,b);
//    lswap(x,y);
    
//   cout<<endl<<endl<<"After Swap"<<endl;
//   cout<<endl<<"A="<<a<<"\t"<<"B="<<b;
//   cout<<endl<<"X="<<x<<"\t"<<"B="<<y;
   
//     return 0;
// }



#include <iostream>
using namespace std;
 
template <class T>
class Test
{
public:
   Test()
   {
     
       cout << "General template object \n";
   }
};
 
template <>
class Test <int>
{
public:
   Test()
   {
       cout << "Specialized template object\n";
   }
};
 
int main()
{
    Test<int> a;
    Test<char> b;
    Test<float> c;
    return 0;
}