// Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Matrix 
{
public:
    int matrixSize = 0;
    int** array = 0;
public:
    Matrix() {
        //Default constructor
    };
    Matrix(int size) {
        matrixSize = size;
        array = 0;
    };
    ~Matrix() {
        //Destructor
        for (int i = 0; i < matrixSize; i++)
            delete[]array[i];
        delete[]array;
        matrixSize = 0;

    };
    void fCreateMatrix() {
        array = new int* [matrixSize];
        for (int i = 0; i < matrixSize; i++)
            array[i] = new int[matrixSize];
    };
    void fFillMatrix() {
        for (int i = 0; i < matrixSize; i++)
            for (int j = 0; j < matrixSize; j++)
                array[i][j] = rand() % 100 + 10;
    };
    void fPrintMatrix()
    {
        if (matrixSize == 0)
        {
            cout << "This Matrix doesn't exist or it was deleted." << endl;
        }
        else 
        {
            for (int i = 0; i < matrixSize; i++)
            {
                for (int j = 0; j < matrixSize; j++)
                    //std::cout << "array[" << i << "][" << j << "] = " << array[i][j] << std::endl;
                {
                    std::cout << array[i][j];
                    std::cout << " ";
                }

                std::cout << std::endl;

            }
        }
    }
};


int main()
{
    int matrixSize;
    cout << "Enter the size of the new matrix: " << endl;
    cin >> matrixSize;
    Matrix objArray(matrixSize);
    objArray.fCreateMatrix();
    objArray.fFillMatrix();
    objArray.fPrintMatrix();
    objArray.~Matrix();
    objArray.fPrintMatrix();
    return 0;
};
