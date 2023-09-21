#include <iostream>
#include <vector>

// Define a structure to represent a non-zero element in the sparse matrix
struct SparseElement
{
    int row;
    int col;
    int value;
};

// Function to convert a sparse matrix to a linear array
std::vector<int> sparseMatrixToLinearArray(const std::vector<std::vector<int>> &sparseMatrix)
{
    int numRows = sparseMatrix.size();
    int numCols = sparseMatrix[0].size();

    // Create a vector to store the non-zero elements of the sparse matrix
    std::vector<SparseElement> nonZeroElements;

    // Iterate through the sparse matrix to find non-zero elements
    for (int row = 0; row < numRows; ++row)
    {
        for (int col = 0; col < numCols; ++col)
        {
            int value = sparseMatrix[row][col];
            if (value != 0)
            {
                nonZeroElements.push_back({row, col, value});
            }
        }
    }

    // Create a linear array with zeros
    std::vector<int> linearArray(numRows * numCols, 0);

    // Populate the linear array with non-zero elements
    for (const SparseElement &element : nonZeroElements)
    {
        int index = element.row * numCols + element.col;
        linearArray[index] = element.value;
    }

    return linearArray;
}

int main()
{
    // Example sparse matrix
    std::vector<std::vector<int>> sparseMatrix = {
        {1, 0, 0},
        {0, 0, 2},
        {0, 3, 0}};

    // Convert the sparse matrix to a linear array
    std::vector<int> linearArray = sparseMatrixToLinearArray(sparseMatrix);

    // Print the linear array
    for (int value : linearArray)
    {
        std::cout << value << " ";
    }

    return 0;
}
