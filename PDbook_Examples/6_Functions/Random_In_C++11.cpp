#include<iostream>
#include<random>
#include<ctime>
using namespace std;

int main(){
    default_random_engine engine(static_cast<unsigned int> (time(0)));
    uniform_int_distribution<unsigned int> randomInt(1,6);

    for(int i=0;i<100;i++){
        cout<<randomInt(engine)<<"\n";
    }
}
