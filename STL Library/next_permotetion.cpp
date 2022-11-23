// #include<algorithm>
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]= {4,5,6,7};
//     sort(arr,arr+4);
//   cout<<" 4! possible permotation is "<<endl;
  
//   do{
//     cout<<arr[0]<<" "<<arr[1]<<" "<< arr[2]<<" "<<arr[3]<<" "<< "\n";

//   }
//   while(next_permutation(arr,arr+4));
    

//     cout<<"After loop : "<<arr[0]<<' '<<arr[1]<<' '<<arr[2]<<' '<<arr[3]<< ' '<<"\n";



// }




// prev permotation

#include <algorithm>
 
#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 1, 2, 3 };
 
    sort(arr, arr + 3);
    reverse(arr, arr + 3);
 
    cout << "The 3! possible permutations with 3 elements:\n";
    do {
        cout << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
    } while (prev_permutation(arr, arr + 3));
 
    cout << "After loop: " << arr[0] << ' ' << arr[1]
         << ' ' << arr[2] << '\n';
 
    return 0;
}