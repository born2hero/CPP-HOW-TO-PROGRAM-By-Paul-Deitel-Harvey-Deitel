// Using a switch statement to count letter grades

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int total{0};
    unsigned int gradeCounter{0};
    unsigned int aCount{0};
    unsigned int bCount{0};
    unsigned int cCount{0};
    unsigned int dCount{0};
    unsigned int fCount{0};

    cout<<"Enter the integers grades in the range 0-100\n"
        <<"Type the end-of-file indicator to terminate input:\n"
        <<"To terminate program press ctrl+z then enter";

    int grade;

    while(cin>>grade){
        total+=grade;
        ++gradeCounter;

        switch(grade/10){
            case 9:
            case 10:
                ++aCount;
                break;
            
            case 8:
                ++bCount;
                break;
            
            case 7:
                ++cCount;
                break;
            
            case 6:
                ++dCount;
                break;

            default:
                ++fCount;
                break;
        }
    }

    cout<<fixed<<setprecision(2);

    cout<<"\nGrade Report:\n";

    if(gradeCounter!=0){
        double average=static_cast<double>(total)/gradeCounter;

        cout<<"Total of the "<<gradeCounter<<" grades entered is "
            <<total<<"\nClass average is "<<average
            <<"\nNumber of students who recieved each grade: "
            <<"\nA: "<<aCount<<"\nB: "<<bCount<<"\nC: "<<cCount
            <<"\nD: "<<dCount<<"\nF: "<<fCount<<endl;
    }
    else{
        cout<<"No grades were entered"<<endl;
    }
}