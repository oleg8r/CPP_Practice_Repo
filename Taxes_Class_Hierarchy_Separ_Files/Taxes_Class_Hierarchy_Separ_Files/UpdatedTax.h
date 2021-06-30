#pragma once
//#include<iostream>
#include "Tax.h"
//using namespace std;

class UpdatedTax : public Tax
{
	// Task 1: Make the required function(s) (such as taxCalc) virtual in Tax class
	// Task 2: Add 2 more tax factors (taxRate_factor2, taxRate_factor3 in this class)
public:
	float taxRate_factor2 = 0.01;
	float taxRate_factor3 = 0.02;

	// Task 3: Redefine virtual function(s) in child class to incorporate all three tax factors
	virtual float taxCalc(float amount)
	{
		return (taxRate_factor1 * amount + taxRate_factor2 * amount + taxRate_factor3 * amount);
	}

};

