/*============================================================
|
| File Name: Vector_Student_Info.cpp
| Purpose: To manage student records.
| Documentation: This program defines struct StudentInfo 
|	and maintains records in a vector<StudentInfo>. The program 
|	prompts for and fetches data, builds vector of student records, 
|	sorts by name, calculates class max and min grades, class average, 
|	prints summarizing data along with class roll and grades. 
|
|
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2021-07-01         Oleg Savelev          created
|
|============================================================*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct StudentInfo
{
	int classRollNum;
    string studName;
    float studGrade;
};

int nameSortF(StudentInfo stud1, StudentInfo stud2)
{
	if (stud1.studName < stud2.studName)
		return 1;
	else
		return 0;
};


int main() 
{
	int studQtty{ 0 };
	float totalGrade { 0 };
	float maxGrade{ 0 };
	float minGrade{ 100 };
	float avgGrade{ 0 };

	cout << "-----------------Enter Values--------------------\n" << endl;

	cout << "Please specify the number of students: ";
	cin >> studQtty;
	cout << endl;

	vector<StudentInfo> vectObj(studQtty);	//Declares a vector and specifies its size through a parameter

	for (int i{ 0 }; i < studQtty; i++)
	{
		cout << "Please specify the class roll number: ";
		cin >> vectObj[i].classRollNum;

		cout << "Please specify the name: ";
		cin >> vectObj[i].studName;

		cout << "Please specify the grade: ";
		cin >> vectObj[i].studGrade;

		totalGrade += vectObj[i].studGrade;

		if(maxGrade < vectObj[i].studGrade)
			maxGrade = vectObj[i].studGrade;

		if(minGrade > vectObj[i].studGrade)
			minGrade = vectObj[i].studGrade;

		cout << endl;
	}

	cout << "-----------------Student Results--------------------\n" << endl;

	sort(vectObj.begin(), vectObj.end(), nameSortF);

	for (int i{ 0 }; i < studQtty; i++)
	{
		cout << "The Class Roll: " << vectObj[i].studName << endl;
		cout << "The Grade: " << vectObj[i].studGrade << endl;
		cout << endl;
	}

	cout << "-----------------Class Results--------------------\n" << endl;

	cout << "The Max Grade is: " << maxGrade << endl;
	cout << "The Min Grade is: " << minGrade << endl;

	avgGrade = totalGrade / studQtty;
	cout << "The Class Average is: " << avgGrade << endl;

	cout << endl;
	cout << "-----------------End of Program--------------------\n" << endl;

	return 0;
}
