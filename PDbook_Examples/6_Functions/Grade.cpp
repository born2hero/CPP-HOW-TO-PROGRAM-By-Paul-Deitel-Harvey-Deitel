// Create GradeBook object, input grades and display grade report.

#include "GradeBook.h"

int main(){
    GradeBook myGradeBook("CS101 Programming");

    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();
}