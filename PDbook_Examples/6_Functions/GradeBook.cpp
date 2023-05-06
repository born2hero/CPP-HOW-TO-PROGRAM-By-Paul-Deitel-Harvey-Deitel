// Member-function definitions for class GradeBook that
// determines the maximum of three grades.
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;


GradeBook::GradeBook(string name): maximumGrade(0){
	setCourseName(name);
}

void GradeBook::setCourseName(string name){
	if (name.size() <= 25) {
		courseName = name;
	}
	else{ 
		courseName = name.substr(0, 25);
		cerr<< "Name \"" << name << "\" exceeds maximum length (25).\n"
		    << "Limiting courseName to first 25 characters.\n" << endl;
	}
}
