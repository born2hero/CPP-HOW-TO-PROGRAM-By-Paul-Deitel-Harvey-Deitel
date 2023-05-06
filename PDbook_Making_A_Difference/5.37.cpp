/*
(Global Warming Facts Quiz) The controversial issue of global warming has been widely
publicized by the film An Inconvenient Truth, featuring former Vice President Al Gore. Mr. Gore
and a U.N. network of scientists, the Intergovernmental Panel on Climate Change, shared the 2007
Nobel Peace Prize in recognition of “their efforts to build up and disseminate greater knowledge
about man-made climate change.” Research both sides of the global warming issue online (you
might want to search for phrases like “global warming skeptics”). Create a five-question multiplechoice 
quiz on global warming, each question having four possible answers (numbered 1–4). Be objective and try 
to fairly represent both sides of the issue. Next, write an application that administers
the quiz, calculates the number of correct answers (zero through five) and returns a message to the
user. If the user correctly answers five questions, print “Excellent”; if four, print “Very good”; if
three or fewer, print “Time to brush up on your knowledge of global warming,” and include a list
of the websites where you found your facts.
*/

#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main(){
    cout<<setw(20)<<"MCQ On Global Warming"<<setw(20)<<"\n\n";
    int correct_counter=0,i;
    char option;
    cout<<"Press 1 to start your quiz. ";
    cin>>i;

    switch (i)
    {
    case 1:
        cout<<"\n";
        cout<<"Ques: Global warming also refers to as "<<endl;
        cout<<setw(2)<<"a- Climate change"<<setw(5)<<"b- Ecological change"<<"\n";
        cout<<setw(2)<<"c- Atmoshphere change"<<setw(5)<<"d- None of these"<<"\n";
        cout<<"Choose your option"<<endl;
        cin>>option;
        if(option=='a'){
            correct_counter++;
        }

    case 2:
        cout<<"Which of the following is not a greenhouse gas?"<<endl;
        cout<<setw(2)<<"a- Carbon di-oxide"<<setw(5)<<"b- Methane"<<"\n";
        cout<<setw(2)<<"c- Nitrous oxide"<<setw(5)<<"d- Carbon monoxide"<<"\n";
        cin>>option;
        if(option=='d'){
            correct_counter++;
        }

    case 3:
        cout<<"Which of the following types of sources of energy do not produce carbon di-oxide?"<<endl;
        cout<<setw(2)<<"a- Wind Energy"<<setw(20)<<"b- Geothermal Energy"<<"\n";
        cout<<setw(2)<<"c- Hydroelectric energy"<<setw(20)<<"d- All of the above"<<"\n";
        cin>>option;
        if(option=='d'){
            correct_counter++;
        }

    case 4:
        cout<<"The El-Nino Phenomenon occurs in"<<endl;
        cout<<setw(2)<<"a- Atlantic ocean"<<setw(5)<<"b- Pacific ocean"<<"\n";
        cout<<setw(2)<<"c- Arctic ocean"<<setw(5)<<"d- Indian ocean"<<"\n";
        cin>>option;
        if(option=='b'){
            correct_counter++;
        }

    case 5:
        cout<<"Which of the following is (are) the anticipated effect(s) of Global warming?"<<endl;
        cout<<setw(2)<<"a- Rising sea levels"<<setw(5)<<"b- Changing precipitation"<<"\n";
        cout<<setw(2)<<"c- Expansion of deserts"<<setw(5)<<"d- All of the above"<<"\n";
        cin>>option;
        if(option=='a'){
            correct_counter++;
            cout<<correct_counter;
        }
        break;

    default:
        cout<<"Pressed wrong number. You are disqualified."<<"\n";
        break;
    }

    correct_counter=correct_counter-1;
    cout<<correct_counter<<"\n";
    
    if(correct_counter==5){
        cout<<"Excelent"<<endl;
    }
    else if(correct_counter==4){
        cout<<"Very Good"<<endl;
    }
    else{
        cout<<"Time to brush up on your knowledge of global warming"<<endl;
    }
}