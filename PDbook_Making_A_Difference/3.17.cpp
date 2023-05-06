/*
(Computerization of Health Records) A health care issue that has been in the news lately is
the computerization of health records. This possibility is being approached cautiously because of
sensitive privacy and security concerns, among others. [We address such concerns in later exercises.]
Computerizing health records could make it easier for patients to share their health profiles and
histories among their various health care professionals. This could improve the quality of health care,
help avoid drug conflicts and erroneous drug prescriptions, reduce costs and in emergencies, could
save lives. In this exercise, you’ll design a “starter” HealthProfile class for a person. The class 
attributes should include the person’s first name, last name, gender, date of birth (consisting of separate
attributes for the month, day and year of birth), height (in inches) and weight (in pounds). Your class
should have a constructor that receives this data. For each attribute, provide set and get functions.
The class also should include functions that calculate and return the user’s age in years, maximum
heart rate and target-heart-rate range (see Exercise 3.16), and body mass index (BMI; see
Exercise 2.30). Write an application that prompts for the person’s information, instantiates an object 
of class HealthProfile for that person and prints the information from that object—including
the person’s first name, last name, gender, date of birth, height and weight—then calculates and
prints the person’s age in years, BMI, maximum heart rate and target-heart-rate range. It should also
display the “BMI values” chart from Exercise 2.30. Use the same technique as Exercise 3.16 to calculate 
the person’s age
*/

#include<iostream>
#include<cstring>
using namespace std;
#define MAX 100

class HealthProfile{
    char firstname[MAX],lastname[MAX];
    char gender;
    int dob_day,dob_month,dob_year;
    float height,weight;                // weight in kg and hieght in meters
public:
    HealthProfile();
    HealthProfile(const char*,const char*,char,int,int,int,float,float);

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
    float BMI(float,float);
    int getMaximumHealthProfile(int);
    int getTargetHealthProfile(int);
};

HealthProfile::HealthProfile(){
    strcpy(firstname,"Jeff");
    strcpy(lastname,"Besos");
    // strcpy(gender,"M");
    gender='m';
    dob_day=10;
    dob_month=10;
    dob_year=1999;
    height=1.6;
    weight=60.5;
}

HealthProfile::HealthProfile(const char* fname,const char* lname,char g,int dobday,int dobmonth,int dobyear,float h,float w){
    strcpy(firstname,fname);
    strcpy(lastname,lname);
    // strcpy(gender,g);
    gender=g;
    dobday=dob_day;
    dobmonth=dob_month;
    dobyear=dob_year;
    h=height;
    w=weight;
}

int HealthProfile::getAge(){
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

float HealthProfile::BMI(float w,float h){
    float body_mass_index=0;
    body_mass_index=weight/(height*height);
    cout<<"BMI: "<<body_mass_index;
    return body_mass_index;
}

int HealthProfile::getMaximumHealthProfile(int curr_age){
    int maxHeartRate=0;
    maxHeartRate=220-curr_age;
    cout<<"\nMaximum Heart rate of "<<firstname<<" "<<lastname<<":"<<maxHeartRate;
    return maxHeartRate;
}

int HealthProfile::getTargetHealthProfile(int mHeartRate){
    int targetHeartRateMax=0,targetHeartRateMin=0;
    targetHeartRateMax=(0.8*mHeartRate);
    targetHeartRateMin=(0.5*mHeartRate);
    cout<<"\nTarget heart rate range should be: ["<<targetHeartRateMax<<","<<targetHeartRateMin<<"]";
}

int main(){
    HealthProfile h1,h2("Robert","Downey",'M',4,4,1965,1.8,70.5);
    // // h1.getAge();
    // int age1=h1.getAge();
    // // h1.getMaximumHealthProfile(age1);
    // int max_heart_rate=h1.getMaximumHealthProfile(age1);
    // h1.getTargetHealthProfile(max_heart_rate);
    // h1.BMI();

    return 0;
}


