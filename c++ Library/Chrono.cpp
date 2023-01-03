// C++ program to illustrate the utility
// function duration::count

#include <iostream>
#include <chrono>	

int main ()
{
	using namespace std::chrono;
	// std::chrono::milliseconds is an
	// instantiation of std::chrono::duration:- 1 second
	milliseconds mil(1000);
	
	mil = mil*60;
	
	std::cout << "duration (in periods): ";
	std::cout << mil.count() << " milliseconds.\n";
	
	std::cout << "duration (in seconds): ";
	std::cout << (mil.count() * milliseconds::period::num /
							milliseconds::period::den);
	std::cout << " seconds.\n";

	return 0;
}
