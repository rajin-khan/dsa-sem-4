#include"StudentInfo.h"
#include<iostream>

using namespace std;

studentInfo::studentInfo() {

    studentID = 0;
    studentName = "null";
    CGPA = -1;
}

studentInfo::studentInfo(int id, string name, double cgpa) {

    studentID = id;
    studentName = name;
    CGPA = cgpa;
}

void studentInfo::setID(int id) {

    studentID = id;
}

void studentInfo::setName(string name) {

    studentName = name;
}

void studentInfo::setCGPA(double cgpa) {

    CGPA = cgpa;
}

int studentInfo::getID() {

    return studentID;
}

string studentInfo::getName() {

    return studentName;
}

double studentInfo::getCGPA() {

    return CGPA;
}

bool studentInfo::operator != (studentInfo s) {

    bool result = studentID != s.studentID;

    return result;
}

void studentInfo::print() {

    cout << studentID << " " << studentName << " " << CGPA << endl;
}

