#include<iostream>
using namespace std;

int main(){

    #ifndef RUN
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

  int n;
  cin>>n;
  int num;
  cin>>num;



    // print last paramid

        //              * 
        //           *  * 
        //        *  *  * 
        //     *  *  *  * 
        //  *  *  *  *  * 

//    for(int i=1; i<=n; i++)
//    {
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

//half pyramid number:

        // 1 
        // 2 2 
        // 3 3 3 
        // 4 4 4 4 
        // 5 5 5 5 5 

// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }



// number count print 
            // 1  
            // 2  3  
            // 4  5  6  
            // 7  8  9  10  
            // 11  12  13  14  15  

// int count=1;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         cout<<count<<"  ";
//         count ++;
//     }
//     cout<<endl;
// }



//half star pyramid
        // * 
        // * * 
        // * * * 
        // * * * * 
        // * * * * * 

// for(int i=1; i<=n; i++)
// {
//     for(int j=1; j<=i; j++)
//     {
//          cout<<"*"<<" ";
        
//     }
//     cout<<endl;
// }



//dual half pyramid 

        // *                 * 
        // * *             * * 
        // * * *         * * * 
        // * * * *     * * * * 
        // * * * * * * * * * * 

// for(int i=1; i<=n; i++)
// {
//     for(int j=1; j<=i; j++)
//     {
//         cout<<"*"<<" ";
//     }

//     int space = 2*n-2*i;
//     for(int j=1; j<=space; j++)
//     {
//         cout<<"  ";
//     }

//      for(int j=1; j<=i; j++)
//      {
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }


  
 //Right half pyramid pyramid draw
                // * 
                // * * 
                // * * * 
                // * * * * 
                // * * * * * 
                // * * * * 
                // * * * 
                // * * 
                // *   
                      
    // for (int i = 1; i <= 2 * n - 1; i++) {
    //     // Determine whether to print the upper or lower pattern
    //     int numStars;
    //     if (i <= n) 
    //     {
    //         numStars = i;
    //     } else {
    //         numStars = 2 * n - i;
    //     }

    //     // Print stars
    //     for (int j = 1; j <= numStars; j++) {
    //         cout << "*"<<" ";
    //     }

    //     cout << endl;
    // }


// decreasing number

            // 1 2 3 4 5 
            // 1 2 3 4 
            // 1 2 3 
            // 1 2 
            // 1 


//   for(int i=1; i<=num; i++)
//   {
//         for(int j=1; j<=num+1-i; j++)
//             {
//                  cout<<j<<" ";
//             }
//         cout<<endl;
//    }


//binary half pyramid 

            // 1 
            // 0 1 
            // 1 0 1 
            // 0 1 0 1 
            // 1 0 1 0 1 

// int count;
// for(int i=1; i<=num; i++)
// {
//     for(int j=1; j<=i; j++)
//     {
//         count= i+j;
//         if(count%2==0)
//         {
//             cout<<"1"<<" ";
//         }
//         else{
//             cout<<"0"<<" ";
//         }
//     }
//     cout<<endl;
// }


//rhombus is a parallelogram

        //         * * * * * 
        //       * * * * * 
        //     * * * * * 
        //   * * * * * 
        // * * * * * 

// for(int i=1; i<=num; i++)
// {
//     for(int j=1; j<=num-i;j++)
//     {
       
//         cout<<"  ";
//     }
//     for(int k=1; k<=num; k++)
//     {
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }


// print number pyramid

        //         1 
        //       2 1 2 
        //     3 2 1 2 3 
        //   4 3 2 1 2 3 4 
        // 5 4 3 2 1 2 3 4 5 


// for(int i=1; i<=num; i++)
//     { int j;
//         for( j=1; j<=num-i;j++)
//             {
//                 cout<<"  ";     
//             }   

//         int k=i;

//         for( ;j<=num;j++)
//             {
//                 cout<<k--<<" ";
//             } 

//            k=2;
//             for( ;j<=num+i-1;j++)
//             {
//               cout<<k++<<" ";
//             }  
//         cout<<endl;
//     }


//mirror Pyramid

//diamond pyramid 
                 //        * 
                //       * * * 
                //     * * * * * 
                //   * * * * * * * 
                // * * * * * * * * * 
                //   * * * * * * * 
                //     * * * * * 
                //       * * * 
                //         * 


// for(int i=1; i<=num; i++)
//      {
//         for(int j=1; j<=num-i; j++){
//                 cout<<"  ";
//         }
//         for(int j=1; j<=(2*i)-1; j++){
//                 cout<<"*"<<" ";
//         }

//        cout<<endl;
// }

// for(int i=num-1; i>=1; i--)
//      {
//         for(int j=1; j<=num-i; j++){
//                 cout<<"  ";
//         }
//         for(int j=1; j<=(2*i)-1; j++){
//                 cout<<"*"<<" ";
//         }

//        cout<<endl;
// }


                //       1  
                //    2  3  4  
                // 5  6  7  8  9  
                //  10  11  12  
                  //    13  


