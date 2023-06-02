#include"UnsortedType.cpp"
#include<iostream>

using namespace std;

int main() {

    //create a list of objects of class studentInfo

    UnsortedType<studentInfo> u1;

    int inputID;
    string inputName;
    double inputCGPA;
    bool found;

    studentInfo s1(0, "null", -1);

    //insert 5 student records

    cout << "\nEnter the records of 5 students: " << endl << endl;

    for (int i=0; i<5; i++) {

        cin >> inputID >> inputName >> inputCGPA;

        studentInfo s2(inputID, inputName, inputCGPA);
        u1.InsertItem(s2);
    }

    cout << endl;

    //delete the record with ID 15467

    cout << "Enter the ID of the student whose record you would like to delete: ID";

    cin >> inputID;

    for (int i=0; i<u1.LengthIs(); i++) {

        u1.GetNextItem(s1);
        if (s1.getID()==inputID) {

            u1.DeleteItem(s1);
            break;
        }
    }

    u1.ResetList();
    cout << endl;

    //retrieve record

    cout << "Enter the ID of the student whose record you would like to retrieve: ID";

    cin >> inputID;

    bool flag = false;

    for (int i=0; i<u1.LengthIs(); i++) {

        u1.GetNextItem(s1);
        if (s1.getID()==inputID) {

            flag = true;
            break;
        }
    }

    if (flag) {

        cout << "Item is found" << endl;
        s1.print();
    }
    else {

        cout << "Item is not found";
    }

    u1.ResetList();
    cout << endl;

    //print the list

    for (int i=0; i<u1.LengthIs(); i++) {

        u1.GetNextItem(s1);
        
        s1.print(); 
    }

    cout << endl;

    return 0;
}