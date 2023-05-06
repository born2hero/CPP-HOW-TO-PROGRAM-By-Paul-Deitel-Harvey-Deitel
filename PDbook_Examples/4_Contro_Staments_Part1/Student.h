// Student class that stores a student name and average

#include<string>

class Student{
    std::string name;
    int average{0}; // initialize average to 0
public:
    Student(std::string studentName,int studentAverage):name(studentName){
        setAverage(studentAverage);
    }

    void setName(std::string studentName){
        name=studentName;
    }

    std::string getName() const{
        return name;
    }

    void setAverage(int studentAverage){
        if(studentAverage>0 && studentAverage<100){
            average=studentAverage;
        }
    }

    int getAverage() const{
        return average;
    }

    std::string getLetterGrade() const{
        std::string letterGrade;

        if(average>=90){
            letterGrade='A';
        }
        else if(average>=80){
            letterGrade='B';
        }
        else if(average>=70){
            letterGrade='C';
        }
        else if(average>=60){
            letterGrade='D';
        }
        else{
            letterGrade='F';
        }

        return letterGrade;
    }
};