// int count =1;
// for(int i=1; i<=num; i++)
// { int j;
//         for(j=1; j<=num-i; j++ ){
//                 cout<<"   ";
//         }
//         for(int j=1; j<=2*i-1; j++)
//         {
//           cout<<count<<"  ";
//           count++;
//         }
//         cout<<endl;
// }


// for(int i=num-1; i>=1; i--)

//         { int j;
//                 for(j=1; j<=num-i; j++ )
//                 {
//                         cout<<"  ";
//                 }
//                 for(int j=1; j<=2*i-1; j++)
//                 {
//                         cout<<count<<"  ";
//                         count++;
//                 }
//                 cout<<endl;
// }



//zigzag line 
                //   *   *   *   *   *
                //  * * * * * * * * * 
                // *   *   *   *   *  


// for(int i=1; i<=3; i++)
//     {
//         for(int j=1; j<=num; j++)
//         {
//                 if((i+j)%4==0 || (i==2 && j %4==0))
//                 {
//                         cout<<"*";
//                 }
//                 else{
//                         cout<<" ";
//                 }
//         }
//         cout<<endl;
// }


                        // * * * * * 
                        // * * * * 
                        // * * * 
                        // * * 
                        // * 


        // for(int i=num; i>=1; i--)
        //  {
        // for(int j=1; j<=i; j++){
        //         cout<<"*"<<" ";
        // }
        // cout<<endl;
        // }

//square

                        // * * * * * 
                        // * * * * * 
                        // * * * * * 
                        // * * * * * 
                        // * * * * * 

// for(int i=1; i<=num; i++){
//         for(int j=1; j<=num; j++){
//                 cout<<"*"<<" ";
//         }
//         cout<<endl;
// }

int row,col;
cin>>row>>col;


                        // ****
                        // *  *
                        // *  *
                        // *  *
                        // ****


// for(int i=1; i<=row; i++)
// {
//         for(int j=1; j<=col; j++)
//         {
//                if(i==1|| i==row || j==1||j==col)
//                {
//                 cout<<"*";
//                }
//                else
//                {
//                 cout<<" ";
//                }
//         }
//       cout<<endl;  
// }


//holla traingle 

                // * 
                // * * 
                // *   * 
                // *     * 
                // * * * * * 

// for(int i=1; i<=num; i++)
// {
//         for(int j=1; j<=i; j++)
//         {
//                 if(i==1 || i==j ||j==1|| i==num|| j==num)
//                 {
//                          cout<<"*"<<" ";
//                 }
             
//                 else{
//                      cout<<"  ";     
//                 }
               
//         }
//         cout<<endl;
// }


//Hollow pyramid
                //         * 
                //       *   * 
                //     *       * 
                //   *           * 
                // * * * * * * * * * 


// for(int i=1; i<=num; i++){
//         for(int j=1; j<=num-i; j++){
//                 cout<<"  ";
//         }
//         for(int j=1; j<=(2*i)-1; j++)
//         {
//                if(i==num|| j==1||j==1||j==(2*i-1))
//                {
//                 cout<<"*"<<" ";
//                }
//                else {
//                 cout<<"  ";
//                }
//         }
//         cout<<endl;
// }



//hollo diamond
                //         * 
                //       *   * 
                //     *       * 
                //   *           * 
                // *               * 
                //   *           * 
                //     *       * 
                //       *   * 
                //         * 


// for(int i=1; i<=num; i++){
//         for(int j=1; j<=num-i; j++){
//                 cout<<"  ";
//         }
//         for(int j=1; j<=(2*i)-1; j++)
//         {
//                if( j==1||j==1||j==(2*i-1))
//                {
//                 cout<<"*"<<" ";
//                }
//                else {
//                 cout<<"  ";
//                }
//         }
//         cout<<endl;
// }


// for(int i=num-1; i>=1; i--)
// {
//         for(int j=1; j<=num-i; j++){
//                 cout<<"  ";
//         }
//         for(int j=1; j<=(2*i)-1; j++)
//         {
//                if( j==1||j==1||j==(2*i-1))
//                {
//                 cout<<"*"<<" ";
//                }
//                else {
//                 cout<<"  ";
//                }
//         }
//         cout<<endl;
// }



//plus               *  
                //   *  
                // *****
                //   *  
                //   * 
        // for(int i=0; i<num; i++)
        //   {
        //         for(int j=0; j<num; j++){
        //                 if(i== num/2 ||j==num/2){
        //                         cout<<"*";
        //                 }
        //                 else {
        //                         cout<<" ";
        //                 }
        //         }
        //         cout<<endl;
        //  }

        //cros 
                // *       * 
                //   *   *   
                //     *     
                //   *   *   
                // *       * 


 for(int i=0; i<num; i++)
          {
                for(int j=0; j<num; j++){
                        if(i==j|| j==num-1-i){
                                cout<<"*"<<" ";
                        }
                        else {
                                cout<<"  ";
                        }
                }
                cout<<endl;
         }





}