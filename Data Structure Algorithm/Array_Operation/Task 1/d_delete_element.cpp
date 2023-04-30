
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size for Array: ";
    cin>>n;

    int array[n], i, POS;

    cout<<"Enter "<<n<<" Array Elements: ";

    for(i=0; i<n; i++)
       {
         cin>>array[i];
       }

    cout<<"Enter Position ";
    cin>>POS;

   for (int i = POS; i < n - 1; i++) {
        array[i] = array[i + 1];
    }

    cout<<"\nThe New Array is:\n";
    for(i=0; i<n-1; i++)
        cout<<array[i]<<"  ";

    cout<<endl;
    return 0;
}


