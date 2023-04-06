// c++ program concept implementation of stake using array

#include<bits/stdc++.h>
using namespace std;

class stake
{
    private:
        int top;
        int arr[10];

    public:
        stake()         // constructor create
        {
            top=-1;      //initially stake is empty
            for(int i=0; i<10; i++){
                arr[i]=0; // all element is set 0 that's means empty
            }
        }

    void push(int val)
        {
            if(top==10){
                cout<<"Stake overflow"<<endl;
            }
            else{
                top++;       
                arr[top]= val;      //set value is stake array
            }
        }

    int pop()
        {
            if(top==-1)
            {
                cout<<"Stake is empty "<<endl;
            }
            

                int newVal= arr[top];  //present stake value

                arr[top]=0;         //set 0 or remove  value is stake array
                top --;
            
            return newVal;
        }


    void print()
        {   
            cout<<endl; 
            cout<< "Stake elemet are: "<<endl;
            

            for(int i=10; i>= 0; i--)
            {
                cout<<arr[i]<<" ";
            }
        }

};



int main(){

    stake s1;    //object create
    s1.print(); 

    s1.push(11);  //push on stake
    s1.push(22);
    s1.push(33);

    s1.print();

    s1.pop();     // pop from stake top element
    s1.print();


}