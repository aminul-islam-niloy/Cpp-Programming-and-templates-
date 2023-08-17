#include<iostream>
using namespace std;

int main()
{
    #ifndef RUN
      freopen("input.txt","r", stdin);
      freopen("output.txt","w",stdout);
    #endif 

int n;
cin>>n;
  
//   int row, col;
//   cin>>row>>col;

//rectanglr draw
//   for(int i=1; i<=row; i++)
//   {
//     for(int j=1; j<=col;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//   }


// ractangle with middle square space
// for(int i=1; i<= row; i++){
//     for(int j=1; j<=col; j++)
//     {
//        if(i==1|| i==row|| j==1||j==col)
//        {
//         cout<<"*";
//        }

//        else {
          
//             cout<<" ";
//             } 
      
//     }
//      cout<<endl;
// }



//pyramid draw

//   for(int i=1; i<=row; i++)
//   {
//     for(int j=i; j<=col;j++){
//         cout<<"*";
//     }
//     cout<<endl;
    
//   }



// for(int i=1; i<=n; ++i){
//     for(int j=1; j<=i; j++){
//      cout<<"*";
//     }
//     cout<<endl;
// }


// for(int i=n; i>=1; i--)
// {
//     for(int j=1; j<=i; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// full pyramid draw

    // for (int i = 1; i <= 2 * n - 1; i++) {
    //     // Determine whether to print the upper or lower pattern
    //     int numStars;
    //     if (i <= n) {
    //         numStars = i;
    //     } else {
    //         numStars = 2 * n - i;
    //     }

    //     // Print stars
    //     for (int j = 1; j <= numStars; j++) {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }



    // print last paramid
//    for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++)
//     {
//         if(j<=n-i)
//         {
//             cout<<"   ";
//         }
//         else{
//             cout<<" * ";
//         }
//     }
//     cout<<endl;
//    }

// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         cout<<i;
//     }
//     cout<<endl;
// }

// int count=1;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         cout<<count;
//         count ++;
//     }
//     cout<<endl;
// }



// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         if(i==i){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }



// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         cout<<"*";
//     }

//     int space = 2*n-2*i;
//     for(int j=1; j<=space; j++){
//         cout<<" ";
//     }

//      for(int j=1; j<=i; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }




    return 0;
}



