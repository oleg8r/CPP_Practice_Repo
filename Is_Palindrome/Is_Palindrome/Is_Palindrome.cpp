/*============================================================
|
| File Name: Is_Palindrome.cpp
| Purpose: To check an array for a palindrome.
|	(using a template of the STL "Vector" function)
| Documentation: C++ Program to check an array for a palindrome, 
|	using a template of the STL "Vector" function. 
|	A function template palindrome takes a vector parameter 
|	and returns true or false according to whether the vector 
|	does or does not read the same forward as backward.
|
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2021-06-16         Oleg Savelev          created
|
|============================================================*/


#include <iostream>
#include <vector>

using namespace std;

template <typename someType>	//A function template - a tamplate data type
bool palindrome(vector<someType> vect)	//A function checking for a palindrome that takes a vector parameter
{
	int halfVal = vect.size() / 2;

	for (int i = 0; i < halfVal; i++)
	{
		if (vect[i] != vect[vect.size() - (i + 1)])
			return false;
	}
	return true;
}


int main()
{
	vector<int> vectObj1 = { 1, 2, 3, 2, 1 };  // Initializes vector with an <int> array 
	vector<char> vectObj2 = { 'a', 'b', 'c', 'b', 'a' };  // Initializes vector with a <char> array 
	vector<string> vectObj3 = { "a", "b", "c", "b", "a" };  // Initializes vector with a <string> array 
	vector<float> vectObj4 = { 1.0, 2.0, 3.0, 2.0, 1.0 };  // Initializes vector with a <float> array 
	vector<double> vectObj5 = { 1.00, 2.00, 3.00, 2.00, 1.00 };  // Initializes vector with a <double> array 

	cout << palindrome(vectObj1) << endl; //Calls palindrome function on vector object 1 (<int> array)
	cout << palindrome(vectObj2) << endl; //Calls palindrome function on vector object 2 (<char> array)
	cout << palindrome(vectObj3) << endl; //Calls palindrome function on vector object 3 (<string> array)
	cout << palindrome(vectObj4) << endl; //Calls palindrome function on vector object 4 (<float> array)
	cout << palindrome(vectObj5) << endl; //Calls palindrome function on vector object 5 (<double> array)

	return 0;
}
