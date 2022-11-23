#include<iostream>
#include<iterator>
#include<list>
#include<conio.h>

using namespace std;

void showlist(list<int> l){
    list<int> :: iterator it;
    for(it=l.begin(); it != l.end(); it++){
        cout<<" "<<*it;
        
    }
    cout<<"\n";
}

int main(){

    list<int> list1,list2;
    for(int i=1; i<=10; ++i){
        list1.push_back(i*2);
        list2.push_back(i*3);
    }

    cout<<" List 1 is : ";
    showlist(list1);
   cout<<"\n";
    cout<<" List 2 is : ";
    showlist(list2);

    cout<<" Pop font 1 from last : ";
    list1.pop_front();
    showlist(list1);

cout<<" Pop  end from list 2: ";
    list2.pop_back();
    showlist(list2);

    cout<<" Reverse  list 1 : ";
    list1.reverse();
    showlist(list1);

    cout<<" Sort list 2: ";
    list2.sort();
    showlist(list2);

    getch();

}