// Sum_of_Int_Range.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int startVal, endVal, sumVal{ 0 };
    std::cout << "Please specify the integer range. Enter the beginning of an integer range and the end:\n";
    std::cin >> startVal >> endVal;

    do {

        if (startVal % 2 == 0) {
            sumVal = sumVal + startVal;
            startVal++;
        }
        else startVal++;
    }
    while (startVal <= endVal);

    std::cout << sumVal;
    return 0;
}

