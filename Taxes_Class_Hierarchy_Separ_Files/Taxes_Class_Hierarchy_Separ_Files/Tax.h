#pragma once
#include<iostream>
using namespace std;

class Tax
{
public:
    float taxRate_factor1;


    Tax() :taxRate_factor1(2)
    {
        cout << "Default Tax Rate applies" << endl;
    }
    Tax(float tr)
    {
        taxRate_factor1 = tr;
    }

    virtual float taxCalc(float amount)
    {
        return taxRate_factor1 * amount;
    }

    float amountAfterTax(float amount)
    {
        return (amount - taxCalc(amount));
    }

};

