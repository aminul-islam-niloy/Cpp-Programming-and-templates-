// #include<iostream>
// using namespace std;
// #include<ratio>

// int main(){
//     typedef ratio<5,4> ratio1;
//     typedef ratio<3,4> ratio2;

//     typedef ratio_add<ratio1, ratio2>sum;
//     typedef ratio_subtract<ratio1, ratio2>diff;
//     typedef ratio_multiply<ratio1,ratio2>prod;
//     typedef ratio_divide<ratio1,ratio2>div;


//     cout<<"The sum of ratio is : ";
//     cout<<sum::num<<"/"<<sum::den<<endl;
//      cout<<"The Differencer of ratio is : ";
//     cout<<diff::num<<"/"<<diff::den<<endl;

//     // printing product of ratios
//     cout << "The product of ratios is : ";
//     cout << prod::num << "/" << prod::den;
//     cout << endl;
 
//     // printing division of ratios
//     cout << "The division of ratios is : ";
//     cout << div::num << "/" << div::den;
//     cout << endl;

//     return 0;
// }



// C++ code to demonstrate the working of
// ratio_equal and ratio_not_equal
#include <iostream>
#include <ratio> // for ratio manipulation
using namespace std;

int main()
{
	// Declaring ratios
	typedef ratio<10, 100> ratio1;
	typedef ratio<1, 10> ratio2;

	// Checking if ratios are equal using ratio_equal
	ratio_equal<ratio1, ratio2>::value
		? cout << "Ratios are equal"
		: cout << "Ratios are not equal";
	cout << endl;

	//Checking if ratios are not equal using
	//ratio_not_equal
	ratio_not_equal<ratio1, ratio2>::value
		? cout << "Ratios are not equal"
		: cout << "Ratios are equal";


    // Checking if ratio1 is greater or equal than ratio2
    // using ratio_greater_equal
    ratio_greater_equal<ratio1, ratio2>::value
        ? cout << "ratio1 is greater or equal than ratio2"
        : cout << "ratio1 is not greater or equal than "
                  "ratio2";
    cout << endl;
 
    // Checking if ratio1 is less or equal than ratio2
    // using ratio_less_equal
    ratio_less_equal<ratio1, ratio2>::value
        ? cout << "ratio1 is less or equal than ratio2"
        : cout << "ratio1 is not less or equal than ratio2";
    cout << endl;

	return 0;

    
}
