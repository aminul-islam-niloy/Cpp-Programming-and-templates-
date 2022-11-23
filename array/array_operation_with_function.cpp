#include<stdio.h>
#include<iostream>

using namespace std;

int main()

{
    int array[100],i,j,n,findNum,pos,value,temp,choice,loop;

    
    cout<< " \n Enter aray size : ";
    cin>>n;
    cout<< " Enter array element :";
    for(i=0; i<n; i++){
        cin>> array[i];
    }
cout<<"\n";

    loop = 1;
    while(loop != 0){
    puts("Array operation: \n");
      puts("1 - Search");
      puts("2 - Delete");
      puts("3 - Sort");
      puts("0 - Exit");
      cout<< " \n";

      cout<< "Your choice: "<<endl;
      cin>>choice;
      cout<< "You've Choose for : "<<endl;

  switch(choice)
  {
        case 1:
            cout<< "1. search an array" << endl;

            cout<<"Enter a number to search: ";
            cin>>findNum;

            for(i=0; i<n; i++){
                if(array[i]==findNum)
                    break;
            }
            if(i<n){
            cout<<"\nElement found at index: "<< i <<endl;
            }
            else{
                cout<<"Element not found."<< endl;
            }


            break;

    case 2:

            cout<<"\nEnter the element position to delete : ";
            cin>>pos;
            if(pos < 0 || pos > n)
            {
            cout<<"Invalid position! Please enter position between 1 to "<<n << endl;
            }
            else
            {
                for(i=pos-1; i<n-1; i++)
                {
                    array[i] = array[i + 1];
                }
                n--;
            cout<< " array after deleting the value is: "<< endl;
                for(i=0;i<n;i++)
                {
                    cout<<array[i];
                }
                    break;

    case 3:

          cout<<"3. Sort the array : "<<endl;

            for(i=0; i<n-1; i++)
            {
                for(j=0; j<n-i-1; j++)
                {
                if(array[j]> array[j+1])
                {
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
                }
            }
           cout<<"\n array elements in ascending order: "<<endl;

                for(i=0; i<n; i++)
                {
                cout <<array[i] <<" " ;
                }
                cout<< " \n";

                break;
    case 0:

        loop = 0;

       default:

              cout<<" Wrong choice & exit"<<endl;
  }
  }
    }

  return(0);
}