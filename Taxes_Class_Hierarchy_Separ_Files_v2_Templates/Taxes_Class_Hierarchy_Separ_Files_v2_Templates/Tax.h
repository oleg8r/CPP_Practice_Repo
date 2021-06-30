#pragma once
#include<iostream>
using namespace std;

template<typename someType>	//Class Tamplate also means class member tamplates and method tamplates 
class Tax
{
public:

    someType taxRate_factor1;


    Tax() //:taxRate_factor1(2)
    {
        taxRate_factor1 = 1;
        //cout << "Default Tax Rate applies" << endl;
    }

    Tax(someType tr)
    {
        taxRate_factor1 = tr;
    }

    someType taxCalc(someType amount)
    {
        return taxRate_factor1 * amount;
    }

    someType amountAfterTax(someType amount)
    {
        return (amount - taxCalc(amount));
    }

};

