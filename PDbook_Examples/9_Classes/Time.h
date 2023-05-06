#include<string>

// prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

class Time{
private:
    unsigned int hour{0};
    unsigned int minute{0};
    unsigned int second{0};
public:
    explicit Time(int=0,int=0,int=0);

    void setTime(int,int,int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;

    std::string toUniversalString() const;
    std::string toStandardString() const;
};

#endif
