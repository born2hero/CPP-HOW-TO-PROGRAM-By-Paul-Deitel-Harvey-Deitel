/*
(Car-Pool Savings Calculator) Research several car-pooling websites. Create an application
that calculates your daily driving cost, so that you can estimate how much money could be saved by
car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic
congestion. The application should input the following information and display the user’s cost per
day of driving to work:
a) Total miles driven per day.
b) Cost per gallon of gasoline.
c) Average miles per gallon.
d) Parking fees per day.
e) Tolls per day.
*/

#include<iostream>
using namespace std;

class Carpool{
    int tot_miles,cost_per_gallon,avg_mile,parking,tolls;
public:
    void accept();
    void display();
};

void Carpool::accept(){
    cout<<"\nInformation of daily cost and uses of car all in Rs. and Liters.";
    cout<<"\nTotal miles driven per day: ";
    cin>>tot_miles;
    cout<<"\nCost per gallon of gasoline: ";
    cin>>cost_per_gallon;
    cout<<"\nAverage miles per gallon: ";
    cin>>avg_mile;
    cout<<"\nParking fees per day: ";
    cin>>parking;
    cout<<"\Tolls per day: ";
    cin>>tolls;
}

void Carpool::display(){
    float dailyDrivingCost;
    dailyDrivingCost = ((tot_miles / avg_mile) * cost_per_gallon) + parking + tolls;
    cout<<"\nTotal kilometers driven per day: "<<tot_miles<<"Km";
    cout<<"\nCost per gallon of gasoline: "<<cost_per_gallon<<"Rs/L";
    cout<<"\nAverage kilometers per gallon: "<<avg_mile<<"Km/L";
    cout<<"\nParking fees per day: "<<parking<<"Rs/day";
    cout<<"\nTolls per day: "<<tolls<<"Rs/day";
    cout<<"\nDaily driving cost is: "<<dailyDrivingCost<<"Rs/day";
}

int main(){
    Carpool c1;
    c1.accept();
    c1.display();

    return 0;
} 


