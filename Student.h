#pragma once

#include "Course.h"
#include "Session.h"
class Student
{
public:
	Student(int id);
	~Student();
	void enroll(Session* wantedCourse);
	void drop(Session* droppedCourse);

private:
	int ID;
	Course * currentCourse;
	std::vector<Course *> coursesTaken;
	std::vector<Session *> coursesEnrolled;
	bool eligible(std::vector<Course *> coursesTaken, Course* currentCourse);
	bool timeConflicts(std::vector<Course *> courseEnrolled, Course* currentCourse);

};

