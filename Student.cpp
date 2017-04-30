#include "stdafx.h"
#include "Student.h"



Student::Student(int id)
{
	ID = id;
}


Student::~Student()
{
}

bool Student::eligible(std::vector<Course*> coursesTaken, Course* currentCourse)
{
	bool flag = false;
	for (int i = 0; i < coursesTaken.size(); i++)
	{
		if (coursesTaken[i] == currentCourse->preRecs[i])
			flag = true;
	}
	return flag;
}

bool Student::timeConflicts(std::vector<Course *> courseEnrolled, Course* currentCourse)
{
	return true;
}

void Student::enroll(Session* wantedCourse)
{
	coursesEnrolled.push_back(wantedCourse);
}

void Student::drop(Session * droppedCourse)
{
	Course* temp;
	for (int i = 0; i < coursesEnrolled.size(); i++)
	{
		if (droppedCourse == coursesEnrolled[i])
		{
			coursesEnrolled.erase(coursesEnrolled.begin()+i);

		}
	}
}