// Definition of class GradeBook that finds the maximum of three grades.

#include<string>

class GradeBook {
	std::string courseName;
	int maximumGrade;
public:
	explicit GradeBook(std::string);
	void setCourseName(std::string);
	std::string getCourseName() const;
	void displayMessage() const;
	void inputGrades();
	void displayGradeReport() const;
	int maximum(int, int, int) const;
};