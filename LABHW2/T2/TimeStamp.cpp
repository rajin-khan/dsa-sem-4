#include"TimeStamp.h"
#include<iostream>

using namespace std;

timeStamp::timeStamp() {

    seconds = -1;
    minutes = -1;
    hours = -1;
}

timeStamp::timeStamp(double sec, double min, double hr) {

    seconds = sec;
    minutes = min;
    hours = hr;
}

void timeStamp::setSec(double sec) {

    seconds = sec;
}

void timeStamp::setMin(double min) {

    minutes = min;
}

void timeStamp::setHr(double hr) {

    hours = hr;
}

double timeStamp::getSec() {

    return seconds;
}

double timeStamp::getMin() {

    return minutes;
}

double timeStamp::getHr() {

    return hours;
}

bool timeStamp::operator != (timeStamp t) {

    bool result = ((seconds!=t.seconds) && (minutes!=t.minutes)) && (hours!=t.hours);

    return result;
}

bool timeStamp::operator > (timeStamp t) {

    bool result;
    
    if (hours>t.hours) {

        result = true;
    }
    else if (hours==t.hours && minutes>t.minutes) {

        result = true;
    }
    else if ((hours==t.hours && minutes==t.minutes) && seconds>t.seconds) {

        result = true;
    }
    else {

        result = false;
    }

    return result;
}

bool timeStamp::operator < (timeStamp t) {

    bool result;

    if (hours<t.hours) {

        result = true;
    }
    else if (hours==t.hours && minutes<t.minutes) {

        result = true;
    }
    else if ((hours==t.hours && minutes==t.minutes) && seconds<t.seconds) {

        result = true;
    }
    else {

        result = false;
    }
    
    return result;
}

void timeStamp::print() {

    cout << seconds << ":" << minutes << ":" << hours << endl;
}