#include <string>
#include "COP1334Final.h"

using namespace std;


Grades::Grades()
{
	firstName = "default";
	lastName = "default";
	middleInital = "default";
	score = -1.0;
}
Grades::Grades(string fname, string lname, string minital, double points)
{
	setFirst(fname);
	setLast(lname);
	setMiddle(minital);
	setScore(points);
}
// setter function for firstname


// setter function for lastname


// setter function for middle initial


// setter function for score


// getter function for firstname


// getter function for lastname


// getter function for middle initial


// getter function for score

void Grades::setFirst(string fname)
{
	firstName = fname;
}
void Grades::setLast(string lname)
{
	lastName = lname;
}
void Grades::setMiddle(string minital)
{
	middleInital = minital;
}
void Grades::setScore(double points)
{
	score = points;
}
string Grades::getFirst()
{
	return firstName;
}
string Grades::getLast()
{
	return lastName;
}
string Grades::getMiddle()
{
	return middleInital;
}

double Grades::getScore()
{
	return score;
}