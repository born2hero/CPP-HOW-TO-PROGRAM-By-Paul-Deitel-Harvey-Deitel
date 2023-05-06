/*
(Distance Between Points) Write function distance that calculates the distance between
two points (x1, y1) and (x2, y2). All numbers and return values should be of type double.
*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double distance(double x1,double y1,double x2,double y2){
    double dist{0};
    dist=sqrt(pow(abs(x2-x1),2)-pow(abs(y2-y1),2));
    cout<<dist;
    return dist;
}

int main(){
    cout<<setprecision(2)<<fixed;
    double x_1,y_1,x_2,y_2;
    cin>>x_1>>y_1>>x_2>>y_2;
    cout<<distance(x_1,y_1,x_2,y_2);
}