// OOPproject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Course.h"
#include "Session.h"
#include <iostream>
#include <fstream>
#include "Student.h"

using namespace std;

int main()
{
	ifstream courseFile;
	Course courseList;
	Session sessionList;
	courseFile.open("Courses.txt");

	int credit, classNum, numSesh, numSeats, option=7, studentId;
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

			sessionList.addSession(classNum, numSeats, time, instruc, coreName);

			numSesh--;
		}

	}
		cout << "Welcome to the class enrolment device please enter your student ID" << endl;
		cout << "StudentId: ";
		cin >> studentId;
		Student currentUser(studentId);

	while (option != 0)
	{
		cout << "To display the course list press 1" << endl;
		cout << "To search for a course by name press 2 to search by number press 3" << endl;
		cout << "To display the session list press 4" << endl;
		cout << "To enroll in a session press 5" << endl;
		cout << "To drop a session press 6" << endl;
		cout << "To exit press 0" << endl;

		cin >> option;

		switch(option) {

			case 1: courseList.displayCourses(); 
				break;

			case 2: cout << "Enter the class name: "; cin >> coreName; courseList.searchCoursebyName(coreName);
				break;

			case 3: cout << "Enter the class number: "; cin >> coreNum; courseList.searchCoursebyNum(coreNum);
				break;

			case 4: sessionList.displaySessions();
				break;

			case 5: cout << "Enter the name of the class" << endl; cin >> coreName; cout << "Enter the class number: "; cin >> classNum; currentUser.enroll(sessionList.searchSessionbyName(coreName, classNum));
				break;

			case 6: cout << "Enter the name of the class" << endl; cin >> coreName; cout << "Enter the class number: "; cin >> classNum; currentUser.drop(sessionList.searchSessionbyName(coreName, classNum));
				break;

		}
	}
	

	sessionList.displaySessions();
	
	system("pause");
	return 0;

}

