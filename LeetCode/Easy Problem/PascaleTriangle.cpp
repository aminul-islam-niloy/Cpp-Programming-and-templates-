#include <iostream>
#include <vector>

std::vector<std::vector<int>> generatePascalTriangle(int numRows) {
    std::vector<std::vector<int>> triangle;
    
    if (numRows <= 0) {
        return triangle;
    }
    
    triangle.push_back({1}); // First row
    
    for (int i = 1; i < numRows; i++) {
        std::vector<int> row(i + 1, 1); // Initialize current row with 1s
        const std::vector<int>& prevRow = triangle[i - 1]; // Previous row
        
        for (int j = 1; j < i; j++) {
            row[j] = prevRow[j - 1] + prevRow[j]; // Calculate current row values
        }
        
        triangle.push_back(row); // Add current row to the triangle
    }
    
    return triangle;
}

void printPascalTriangle(const std::vector<std::vector<int>>& triangle) {
    for (const std::vector<int>& row : triangle) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int numRows = 5; // Change this value to generate a different number of rows
    
    std::vector<std::vector<int>> triangle = generatePascalTriangle(numRows);
    printPascalTriangle(triangle);
    
    return 0;
}
