#include "stdafx.h"
#include "Student.h"



Student::Student()
{
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

void Student::enroll(Course* wantedCourse)
{
	enrolledCourses.push_back(wantedCourse);
}

void Student::drop(Course * droppedCourse)
{
	Course* temp;
	for (int i = 0; i < enrolledCourses.size(); i++)
	{
		if (droppedCourse == enrolledCourses[i])
		{
			enrolledCourses.erase(enrolledCourses.begin()+i);

		}
	}
}