
//m.find() to find a key on the map

// #include<bits/stdc++.h>
// using namespace std;

// string chack_Key(map<int,int> m, int key){
//     if(m.find(key) == m.end())
//     {
//           return " Not present";
//     }
      
//     else
//     {
//         return " Present";      
//     }
       
// }


// int main (){
//     map<int, int> m;
//     m[1]=4;
//     m[2]=6;
//     m[4]=6;

//     int chack1= 5, chack2= 4;
//     cout<<chack1<<" : "<<chack_Key(m, chack1)<<endl;
//     cout<<chack2<<" : "<<chack_Key(m, chack2);
// }



// for unorderd map to find the key

#include<bits/stdc++.h>
using namespace std;

string chack_Key(unordered_map <int,int> m, int key){
    if(m.find(key) == m.end())
    {
          return " Not present";
    }
      
    else
    {
        return " Present";      
    }
       
}


int main (){
    unordered_map<int, int> m;
    m[1]=4;
    m[2]=6;
    m[4]=6;

    int chack1= 5, chack2= 4;
    cout<<chack1<<" : "<<chack_Key(m, chack1)<<endl;
    cout<<chack2<<" : "<<chack_Key(m, chack2);
}
