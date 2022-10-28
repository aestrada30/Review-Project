# Review-Project

## CSC-212 Data Structures and Algorithms

### Group Members
 - Alex Estrada
 - Wes Hardesky

### Premise

Build an algorithm to interpret course grades into a semester final grade.

### Purpose

Knowing your grade throughout the term is one of the most critical tools you have at your disposal as a student. Without this knowledge, it becomes incredibly difficult to assess your knowledge of the subject matter relative to a course. It also means not knowing where you stand in a course and more importantly whether you may truly need help or not.

This project, when successfully compiled, will aleviate that concern for this course. An effective output will provide merely a course grade calculated based on all possible points that can be earned within the course.

### Part 1: Planning

Step 1: Determine how our code will function in an overarching manner
- We decided that we would ask for user inputs to get a live assessment of the student's current grade.

Step 2: Create a flow chart

![Flowchart](https://user-images.githubusercontent.com/98777058/198735754-af0c372c-482c-43f7-b74e-dfb82d4af3f1.jpg)

Step 3: Organize and distribute each task of the project. 

TASKS:
- Create detailed outline and pseudo code.
- Code main algorithm to provide accurate results based on user input
- Include comments and additional prompts for user guidance
- Create video to guide any user through the prompts and how to run the script
- include readme.md and provide images and code snippets as visual aids

### Pseudo Code

```
// Input 
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

// Use the function below for each type of assignment the course requires
/* double homeworkWeight function
	ask the user for number of homeworks and the weight of homeworks
	create a vector with each homework grade input
	add each element and divide by total number of elements to find Avg of homeworks
	multiply the average by the weight (i.e 30% should be converted to 0.3)
	return homeworkAvg which should be of type double
*/
```
### How does the program work?

The program contains three files, a `main.cpp`, `courseGrade.cpp`, and `courseGrade.h` file. The `main.cpp` file is simple and calls upon the members of our class which is made up of the different types of assignments which make up the overall grade of a student. In addition to accessing the class members, the main.cpp file also provides feedback depending on the students grade. Some of these comments are comedical relief and are not intended to offend anyone.

Our header file, `courseGrade.h`, contains the Course class which is made up of assignment members. Each member is a type of assignment that is used in the algorithm to calculate the students final grade.

Lastly, the `courseGrade.cpp` file contains all of the algorithmic functions required to produce accurate results for the students final grade.

To run the program, the user must create a new project in a C++ compatible IDE and include each of these files. We are to `assume` the student already understands how to do this so it is a matter of simply running and compiling the provided files for the software. At this point the user must follow the command prompts carefully.

Note: Before running the program, the user should have all of their assignments on hand including the weight of each type. The user should also have each grade of all assignments converted to a percent out of 100. We considered this approach because in general, every assignment, within its own category, such as quizzes, are weighted equally.

Upon running the program, the user will be prompted to input a series of particular information and it must be followed carefully because if the user makes a mistake then they will need to run the program again. These inputs include, the name of the class, numerical grades, numerical weights (adding to 100 total), and number of each type of assignment. We used this input approach because it will enable the user to calculate their grade for any class at any time and always give the most up to date results.

Finally, the user will receive a final output which contains both numerical grade, letter grade and a brief suggestion based on their grade.

### Video Guide
- Please see Gradescope for the video file. This video will guide the user through the program and provide useful information that may have not been covered in this README.md. Thank you and I hope you enjoy.
