#pragma once
//#include<iostream>
#include "Tax.h"
//using namespace std;

template<typename someType>	//Class Tamplate also means class member tamplates and method tamplates 
class UpdatedTax : public Tax<someType>
{
	// Task 1: Make the required function(s) (such as taxCalc) virtual in Tax class
	// Task 2: Add 2 more tax factors (taxRate_factor2, taxRate_factor3 in this class)
public:
	someType taxRate_factor2;
	someType taxRate_factor3;

public:
	UpdatedTax()// Default constructor to set values for taxRate_factor2 & taxRate_factor3
	{

		taxRate_factor2 = 2;
		taxRate_factor3 = 3;
	}

	// Task 3: Redefine virtual function(s) in child class to incorporate all three tax factors
	someType taxCalc(someType amount)
	{
		return (Tax::taxRate_factor1 * amount + taxRate_factor2 * amount + taxRate_factor3 * amount);
	}
};

