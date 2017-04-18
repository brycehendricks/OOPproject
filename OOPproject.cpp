// OOPproject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Course.h"
#include "Session.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream courseFile;
	Course courseList;
	Session sessionList;
	courseFile.open("Courses.txt");

	int credit, classNum, numSesh, numSeats;
	string time, instruc, coreName, coreNum;
	while (courseFile)
	{
		courseFile >> coreNum;
		
		courseFile >> credit;
		
		courseFile >> coreName;
		
		courseFile >> numSesh;
		courseList.addCourse(coreNum, credit, coreName);

		while (numSesh != 0)
		{
			courseFile >> time;

			courseFile >> instruc;

			courseFile >> numSeats;

			courseFile >> classNum;

			sessionList.addSession(classNum, numSeats, time, instruc);

			numSesh--;
		}

	}
	courseList.displayCourses();
	sessionList.displaySessions();
	
	system("pause");
	return 0;

}

