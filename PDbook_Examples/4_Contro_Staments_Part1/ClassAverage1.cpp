#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int total{0};
    unsigned int gradeCounter{0};

    cout<<"Enter grade or -1 to quit: ";
    int grade;
    cin>>grade;

    // processing phase uses counter-controlled iteration
    while(grade != -1){
        total=total+grade;
        gradeCounter=gradeCounter+1;

        cout<<"Enter grade "<<gradeCounter<<":";
        cin>>grade;
    }
    if(gradeCounter != 0){
        double average{static_cast<double>(total)/gradeCounter};

        cout<<"\nTotal of the "<<gradeCounter<<" grades entered is "<<total;
        cout<<setprecision(2)<<fixed;
        cout<<"\nClass average is "<<average<<endl;
    }
    else{
        cout<<"\nNo grades were entered"<<endl;
    }
}