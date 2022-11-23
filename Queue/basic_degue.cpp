
// #include <deque>
// #include <iostream>
// using namespace std;

// int main()
// {
//     int sum=0;
// 	deque<int> mydeque{2,6,8,3,4,7};
 
//     while (!mydeque.empty()) {
//         sum = sum + mydeque.front();
//         mydeque.pop_front();
//     }
//     cout << sum;
	
// 	// if (mydeque.empty()) {
// 	// 	cout << "True";
// 	// }
// 	// else {
// 	// 	cout << "False";
// 	// }
// 	return 0;
// }


// #include <deque>
// #include <iostream>
// using namespace std;
 
// int main()
// {
//     int sum = 0;
//     deque<int> mydeque;
//     mydeque.push_back(1);
//     mydeque.push_back(8);
//     mydeque.push_back(3);
//     mydeque.push_back(6);
//     mydeque.push_back(2);
 
//     while (mydeque.size() > 0) {
//         sum = sum + mydeque.front();
//         mydeque.pop_front();
//     }
//     cout << sum;
//     return 0;
// }

// #include <deque>
// #include <iostream>
// using namespace std;
// int main()
// {
//     deque<int> mydeque;
//     mydeque.push_back(2);
//     mydeque.push_back(7);
//     mydeque.push_back(6);
//     mydeque.push_back(5);
//     mydeque.push_back(4);
//     mydeque.push_back(3);
//     mydeque.push_back(2);
//     mydeque.push_back(100);
 
//     if (mydeque.front() > mydeque.back()) {
//         cout << mydeque.front() - mydeque.back();
//     }
//     else if (mydeque.front() < mydeque.back()) {
//         cout << mydeque.back() - mydeque.front();
//     }
//     else
//         cout << "0";
 
//     return 0;
// }


// #include<iostream>
// #include<deque>
// #include<iterator>
// using namespace std;

// int main(){
//     deque<int>mydeque{2,5,6,7,8,12};
//     deque<int>::iterator it1, it2;
 
//     it1 = mydeque.begin();
//     it2 = mydeque.end();
//     it2--;
     
//     it2--;


 
//     mydeque.erase(it1, it2);
    
//     cout<<"\n";

//     for(int &x:mydeque){
//         cout<<x<<" ";
//     }

// }

// CPP program to illustrate
// Application of erase() function

#include <deque>
#include <iostream>
using namespace std;

int main()
{
	deque<int> mydeque{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int>::iterator i;
	
    i = mydeque.begin();
	while (i != mydeque.end()) {
		if (*i % 2 == 0)	
			mydeque.erase(i);
		i++;	
	}

	for (auto it = mydeque.begin(); it != mydeque.end(); ++it)
		cout << ' ' << *it;
	return 0;
}
