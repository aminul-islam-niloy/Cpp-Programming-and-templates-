//Note:  used typeid for getting the type of the variables. 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//      auto x=4;
//      auto y=3.5;
//      auto ptr = &x;
//      cout<<typeid(x).name()<<endl
//          <<typeid(y).name()<<endl
//          <<typeid(ptr).name()<<endl;
// }


// ************************************** ************************ ***************
// #include<bits/stdc++.h>
//     using namespace std;

//     int main(){
//         set<string> s;
//         s.insert({"aminul","islam","niloy"});

//         for(auto &s: s)
//         {
//                  cout<<s<<" " ;
        
//         }
           
//     }


// #include <bits/stdc++.h>
// using namespace std;
 

// int main()
// {
//     int x = 5;
 
//     // j will be of type int : data type of x
//     decltype(x) j = x + 5;
 
//     cout << typeid(j).name();
 
//     return 0;
// }

// ************************ ***************** ************


// #include<bits/stdc++.h>
// using namespace std;

// int func(){
//     return 10;
// }

// char func2(){
//     return 'g';
// }

// int main(){
//     decltype(func())x;
//     decltype(func2())y;

//     cout<<typeid(x).name()<<endl;
//     cout<<typeid(y).name()<<endl;
// }

//**********************************************************



// #include<bits/stdc++.h>
// using namespace std;

// auto findMin(auto a,auto b){
//          return (a<b)? a:b;
// }

// int main(){
//     cout<<findMin(4,3.44)<<endl;
//     cout<< findMin(3,7.5)<<endl;
// }


//********************** **************** *****************

#include <bits/stdc++.h>
using namespace std;
 
template <class A, class B>

auto findMin(A a, B b) -> decltype(a < b ? a : b)
{
    return (a < b) ? a : b;
}

int main()
{
 
    cout << findMin(4, 3.44) << endl;
 
    cout << findMin(5.4, 3) << endl;
 
    return 0;
}
