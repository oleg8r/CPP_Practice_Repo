// File_Input_And_Output.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*This program reads information from the "Info.txt" file and writes it to a new file, so that each word starts on a new line 
and the word is preceded by its number (starting from 1).*/

#include <iostream>
#include <fstream>

int main()
{
    std::ifstream inf("Info.txt");   //Creating a flow object for reading
    if (!inf)
        std::cout << "The file couldn't be opened for reading." << std::endl;
    std::ofstream outf("Info2.txt");   //Creating a flow object for writing

    int count = 1;
    while (inf) {   //True until reaches end of file - EOF
        std::string strInput;
        inf >> strInput;
        std::cout << count << ". " << strInput << std::endl;
        std::cout << std::endl;
        outf << count << ". " << strInput << std::endl;
        count++;
    }

    return 0;
}


