//Your Name: Mirackson Charilus
//COP1334 Final Part B 
//includes go here
#include <iostream>
#include <string>
#include "COP1334Final.h"
#include <vector>
#include <iomanip>
#include <fstream>


//declare constants here
using namespace std;


//prototypes go here



//main
int main()
{
		const int SIZE = 5;  //the total number of assignments
		Grades studentGrades[SIZE];
		vector<Grades> myGrades;
		char choice = 'z';

		//get the assignments from the user
		//This is the foundation of your add assignment functionality
		while (choice != 'n')
		{
			myGrades.push_back(addStudents());
			cout << "\nWould you like to add another assignment? (y/n): ";
			cin >> choice;
		}

		//display assignments
		for (int i = 0; i < myGrades.size(); i++)
			cout << "\nLast Name: " << myGrades.at(i).getFirst()
			<< "  First Name: " << myGrades.at(i).getFirst()
			<< "  MI: " << myGrades.at(i).getMiddle()
			<< "  Score: " << myGrades.at(i).getScore() << "\n";




		system("pause");
		return 0;
	}

	return 0;
}


//menu
void menu()
{

		vector<Grades> myGrades;  
		char choice = 'z';  //used to make a menu selection and to exit the program

		loadData(myGrades);
		//loop the menu
		do
		{
			//display menu
			system("cls");
			cout << "\na) Initalize array"
				<< "\nb) Edit Assignments"
				<< "\nc) Class Average"
				<< "\nd) Display Grades"
				<< "\ne) Exit"
				<< "\nPlease enter a choice: ";
			//take user input
			cin >> choice;
			//switch user input
	//declare your array of Students here 

	char choice = 'z';
	while ((choice) != 'd')
	{
		//menu choices  a) initialize array, b)find record, c)calaculate class average, d) display student info, e)Exit

		//take user input
		switch (choice)
		{ 
		//switch user input
			// option a - Initialize the array
		case 'a':
			initalze array
				break;
			// option b - Ask the user to enter a name to search for
			//	      Call the funnction to search the array and return the index or -1
			//	      Display the record or a message "record not found"

			// option c - Call the function to calculate the average class grade.
			//	      The function returns the average and you display it
		case 'c':
			calculateClassAverage();
			break;
			// option d - Call the function to display the student's Last name, First name, MI, and score
		case'd':
			displayStudentInfo();
			// option e - Exit the menu
		case 'e':
			system("pause");
			//default
		default:
			cout << "\nInvalid selection.  Please try again.\n";
		}//end of switch

	} while (choice != '6')
	}

}


//initialize array of Students
//write a function that takes an array of Students and ask the user to enter the data for each of the 5 records.
Grades addStudents()
{
	Grades grades;
	string input;  
	double score;

	system("cls");
	cout << "\n\nPlease enter the first name of the student: ";
	cin >> input;
	grades.setFirst(input);
	cin.ignore(100, '\n'); //flushes the buffer since working with strings
	cout << "\n\nPlease enter the last name of the student: ";
	cin >> input;
	grades.setLast(input);
	cin.ignore(100, '\n'); //flushes the buffer since working with strings
	cout << "\n\nPlease enter the middle inital of the student: ";
	cin >> input;
	grades.setMiddle(input);
	cout << "\n\nPlease enter a score for this student between 0 and 100: ";
	cin >> score;
	while (score < 0 || score >100)
	{
		cout << "\nIncorrect.  Please try again: ";
		cin >> score;
	}
	grades.setScore(score);
	displayGrades(grades);
	system("pause");
	return grades;
}


//find a record
//write a function that takes an array of Students and a last name value to search.  Pass the last name by reference. 
//If you find the name in the array the function returns the index where the record is found.  
//If the value is not found then it should return -1.



//calculate the class average
//write a function that takes an array of Students and calculates and returns the average score of the students
//(adds all the score and divde by the size of the array) .



//display student information
//write a function that takes an array of structs and displays its contents.
//Lastname	Firstname	MI	score
