// This program calculates the sum of all odd integers in the range of integers specified be a user.

#include <iostream>

int main()
{
    int startVal, endVal, sumVal{ 0 };
    std::cout << "Please specify the integer range. Enter the beginning of an integer range and the end:\n";
    std::cin >> startVal >> endVal;

    do {

        if (startVal % 2 != 0) {
            sumVal = sumVal + startVal;
            startVal++;
        }
        else startVal++;
    }
    while (startVal <= endVal);

    std::cout << sumVal;
    return 0;
}

