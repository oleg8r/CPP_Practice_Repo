// Random_File_Input_and_Output.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*This program reads information from the "Info.txt" file and writes it to a new file, so that each word starts on a new line
and the word is preceded by its number (starting from 1).*/

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
    vector<string> vectVar;
    string strVar;

    ifstream inf("Info.txt");   //Creating a flow object for reading
    if (!inf)
        cout << "The file couldn't be opened for reading." << std::endl;

    while (inf)
    {
        inf >> strVar;
        vectVar.push_back(strVar);
    }

    ofstream out("Info.txt");   //Re-writing the file

    for (int i = 0; i < vectVar.size() - 1; i++)
    {
        string strInput = vectVar[i];

        for (int j = 0; j < strInput.size(); j++)
            if (isdigit(strInput[j]))
            {
                strInput[j] = '*';
            }
        out << strInput << " ";
    }

    return 0;
}