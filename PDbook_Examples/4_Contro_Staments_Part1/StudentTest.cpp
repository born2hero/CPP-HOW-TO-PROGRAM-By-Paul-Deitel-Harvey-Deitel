#include<iostream>
#include "Student.h"
using namespace std;

int main(){
    Student stud1{"Jane Green",97};
    Student stud2{"Jane Blue",67};

    cout<<stud1.getName()<<"'s letter grade equivalent of "<<stud1.getAverage()<<" is: "<<stud1.getLetterGrade()<<"\n";
    cout<<stud2.getName()<<"'s letter grade equivalent of "<<stud2.getAverage()<<" is: "<<stud2.getLetterGrade()<<"\n";
}