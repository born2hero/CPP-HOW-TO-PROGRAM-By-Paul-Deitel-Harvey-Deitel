/*
(CarbonFootprint Abstract Class: Polymorphism) Using an abstract class with only pure virtual functions, 
you can specify similar behaviors for possibly disparate classes. Governments and
companies worldwide are becoming increasingly concerned with carbon footprints (annual releases
of carbon dioxide into the atmosphere) from buildings burning various types of fuels for heat, 
vehicles burning fuels for power, and the like. Many scientists blame these greenhouse gases for 
the phenomenon called global warming. Create three small classes unrelated by inheritance—classes
Building, Car and Bicycle. Give each class some unique appropriate attributes and behaviors that
it does not have in common with other classes. Write an abstract class CarbonFootprint with only
a pure virtual getCarbonFootprint method. Have each of your classes inherit from that abstract class
and implement the getCarbonFootprint method to calculate an appropriate carbon footprint for
that class (check out a few websites that explain how to calculate carbon footprints). Write an 
application that creates objects of each of the three classes, places pointers to those objects in a vector
of CarbonFootprint pointers, then iterates through the vector, polymorphically invoking each 
object’s getCarbonFootprint method. For each object, print some identifying information and the 
object’s carbon footprint.
*/

/*
Carbon emission
Other Emissions = Total Quantity * 0.001102 * GWP Emission Factor
*/
/*
Travel Carbon Footprint = ((Distance Traveled + Fuel Usage) * Emission Factor * Heating Value * Density)
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class CarbonFootprint{
public:
    CarbonFootprint(const std::string&,const std::string&);
    virtual ~CarbonFootprint()=default;

    void setTotalQuantity(const std::string&) ;
    std::string getTotalQuantity() const;

    void setGWP(const std::string&);
    std::string getGWP() const;

    virtual double getCarbonFootprint() const=0;
    virtual std::string toString() const;
private:
    std::string tot_quantity;
    std::string GWP;
};

class Building:public CarbonFootprint{
public:
    Building(const std::string&,const std::string&,double=0.0);
    virtual ~Building()=default;
    void getCarbon();


private:
};

class Car:public CarbonFootprint{

public:
    void getCarbon();
private:

};

class Bicycle:public CarbonFootprint{

public:
    void getCarbon();
private:

};

int main(){
    vector<CarbonFootprint *> carbon(3);
    carbon[0]=new Building;
    carbon[1]=new Car;
    carbon[2]=new Bicycle;

    for(auto i:carbon){
        i->getCarbonFootprint();
    }
    return 0;
}