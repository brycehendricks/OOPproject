#pragma once

#include "Course.h"
#include "Session.h"
class Student
{
public:
	Student();
	~Student();
	void enroll(Course * wantedCourse);
	void drop(Course* droppedCourse);

private:
	int ID;
	Course * currentCourse;
	std::vector<Course *> coursesTaken;
	std::vector<Course *> coursesEnrolled;
	std::vector<Course*> enrolledCourses;
	bool eligible(std::vector<Course *> coursesTaken, Course* currentCourse);
	bool timeConflicts(std::vector<Course *> courseEnrolled, Course* currentCourse);

};

