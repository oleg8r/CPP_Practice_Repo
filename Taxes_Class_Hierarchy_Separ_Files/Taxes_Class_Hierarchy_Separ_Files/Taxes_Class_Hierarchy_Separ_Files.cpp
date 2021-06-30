/*============================================================
|
| File Name: Taxes_Class_Hierarchy_Separ_Files.cpp
| Purpose: To calculate taxes.
| Documentation: A Tax calculation program. There are three classes:
|   Tax, UpdatedTax and CustomizedTax. There are header files (.h)
|   for each class containing class declaration and definition.
|   There is one (.cpp) file for main function to test the program.
|
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2021-06-28         Oleg Savelev          created
|
|============================================================*/

#include <iostream>
//#include "Tax.h"
//#include "UpdatedTax.h"
#include "CustomizedTax.h"


int main()
{
    //Task 6, create the object of CustomizedTax class to test your program, Add menu inside loop to ask for options.
    
    int regionChoice;
    float amountV;
    bool continueV = true;
    char answerV;

    while (continueV)
    {
        cout << "Enter 1 for Region 1 or 2 for Region 2: " << endl;
        cin >> regionChoice;
        CustomizedTax taxObj(regionChoice);
        cout << "Enter your amount: " << endl;
        cin >> amountV;
        cout << taxObj.taxCalc(amountV) << endl;
        cout << "Do you want to continue? (y/n): " << endl;
        cin >> answerV;
        if (answerV != 'y')
            continueV = false;
    };

    //Task 7 (optional): Convert your application as templated application 
    return 0;
}

