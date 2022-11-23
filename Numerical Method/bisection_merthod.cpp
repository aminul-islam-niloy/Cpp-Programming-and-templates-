#include<iostream>
#include<iomanip>
#include<math.h>

/*
 Defining equation to be solved.
 Change this equation to solve another problem.
*/

#define f(x) cos(x) - x * exp(x)

using namespace std;

int main()
{
	 /* Declaring required variables */
	 float x0, x1, x, f0, f1, f, e;
	 int step = 1;

	 /* Setting precision and writing floating point values in fixed-point notation. */
     cout<< setprecision(6)<< fixed;

	 /* Inputs */
	 up:
	 cout<<"Enter first guess: ";
     cin>>x0;
     cout<<"Enter second guess: ";
     cin>>x1;
     cout<<"Enter tolerable error: ";
     cin>>e;

	 /* Calculating Functional Value */
	 f0 = f(x0);
	 f1 = f(x1);

	 /* Checking whether given guesses brackets the root or not. */
	 if( f0 * f1 > 0.0)
	 {
		  cout<<"Incorrect Initial Guesses."<< endl;
		  goto up;
	 }
   /* Implementing Bisection Method */
     cout<< endl<<"****************"<< endl;
	 cout<<"Bisection Method"<< endl;
	 cout<<"****************"<< endl;
	 do 
	 {
		  /* Bisecting Interval */
		  x = (x0 + x1)/2;
		  f = f(x);

		  cout<<"Iteration-"<< step<<":\t x = "<< setw(10)<< x <<" and f(x) = "<< setw(10)<< f(x)<< endl;

		  if( f0 * f < 0)
		  {
			   x1 = x;
		  }
		  else
		  {
			   x0 = x;
		  }
		  step = step + 1;
		  
	 }   while(fabs(f)>e);

	 cout<< endl<<" Root is: "<<  x<< endl;

	 return 0;
}