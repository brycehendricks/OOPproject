#pragma once
#include "Course.h"
class Session :
	public Course
{
public:
	Session();
	~Session();

private:
	int classNum;
	//std::vector<bool> seats;
	int time;
	std::string instructor;
};

