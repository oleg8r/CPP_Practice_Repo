#pragma once
//#include<iostream>
#include "UpdatedTax.h"
//using namespace std;

template<typename someType>	//Class Tamplate also means class member tamplates and method tamplates 
class CustomizedTax : public UpdatedTax<someType>
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
	someType taxCalc(someType amount)
	{
		if (region1)
			return ((UpdatedTax<someType>::taxRate_factor2 * amount) / 100);
		else if (region2)
			return ((UpdatedTax<someType>::taxRate_factor3 * amount) / 100);
		else
			cout << "Invalid region";
	}
};
