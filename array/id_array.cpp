#include<iostream>
using namespace std;
#define maxValue 50
#define counter 11
int main(){

    float value[maxValue];
    int i,low,high;
    int group[counter]= {0,0,0,0,0,0,0,0,0,0,0};

    for(int i=0; i<maxValue; i++){
        cin>>value[i];
        ++group[(int)(value[i])/10];
    }
    cout<<"\n";
    cout<<    "     Group    "<<"     Range    "<<"     Frequency    "<<endl;
    for(i=0; i<counter; i++){
        low=i*10;
        if(i==10){
            high=100;
        }
        else
        {
            high= low+9;
            cout<<"        "<< i+1<<"     " <<low<<"    " <<"to"<< "       "<<high <<"      "<<group[i]<<endl;
        }
    }

return 0;

}