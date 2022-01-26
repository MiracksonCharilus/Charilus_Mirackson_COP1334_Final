#pragma once
//# includes goes here (if any)
#include<string>
using namespace std;

class Grades {
private:
	string firstName;
	string lastName;
	string middleInital;
	double score;

public:


	Grades();
	Grades(string, string, double);
	void setFirst(string);
	void setLast(string);
	void setMiddle(string);
	void setScore(double);
	string getFirst();
	string getLast();
	string getMiddle();
	double getScore();

};