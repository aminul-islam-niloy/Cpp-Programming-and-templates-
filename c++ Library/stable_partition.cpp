
#include <algorithm>
#include <iostream>
#include <vector>

void push_zeros_to_end(std::vector<int>& arr)
{
std::stable_partition(arr.begin(),arr.end(),[](int n) 
        { return n != 0; });
}

int main()
{
std::vector<int> arr{1,9,8,4,0,0,2,7,0,6,0,9};
	
push_zeros_to_end(arr);
	
for(const auto& i : arr)
	std::cout << i << ' ';

std::cout << "\n";

return 0;
}


// # Python Program to move all zeros to the end
// A = [5, 6, 0, 4, 6, 0, 9, 0, 8]
// n = len(A)
// j = 0
// for i in range(n):
// 	if A[i] != 0:
// 		A[j], A[i] = A[i], A[j] # Partitioning the array
// 		j += 1
// print(A) # Print the array
