/*
(Target-Heart-Rate Calculator) While exercising, you can use a heart-rate monitor to see that
your heart rate stays within a safe range suggested by your trainers and doctors. According to 
the American Heart Association (AHA) (www.americanheart.org/presenter.jhtml?identifier=4736), the
formula for calculating your maximum heart rate in beats per minute is 220 minus your age in years.
Your target heart rate is a range that is 50–85% of your maximum heart rate. [Note: These formulas are
estimates provided by the AHA. Maximum and target heart rates may vary based on the health, fitness and
gender of the individual. Always consult a physician or qualified health care professional before beginning or
modifying an exercise program.] Create a class called HeartRates. The class attributes should include the
person’s first name, last name and date of birth (consisting of separate attributes for the month, day
and year of birth). Your class should have a constructor that receives this data as parameters. For each
attribute provide set and get functions. The class also should include a function getAge that calculates
and returns the person’s age (in years), a function getMaxiumumHeartRate that calculates and returns
the person’s maximum heart rate and a function getTargetHeartRate that calculates and returns the
person’s target heart rate. Since you do not yet know how to obtain the current date from the computer, 
function getAge should prompt the user to enter the current month, day and year before calculating
the person’s age. Write an application that prompts for the person’s information, instantiates an object
of class HeartRates and prints the information from that object—including the person’s first name,
last name and date of birth—then calculates and prints the person’s age in (years), maximum heart rate
and target-heart-rate range
*/

#include<iostream>
#include<cstring>
using namespace std;
#define MAX 100

class HeartRates{
    char firstname[MAX],lastname[MAX];
    int dob_day,dob_month,dob_year;
public:
    HeartRates();
    HeartRates(const char*,const char*,int,int,int);

    void setFirstname(const char* fn){
        strcpy(firstname,fn);
    }
    void setLastname(const char* ln){
        strcpy(lastname,ln);
    }
    void getFirstname(){
        cout<<firstname;
    }
    void getLastname(){
        cout<<lastname;
    }

    void getDOB(int d_day,int d_month,int d_year){
        dob_day=d_day;
        dob_day=d_day;
        dob_year=d_year;
    }

    int getAge();
    int getMaximumHeartRates(int);
    int getTargetHeartRates(int);
};

HeartRates::HeartRates(){
    strcpy(firstname,"Jeff");
    strcpy(lastname,"Besos");
    dob_day=10;
    dob_month=10;
    dob_year=1999;
}

HeartRates::HeartRates(const char* fname,const char* lname,int dobday,int dobmonth,int dobyear){
    strcpy(firstname,fname);
    strcpy(lastname,lname);
    dobday=dob_day;
    dobmonth=dob_month;
    dobyear=dob_year;
}

int HeartRates::getAge(){
    int curr_day,curr_month,curr_year;
    int age;
    cout<<"\nEnter today's date: ";
    cout<<"\nDay: ";
    cin>>curr_day;
    cout<<"\nMonth: ";
    cin>>curr_month;
    cout<<"\nYear: ";
    cin>>curr_year;
    cout<<"\nToday's date: "<<curr_day<<"/"<<curr_month<<"/"<<curr_year;
    cout<<"\nDate of Birth: "<<dob_day<<"/"<<dob_month<<"/"<<dob_year;

    age=curr_year-dob_year;
    // if(curr_day<dob_day){

    // }
    cout<<"\nCurrent age: "<<age;
    return age;
}

int HeartRates::getMaximumHeartRates(int curr_age){
    int maxHeartRate=0;
    maxHeartRate=220-curr_age;
    cout<<"\nMaximum Heart rate of "<<firstname<<" "<<lastname<<":"<<maxHeartRate;
    return maxHeartRate;
}

int HeartRates::getTargetHeartRates(int mHeartRate){
    int targetHeartRateMax=0,targetHeartRateMin=0;
    targetHeartRateMax=(0.8*mHeartRate);
    targetHeartRateMin=(0.5*mHeartRate);
    cout<<"\nTarget heart rate range should be: ["<<targetHeartRateMax<<","<<targetHeartRateMin<<"]";
}

int main(){
    HeartRates h1,h2("Robert","Downey",4,4,1965);
    // h1.getAge();
    int age1=h1.getAge();
    // h1.getMaximumHeartRates(age1);
    int max_heart_rate=h1.getMaximumHeartRates(age1);
    h1.getTargetHeartRates(max_heart_rate);

    return 0;
}