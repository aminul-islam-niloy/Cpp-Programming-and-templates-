// C++ program to find trace of a matrix by using std::slice
#include <iostream> // std::cout
#include <valarray> // std::valarray, std::slice
  
using namespace std;
  
int main()
{
    
    int row = 3, col = 3;
  
    std::valarray<int> matrix(row * col);
  
    // initialising matrix
    for (int i = 0; i < row * col; ++i)
        matrix[i] = i + 1;
  
    // using slice from start 0 with size as col and stride col+1
    std::valarray<int> diagonal = matrix[std::slice(0, col, col + 1)];
  
    // finding trace using diagonal we got using slice
    int index = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            std::cout << matrix[index++] << " "; // same as matrix[i][j]
        std::cout << endl;
    }
  
    int sum = 0; // initialising sum as 0
    // calculating trace of matrix
    for (int i = 0; i < diagonal.size(); i++)
        sum += diagonal[i];
        
    std::cout << "Trace of matrix is : ";
    std::cout << sum << endl; // sum is trace of matrix
    return 0;
}