#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <numeric>
#include "courseGrade.h"

/*How to calculate weighted grades
	find the average of all assignments of the same type and multiply by its weight (percent)
		Ex. total quiz avg is 85 and quiz weight is 30%
			So, quiz weight = 85*.3 which is 25.5 points
	Next, calculate the remaining weight of the other types of assignments (WEIGHT should add to 100)
	Lastly, add all the points together and the result is the final grade

	Final Gade Calculation Example
		Quiz Weight (QW) = 30%
		Quiz Avg (QA) = 95
		Test Weight (TW) = 40%
		Test Avg (TA) = 85
		Final Exam Weight  (FW) = 30%
		Final Exam Grade (Avg)  (FG) = 80
	Final Grade = (QW*QA)+(TW*TA)+(FW+FG) = (0.3 * 95) + (0.4 * 85) + (0.3 * 80) = 86.5
*/

/* double homeworkWeight function
	ask the user for number of homeworks and the weight of homeworks
	create a vector with each homework grade input
	add each element and divide by total number of elements to find Avg of homeworks
	multiply the average by the weight (i.e 30% should be converted to 0.3)
	return homeworkAvg which should be of type double
*/

double Course::homeworkWeight() {
	int numHWorks;
	double grades = 0, hwAvg = 0, weight = 0, totalHWWeight = 0;

	std::vector<double> hwGrades;
	hwGrades.clear();
	std::cout << "How many homework assignments did you have? " << std::endl;
	std::cin >> numHWorks;

	if (numHWorks > 0) {
		std::cout << "What is the overall homework weight? " << std::endl;
		std::cin >> weight;
		for (int i = 0; i < numHWorks; i++) {
			std::cout << "What was your homework assignment " << i + 1 << " grade? " << std::endl;
			std::cin >> grades;
			hwGrades.push_back(grades);
		}
	}
	else {
		return totalHWWeight = 0;
	}
	hwAvg = std::accumulate(hwGrades.begin(), hwGrades.end(), 0.0) / hwGrades.size();
	totalHWWeight = hwAvg * (weight / 100);
	//std::cout << totalHWWeight << std::endl;
	return totalHWWeight;
}

/* double quizWeight function
	ask the user for number of quizzes and the weight of quizzes
	create a vector with each quiz grade input
	add each element and divide by total number of elements to find Avg of quizzes
	multiply the average by the weight (i.e 30% should be converted to 0.3)
	return quizAvg which should be of type double
*/

double Course::quizWeight() {
	int numQuizzes;
	double grades = 0, quizAvg = 0, weight = 0, totalQuizWeight = 0;

	std::vector<double> quizGrades;
	quizGrades.clear();
	std::cout << "How many quizzes/tests did you take? " << std::endl;
	std::cin >> numQuizzes;

	if (numQuizzes > 0) {
		std::cout << "What is the overall quiz weight? " << std::endl;
		std::cin >> weight;
		for (int i = 0; i < numQuizzes; i++) {
			std::cout << "What was your quiz " << i + 1 << " grade? " << std::endl;
			std::cin >> grades;
			quizGrades.push_back(grades);
		}
	}
	else {
		return totalQuizWeight = 0;
	}
	quizAvg = std::accumulate(quizGrades.begin(), quizGrades.end(), 0.0) / quizGrades.size();
	totalQuizWeight = quizAvg * (weight / 100);
	//std::cout << totalQuizWeight << std::endl;
	return totalQuizWeight;
}

/* double projectWeight function
	ask the user for number of projects and the weight of projects
	create a vector with each project grade input
	add each element and divide by total number of elements to find Avg of projects
	multiply the average by the weight (i.e 30% should be converted to 0.3)
	return projectAvg which should be of type double
*/

double Course::projectWeight() {
	int numProjects;
	double grades = 0, projAvg = 0, weight = 0, totalProjWeight = 0;

	std::vector<double> projGrades;
	projGrades.clear();
	std::cout << "How many projects did you complete? " << std::endl;
	std::cin >> numProjects;

	if (numProjects > 0) {
		std::cout << "What is the overall project weight? " << std::endl;
		std::cin >> weight;
		for (int i = 0; i < numProjects; i++) {
			std::cout << "What was your project " << i + 1 << " grade? " << std::endl;
			std::cin >> grades;
			projGrades.push_back(grades);
		}
	}
	else {
		return totalProjWeight = 0;
	}
	projAvg = std::accumulate(projGrades.begin(), projGrades.end(), 0.0) / projGrades.size();
	totalProjWeight = projAvg * (weight / 100);
	//std::cout << totalProjWeight << std::endl;
	return totalProjWeight;
}

/* double midtermWeight function
	ask the user for their midterm grade and weight
	multiply the midterm grade by the weight (i.e 30% should be converted to 0.3)
	return midtermGrade which should be of type double
*/

double Course::midtermWeight() {
	int numMidterms;
	double grades = 0, midtermAvg = 0, weight = 0, totalmidtermWeight = 0;

	std::vector<double> midtermGrades;
	midtermGrades.clear();
	std::cout << "How many midterms did you take? " << std::endl;
	std::cin >> numMidterms;

	if (numMidterms > 0) {
		std::cout << "What is the overall midterm weight? " << std::endl;
		std::cin >> weight;
		for (int i = 0; i < numMidterms; i++) {
			std::cout << "What was your midterm " << i + 1 << " grade? " << std::endl;
			std::cin >> grades;
			midtermGrades.push_back(grades);
		}
	}
	else {
		return totalmidtermWeight = 0;
	}
	midtermAvg = std::accumulate(midtermGrades.begin(), midtermGrades.end(), 0.0) / midtermGrades.size();
	totalmidtermWeight = midtermAvg * (weight / 100);
	//std::cout << totalmidtermWeight << std::endl;
	return totalmidtermWeight;
}

/* double finalExamWeight function
	ask the user final exam grade and the weight of the final exam
	multiply the final exam grade by the weight (i.e 30% should be converted to 0.3)
	return finalExamGrade which should be of type double
*/

double Course::finalExamWeight() {
	std::string finalYN;
	double grade = 0, weight = 0, totalFinalExamWeight = 0;

	std::cout << "Did you take a final exam? " << std::endl;
	std::cin >> finalYN;
	std::transform(finalYN.begin(), finalYN.end(), finalYN.begin(), ::toupper);
	if (finalYN == "YES") {
		std::cout << "What is the overall final exam weight? " << std::endl;
		std::cin >> weight;
		std::cout << "What was your final exam grade? " << std::endl;
		std::cin >> grade;
	}
	else {
		return totalFinalExamWeight = 0;
	}
	totalFinalExamWeight = grade * (weight / 100);
	//std::cout << totalFinalExamWeight << std::endl;
	return totalFinalExamWeight;
}

//double Course::finalGrade(double *hw, double *qw, double *pw, double *mw, double *fw) {
//	double totalGrade;
//	totalGrade = &hw + &qw + &pw + &mw + *fw;
//	return totalGrade;
//}
