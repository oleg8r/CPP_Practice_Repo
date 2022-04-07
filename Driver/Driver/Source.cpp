//This program deals with the information about drivers

#include <iostream>
using namespace std;

//"Driver" structure
struct Driver
{
	string lastName;		// driver's last name field
	char carCategory = 0;		// car category field
	//char carCategory{ 0 };	// car category field
	int drivingXP = 0;		// Driver's experience field
	//char drivingXP{ 0 };		// Car category field
};

// Main function
int main()
{
	// set language in console
	setlocale(LC_ALL, "English");
	int n;
	cout << "Enter ## of drivers" << endl;
	cin >> n;

	Driver* list = new Driver[n]; //creates a dynamic array for "the list of drivers" for n cars
	// filling out the array of structures of "Driver" type
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the last name of driver #: " << i + 1 << endl;
		cin >> list[i].lastName;
		cout << "Enter the car category: " << endl;
		cin >> list[i].carCategory;
		cout << "Enter driver's experience in years: " << endl;
		cin >> list[i].drivingXP;
		cout << endl;
	}

	//int i = 0;
	int leastXP = list[0].drivingXP;
	int driverNum = 0;
	for (int i = 0; i < n; i++)
	{
		if (list[i].drivingXP < leastXP)
		{
			leastXP = list[i].drivingXP;
			driverNum = i;
		}
	}

	// displays the drivers with the least experience
	cout << endl;
	cout << "The driver with the least experience: " << endl;
	cout << "________________________________________________" << endl;
	cout << list[driverNum].lastName << endl;
	cout << list[driverNum].carCategory << endl;
	cout << list[driverNum].drivingXP << endl;
	cout << endl;

	// realeases the memory allocated for dynamic array
	delete[]list;
	return 0;
}

// End of the program
