// Avg_Marks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Marks;
class Group;

class Marks {
private:
    int Stud1_AvgMark = 0;
    int Stud2_AvgMark = 0;
    int Stud3_AvgMark = 0;
public:
    Marks(int AvgMark1, int AvgMark2, int AvgMark3) {
        Stud1_AvgMark = AvgMark1;
        Stud2_AvgMark = AvgMark2;
        Stud3_AvgMark = AvgMark3;
    }

    friend void fGroupAvgMark(Marks &marks, Group &group);
};


class Group {
private:
    int numOfStudents = 3;
public:
    Group(int students) {
        numOfStudents = students;
    }

    friend void fGroupAvgMark(Marks& marks, Group& group);
};


void fGroupAvgMark(Marks& marks, Group& group) {
    std::cout << "The average mark of the group is: " << (marks.Stud1_AvgMark + marks.Stud2_AvgMark + marks.Stud3_AvgMark) / group.numOfStudents << std::endl;
};

int main()
{
    Marks objMarks(10,20,30);
    Group objGroup(3);
    fGroupAvgMark(objMarks, objGroup);
    return 0;
}


