#pragma once
#include <string>
class Session 
{
public:
	Session();
	~Session();

private:
	int classNum;
	int numSeats;
	int time;
	std::string instructor;
};

