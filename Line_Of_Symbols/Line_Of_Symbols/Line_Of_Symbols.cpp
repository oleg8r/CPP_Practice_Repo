// Line_Of_Symbols.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int symbNum = 0;
    char symbType = '.';
    int lineType = '.';
    int index = 0;

    std::cout << "Enter a number of symbols: \n";
    std::cin >> symbNum;
    std::cout << "Enter a symbol type: \n";
    std::cin >> symbType;
    std::cout << "Type 1 for a horizontal line or 2 for a vertical line: \n";
    std::cin >> lineType;
    std::cout << std::endl;

    if (lineType == 1)
        do {
            std::cout << symbType;
            index++;
        } while (index < symbNum);

    else if (lineType == 2)
        do {
            std::cout << symbType;
            std::cout << std::endl;
            index++;
        } while (index < symbNum);

    else std::cout << "Invalid value for a line type. \n";


    std::cout << "\n\n";

    return 0;
}

