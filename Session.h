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
	Session * searchSessionbyName(std::string name, int classNum);
	void addSession(int classNum, int numSeats, std::string time, std::string instructor, std::string name);
private:
	int classNum;
	int numSeats;
	std::string time;
	std::string instructor;
};

