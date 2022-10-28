#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <numeric>
#include <string>
#include "courseGrade.h"

int main() {

	Course newClass = Course();
	std::string className;

	//prompt user for class name and information (via funtions)
	std::cout << "What class are you taking? (no spaces)" << std::endl;
	std::cin >> className;

	double finalGrade;
	std::string letterGrade;
	finalGrade = newClass.quizWeight() + newClass.homeworkWeight() + newClass.projectWeight()
		+ newClass.midtermWeight() + newClass.finalExamWeight();

	//Convert numerical grade to letter Grade
	if (finalGrade >= 94) {
		letterGrade = "A";
	}
	else if (finalGrade >= 90 && finalGrade < 94) {
		letterGrade = "A-";
	}
	else if (finalGrade >= 87 && finalGrade < 90) {
		letterGrade = "B+";
	}
	else if (finalGrade >= 84 && finalGrade < 87) {
		letterGrade = "B";
	}
	else if (finalGrade >= 80 && finalGrade < 84) {
		letterGrade = "B-";
	}
	else if (finalGrade >= 77 && finalGrade < 80) {
		letterGrade = "C+";
	}
	else if (finalGrade >= 74 && finalGrade < 77) {
		letterGrade = "C";
	}
	else if (finalGrade >= 70 && finalGrade < 74) {
		letterGrade = "C-";
	}
	else if (finalGrade >= 67 && finalGrade < 70) {
		letterGrade = "D+";
	}
	else if (finalGrade >= 64 && finalGrade < 67) {
		letterGrade = "D";
	}
	else if (finalGrade >= 60 && finalGrade < 64) {
		letterGrade = "D-";
	}
	else {
		letterGrade = "F";
	}

	std::string saying;

	if (letterGrade == "A") {
		saying = "Tell Mom, it's going on the fridge!";
	}
	if (letterGrade == "A-") {
		saying = "Nothing to really complain about!";
	}
	if (letterGrade == "B+") {
		saying = "Not too bad.";
	}
	if (letterGrade == "B") {
		saying = "Nice.";
	}
	if (letterGrade == "B-") {
		saying = "Alright, but work just a little harder next time.";
	}
	if (letterGrade == "C+") {
		saying = "You should improve your study habbits.";
	}
	if (letterGrade == "C") {
		saying = "You can definitly do better than average.  You should study harder.";
	}
	if (letterGrade == "C-") {
		saying = "You should probably put down the XBox controller and study more.";
	}
	if (letterGrade == "D+") {
		saying = "You barely passed.  You definitly need to do something about it.";
	}
	if (letterGrade == "D") {
		saying = "You should probably change majors.";
	}
	if (letterGrade == "D-") {
		saying = "You should re think your life.";
	}
	if (letterGrade == "F") {
		saying = "You suck.";
	}

	std::cout << "Your final grade for " << className << " is " << finalGrade << " which is a " << letterGrade
		<< ".  " << std::endl << saying;


	//WriteToFile Function here (optional)

	return 0;
}
