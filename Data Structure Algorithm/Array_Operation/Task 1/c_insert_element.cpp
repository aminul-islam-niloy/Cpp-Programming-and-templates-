
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size for Array: ";
    cin>>n;

    int array[n], i, ELEM, POS;

   

    cout<<"Enter "<<n<<" Array Elements: ";

    for(i=0; i<n; i++)
       {
         cin>>array[i];
       }


    cout<<"\nEnter Element to Insert: ";
    cin>>ELEM;
    cout<<"At What Position ? ";
    cin>>POS;

    for(i=n; i>=POS; i--)
        array[i] = array[i-1];
        array[i] = ELEM;
        n++;

    cout<<"\nThe New Array is:\n";
    for(i=0; i<n; i++)
        cout<<array[i]<<"  ";

    cout<<endl;
    return 0;
}


