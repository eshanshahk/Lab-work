#include <iostream>
using namespace std;

class Matrix
{
    int mat[2][2];

public:
    // Constructor to initialize matrix elements
    Matrix()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                mat[i][j] = 0;
            }
        }
    }

    // Function to input matrix elements
    void inputMatrix()
    {
        cout << "Enter 4 elements of the matrix (2x2):\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> mat[i][j];
            }
        }
    }

    // Overloading + operator to add two matrices
    Matrix operator+(Matrix m)
    {
        Matrix temp;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
            }
        }
        return temp;
    }

    // Function to display the matrix
    void displayMatrix()
    {
        cout << "Matrix:\n";
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Matrix m1, m2, m3;

    cout << "Enter first matrix:\n";
    m1.inputMatrix();

    cout << "Enter second matrix:\n";
    m2.inputMatrix();

    m3 = m1 + m2; // Using overloaded + operator

    cout << "Sum of matrices:\n";
    m3.displayMatrix();

    return 0;
}
