#include "stdafx.h"
#include "Course.h"


Course::Course()
{
	
}


Course::~Course()
{
}

Course * Course::searchCoursebyName(std::string name)
{
	for (int i = 0; i < courseList.size(); i++)
	{
		if (courseList[i]->courseName == name)
		{
			std::cout << "Avalible" << std::endl;
			return courseList[i];
		}
		
	}
	std::cout << "Not found" << std::endl;
	return NULL;
}

Course * Course::searchCoursebyNum(std::string num)
{
	for (int i = 0; i < courseList.size(); i++)
	{
		if (courseList[i]->courseNum == num)
		{
			std::cout << "Avalible" << std::endl;
			return courseList[i];
		}

	}
	std::cout << "Not found" << std::endl;
	return NULL;
}


void Course::displayCourses()
{
	for (int i = 0; i < courseList.size(); i++)
	{
		std::cout << courseList[i]->courseNum << " : " << courseList[i]->courseName << std::endl;
	}
}