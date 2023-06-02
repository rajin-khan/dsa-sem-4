#include<iostream>

using namespace std;

double calcCGPA(int* credit, double* grade, int courses) {

    double GP;
    double creditSum = 0;
    double CGPA = 0;

    for (int i=0; i<courses; i++) {

        GP += credit[i]*grade[i];
    }

    for (int i=0; i<courses; i++) {

        creditSum += credit[i];
    }

    CGPA = GP/creditSum;
    
    return CGPA;
    
}

int main() {

    int courses;
    double gradePoint;

    cout << "\nHow many courses have you taken this semester?\n" << "Enter number of courses: ";
    cin >> courses;

    int* credit = new int[courses];
    double* grade = new double[courses];

    for (int i=0; i<courses; i++) {

        gradePoint = 0;
        string result;

        cout << "\nEnter the number of credits for course " << i << ": ";
        cin >> credit[i];

        cout << "Enter the grade for course " << i << ": ";
        cin >> result;

        if ((result=="A")||(result=="a")) {

            gradePoint = 4.0;

        } else if ((result=="A-")||(result=="a-")) {

            gradePoint = 3.70;

        } else if ((result=="B+")||(result=="b+")) {

            gradePoint = 3.30;

        } else if ((result=="B")||(result=="b")) {

            gradePoint = 3.0;

        } else if ((result=="B-")||(result=="b-")) {

            gradePoint = 2.70;

        } else if ((result=="C+")||(result=="c+")) {

            gradePoint = 2.30;

        } else if ((result=="C")||(result=="c")) {

            gradePoint = 2.0;

        } else if ((result=="C-")||(result=="c-")) {

            gradePoint = 1.70;

        } else if ((result=="D+")||(result=="d+")) {

            gradePoint = 1.30;

        } else if ((result=="D")||(result=="D")) {

            gradePoint = 1.0;

        } else if ((result=="F")||(result=="f")) {

            gradePoint = 1.0;

        } else {

            cout << "Not a valid grade, terminate the program and try again.";
        }

        grade[i] = gradePoint;
    }

    double CGPA = calcCGPA(credit, grade, courses);

    cout << "\nYour CGPA for this semester is: " << CGPA << endl << endl;


    return 0;
}