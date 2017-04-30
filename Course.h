#pragma once

#include <vector>
#include <string>
#include <iostream>

class Course
{
public:
	Course();
	virtual ~Course();
	std::vector<Course*> preRecs;
	std::vector<Course*> courseList;

	void addCourse(std::string num, int credit, std::string name)
	{
		Course* ptr = new Course;
		ptr->courseNum = num;
		ptr->creditVal = credit;
		ptr->courseName = name;
	


		courseList.push_back(ptr);
	}
	
	Course * searchCoursebyName(std::string name);
	Course * searchCoursebyNum(std::string num);
	
	void displayCourses();

	

protected:

	std::string courseNum;
	int creditVal;
	std::string courseName;
	
	

};

