// #include<iostream>
// #include<math.h>

// using namespace std;

// int main(){
//    int num, sum=0, i,r;
//    cout<<"Enter number: ";
//    cin>>num;

//    for(i=num; i>0; i=i/10){
//     r=i%10;
//     sum= sum+r*r*r;
//    }

//    if(num=sum){
//     cout<<"ok";
//    }
//    else
//    cout<<"No";

// }




// #include<iostream>
// #include<math.h>

// using namespace std;

// int order(int num){
//    int count=0;

//    while(num>0){
//       num/=10;
//       count++;
//    }

//    return count;
// }

// bool is_arm(int num){
//    int order_n= order(num);
//     int temp=num, sum=0;

//     while(temp>0){
//       int current= temp%10;
//       sum+=pow(current,order_n);
//       temp/=10;
//     }

//     if(sum==num){
//       return true;
//     }
//       else 
//       return false;

// }

// int main(){
//    int n1,n2;
//    cout<<"Enter range : ";
//    cin>>n1;
//    cin>>n2;

//    for(int num= n1; num<=n2; ++num){
//        if(is_arm(num)) 
//        {
//          cout<<num<<" ";
//        }
//    }

// }





#include<bits/stdc++.h>
using namespace std;

int order(int num){
    int count=0;
    while(num>0){
      num/=10;
      count++;
    }
    return count;
}

bool is_arm(int num){
  int  order_n= order(num);
  int temp=num, sum=0;
  while(temp>0){
    int current= temp%10;
    sum+=pow(current,order_n);
    temp/=10;
  }

  if(sum==num){
    return true;

  }
  else return false;

}

int main(){

  int n1,n2;
  cout<<"Enter first  and last number: ";
  cin>>n1>>n2;

  for(int num=n1; num<=n2; ++num){
    if(is_arm(num)){
      cout<<num<<" ";
    }
  }
}