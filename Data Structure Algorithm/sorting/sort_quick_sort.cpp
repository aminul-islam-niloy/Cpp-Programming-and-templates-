#include<iostream>
using namespace std;

int partiton(int arr[], int start, int end){
    int pivot = arr[start];
    int count=0;

    for(int i=start+1; i<=end; i++){
        if(arr[i] <=pivot)
        count++;
    }

    int pivotIndex= start+count;
    swap(arr[pivotIndex],arr[start]);

    int i=start,j=end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while (arr[i]>pivot)
        {
            j--;
        }
        
        if(i<pivotIndex && j>pivot ){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}


void quicksort(int arr[], int start,int  end){
   
   if(start>=end)
   return;
   int p=partiton(arr,start,end);
   quicksort(arr,start,p-1);
   quicksort(arr,p+1,end);
}

int main(){
    int array[50],i,n;
    cout<<"Eter array size : ";
    cin>>n;

    cout<<"Enter array element: "<<endl;
    for(i=0; i<n; i++){
        cout<<i<<" element is = ";
        cin>>array[i];
    }
    cout<<"\n";
    cout<<"element before sorting:";
    for(i=0; i<n; i++){
        cout<<array[i]<<" ";
    }

    quicksort(array,0,n-1);

    cout<<"\n";

    cout<<"element after sorting:";
    for(i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
       cout<<"\n";


}