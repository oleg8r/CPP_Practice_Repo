// Practice__Sum_Mult_Avg_3_Varibles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double a, b, c;
    std::cout << "Enter 3 numbers: " << std::endl;
    std::cin >> a >> b >> c;
    std::cout << std::endl;; //To insert a line gap

    std::cout << "Sum of a, b and c is: " << a + b + c << std::endl;;
    std::cout << "Multiplication of a, b and c is: " << a * b * c << std::endl;;
    std::cout << "Average of a, b and c is: " << (a + b + c)/3 << std::endl;;

    std::cout << std::endl;; //To insert a line gap
    system("pause");    //To prevent the console window from instant closing when opening EXE-file.
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
