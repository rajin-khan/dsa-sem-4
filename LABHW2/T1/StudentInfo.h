#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

#include<iostream>

using namespace std;

class studentInfo {

    public:

        studentInfo();
        studentInfo(int id, string name, double cgpa);

        void setID(int id);
        void setName(string name);
        void setCGPA(double cgpa);

        int getID();
        string getName();
        double getCGPA();

        bool operator != (studentInfo);

        void print();

    private:

        int studentID;
        string studentName;
        double CGPA;

};

#endif