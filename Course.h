#pragma once

#include <vector>
#include <string>
class Course
{
public:
	Course();
	virtual ~Course();
	std::vector<Course*> preRecs;

private:
	int courseNum;
	//std::vector<Session *> sessions;
	int creditVal;
	
	

};

