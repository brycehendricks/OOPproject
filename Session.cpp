#include "stdafx.h"
#include "Session.h"


Session::Session()
{
	
}


Session::~Session()
{
}


void Session::addSession(int classNum, int numSeats, std::string time, std::string instructor, std::string name)
{
	Session * ptr = new Session;
	ptr->classNum = classNum;
	ptr->numSeats = numSeats;
	ptr->time = time;
	ptr->instructor = instructor;
	ptr->courseName = name;
	
	sessionList.push_back(ptr);

}

void Session::displaySessions()
{
	for (int i = 0; i < sessionList.size(); i++)
	{
		std::cout << sessionList[i]->courseName << sessionList[i]->classNum << " " << sessionList[i]->numSeats << " " << sessionList[i]->instructor << sessionList[i]->time << std::endl;
	}
}

Session * Session::searchSessionbyName(std::string name, int classNum)
{
	for (int i = 0; i < sessionList.size(); i++)
	{
		if (sessionList[i]->courseName == name && sessionList[i]->classNum == classNum)
		{
			return sessionList[i];
		}

	}
	return NULL;
}