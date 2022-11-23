#include<iostream>
using namespace std;

void fun(int (&p)[7]){
    cout<<sizeof(p)<<endl;
}
void Decay(int *p){
    cout<<sizeof(p)<<endl;
}

int main(){
    int a[7]={1,2,3,4,5,6,7};
    cout<<sizeof(a)<<endl;
    fun(a);
    Decay(a);


}