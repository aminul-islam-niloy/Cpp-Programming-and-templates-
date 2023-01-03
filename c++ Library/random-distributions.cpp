//1.uniform_int_distribution



// #include<iostream>
// #include<random>
// using namespace std;

// int main(){
//     //trivial random generator engine
//      unsigned s=2;

//     default_random_engine generator(s);
//     uniform_int_distribution<int> distribution(1,20);

//     cout<<" Some random number between 1 and 10";
//     for(int i=0; i<20; i++){
//         cout<<distribution(generator);
//         cout<<endl;
//     }

// }



// C++ program to illustrate
// the use of reset
// in uniform_int_distribution
// #include <iostream>
// #include <random>
// using namespace std;
  
// //Driver program
// int main()
// {
          
//     //the random number generator
//     default_random_engine generator;
      
//     // Initialising the uniform distribution
//     uniform_int_distribution<int> distribution(1, 1000);
      
//     // First random number is generated
//     cout << distribution(generator) << endl;
      
//     //Resets the distribution
//     distribution.reset();
      
//     // Second random number is 
//     //generated independent of previous number
//     cout << distribution(generator) << endl;
      
//     return 0;
// }







//2.uniform_real_distribution

// C++ program to illustrate
// the use of reset
// in uniform_real_distribution
// #include <iostream>
// #include <random>
// using namespace std;

// // Driver program
// int main()
// {
// 	default_random_engine generator;
// 	uniform_real_distribution<double> distribution(0.0,100.0);
	
// 	// It prints two independent values:
// 	// First random number is generated
// 	cout << distribution(generator) << endl;
	
// 	//Resets the distribution
// 	distribution.reset();
	
// 	// Second random number is
// 	//generated independent of previous number
// 	cout << distribution(generator) << endl;
	
// 	return 0;
// }





// C++ program to illustrate
// the bernoulli_distribution
// #include <iostream>
// #include <random>
// using namespace std;

// //Driver program
// int main()
// {
// 	const int temp=500;
	
// 	//The random number generator
// 	default_random_engine generator;
	
// 	//Initialising the bernoulli distribution
// 	bernoulli_distribution distribution(0.7);
	
// 	// count number of trues
// 	int count=0;
	
// 	for (int i = 0; i < temp; ++i)
// 	{
		
// 		// checking for true condition
// 		if (distribution(generator))
// 		count++;
// 	}
	
// 	cout << "bernoulli_distribution (0.7) x 500:" << endl;
// 	cout << "true: " << count << endl;
// 	cout << "false: " << temp-count << endl;
	
// 	return 0;
// }



// C++ program to illustrate
// the use of binomial_distribution
// #include <iostream>
// #include <chrono>
// #include <random>
// using namespace std;

// int main()
// {
	
// 	// construct a trivial random
// 	//generator engine from a time-based seed:
// 	unsigned seed = chrono::system_clock::now().time_since_epoch().count();
// 	default_random_engine generator (seed);
	
// 	// Initialising binomial distribution
// 	binomial_distribution<int> distribution (15, 0.4);
	
// 	cout << "some binomial results (t=15, p=0.4): ";
// 	for (int i = 0; i < 15; ++i)
// 	{
			
// 		// Use of operator()
// 		cout << distribution(generator) << " ";
// 	}
// 	cout << endl;
	
// 	return 0;
// }


// C++ program to illustrate
//the use of geometric_distribution
// #include <iostream>
// #include <chrono>
// #include <string>
// #include <random>
// using namespace std;

// int main()
// {
// 	// construct a trivial random
// 	// generator engine from a time-based seed:
// 	int seed = chrono::system_clock::now().time_since_epoch().count();
// 	default_random_engine generator (seed);
	
// 	// Initialises the geometric distribution
// 	geometric_distribution<int> distribution (1.0 / 5);
	
// 	cout << "Plus sign is 5 spaces away from the next :" << endl;
// 	for (int i = 0; i < 10 ; ++i)
// 	{
// 		int number = distribution(generator);
// 		cout << string (number,' ') << "+";
// 	}

// return 0;
// }







   
