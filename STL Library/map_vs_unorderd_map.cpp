// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//  map<int,int> order;

//  order[5]=10;
//  order[2]=7;
//  order[9]=30;
//  order[20]=100;
//  order[1]=1;

// for (auto i = order.begin(); i != order.end(); i++) {
//         cout << i->first<< " : " << i->second << '\n';
//     }

// }

#include<bits/stdc++.h>
using namespace std;

int main(){
unordered_map<int,int> order;

 order[5]=10;
 order[2]=7;
 order[9]=30;
 order[20]=100;
 order[1]=1;

for (auto i = order.begin(); i != order.end(); i++) {
        cout << i->first<< " : " << i->second << '\n';
    }

}