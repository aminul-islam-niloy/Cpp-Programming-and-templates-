#include<iostream>
using namespace std;
int main()
{

   int array[100],i,j,temp;
   int n=sizeof(array)/sizeof(array[0]);

   cout<<"Enter array size :";
   cin>>n;

   cout<< " Enter " <<n<< " element : "<< endl;

   for(i=0;i<n;i++)
    {
      cout<< i << " number = ";
      cin>> array[i];

   }
    cout<< "Print unsorted list:  " << endl;

    for(i=0;i<n;i++)
    {
        cout<< array[i] << " ";
    }

   for(i=0;i<n-1;i++)
   {
       for(j=0;j<n-i-1;j++)
       {
           if(array[j]>array[j+1])
           {
               temp=array[j];
               array[j]=array[j+1];
               array[j+1]=temp;
           }
       }
   }
cout<<"\n Print sorted list : " << endl;

    for(i=0;i<n;i++)
    {
      cout<< array[i] << " ";
    }
    return 0;
}