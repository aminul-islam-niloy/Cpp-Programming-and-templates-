// CPP program to illustrate
// std::stod()
// #include <string>
// #include <iostream>

// int main(void)

// {
// 	std::string str = "y=4.4786754x+5.6";

// 	double y, x, a, b;
// 	y = 0;
// 	x = 0;

// 	// offset will be set to the length of
// 	// characters of the "value" - 1.
// 	std::size_t offset = 0;

// 	a = std::stod(&str[2], &offset);
// 	b = std::stod(&str[offset + 3]);

// 	std::cout << b;
// 	return 0;
// }


// CPP program to illustrate
//std::stod()
#include <iostream>
#include <string>
using namespace std;

int main()
{

	string b = "5.99c";
	double a = stod(b);
	int c = stoi(b);
	cout << b << " " << a << " " << c << endl;
}



// CPP program to illustrate
// std::stof()
// #include <iostream>
// #include <string>
// int main()
// {
// 	std::string str = "5000.5";
// 	float x = std::stof(str);
// 	std::cout << x;
// 	return 0;
// }
