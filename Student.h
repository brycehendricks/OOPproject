#pragma once

#include "Course.h"
class Student
{
public:
	Student();
	~Student();

private:
	int ID;
	Course * currentCourse;
	std::vector<Course *> coursesTaken;
	std::vector<Course *> coursesEnrolled;
	bool eligible(std::vector<Course *> coursesTaken, Course* currentCourse);
	bool timeConflicts(std::vector<Course *> courseEnrolled, Course* currentCourse);

};

