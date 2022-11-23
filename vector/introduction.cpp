#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;

int main(){
    vector<int> g1;
    for(int i=1; i<=5; i++){
        g1.push_back(i);

    }
    cout<<"Output of the begain and the end : ";
    for(auto i=g1.begin(); i != g1.end(); i++) {
        cout<<*i<< " "  ;
          }

    cout<<"\n Output of cbegian and c end : ";
    for(auto i=g1.cbegin(); i!= g1.cend(); ++i)
    cout<<*i<<" ";

    cout<<"\n Output of rbegain and rend: ";
    for(auto ir= g1.rbegin(); ir != g1.rend(); ir++){
        cout<<*ir<<" ";
    }

    cout<<"\n Output of crbegain and crend: ";
    for(auto ir= g1.crbegin(); ir != g1.crend(); ir++){
        cout<<*ir<<" ";
    }
      

      cout<<" \n Size  : "<<g1.size();
      cout<<"\n Capicity: "<<g1.capacity();
      cout<<"\n Max size : "<<g1.max_size();

    //   g1.resize(4);

      cout<<"\n Size: "<<g1.size();

      if(g1.empty()==false){
        cout<<"\n Vector is not empty";
      }
      else
      cout<<" \n vector is empty";

      g1.shrink_to_fit();
      cout<<"\n Vector elements are: ";
      for(auto it=g1.begin(); it!= g1.end(); it++){
        cout<<*it<<" ";
      }




cout << "\nReference operator [g] : g1[2] = " << g1[2];
 
    cout << "\nat : g1.at(4) = " << g1.at(4);
 
    cout << "\nfront() : g1.front() = " << g1.front();
 
    cout << "\nback() : g1.back() = " << g1.back();
 
    int* pos = g1.data();
 
    cout << "\nThe first element is " << *pos;
 


          getch();

}