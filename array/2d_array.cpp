#include<iostream>
using namespace std;
int main(){

    int num[2][3],i,j,n, row,col;
    cout<< " Enter array element : " << endl; 

    for(row = 0; row< 2; row++ )
    {
        for (col=0; col<3; col++)
        {      
            cout<< " num ["<< row <<"] ["<< col<< " ] = ";
                cin>> num[row][col];
        }
        
    }

    cout<< endl;
    cout<< " Result array is : "<< endl;

    for( row=0; row<2; row++){
        for(col=0; col<3; col++){
            cout<< num[row][col]<< " ";
        }
        cout<< endl;
    }
return 0;
}