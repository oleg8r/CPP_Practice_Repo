#pragma once
//#include<iostream>
#include "UpdatedTax.h"
//using namespace std;

class CustomizedTax : public UpdatedTax
{
public:
	// Task 4: Add 2 regions (region1, region2)
	int region1, region2;

	CustomizedTax(int regionCh)
	{
		if (regionCh == 1)
		{
			region1 = 1;
			region2 = 0;
		}
		else
		{
			region1 = 0;
			region2 = 1;
		}
	};

    // Task 5: Redefine the relevant virtual function in this class to incorporate the tax factors based on regions 
	virtual float taxCalc(float amount)
	{
		if (region1)
			return (taxRate_factor2 * amount);
		else if (region2)
			return (taxRate_factor3 * amount);
		else
			cout << "Invalid region";
	}

};
