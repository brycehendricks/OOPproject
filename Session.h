#pragma once
#include <string>
#include "Course.h"
class Session : public Course
{
public:
	Session();
	~Session();
	std::vector<Session*> sessionList;
	
	void displaySessions();
	void addSession(int classNum, int numSeats, std::string time, std::string instructor);
private:
	int classNum;
	int numSeats;
	std::string time;
	std::string instructor;
};

