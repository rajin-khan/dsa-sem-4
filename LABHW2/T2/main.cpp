#include"SortedType.cpp"

#include<iostream>

using namespace std;

int main() {

    //create a list of objects of class timeStamp

    SortedType<timeStamp> s1;

    int seconds;
    int minutes;
    int hours;

    timeStamp t1(-1, -1, -1);

    //insert 5 values for timeStamp in the format ss mm hh

    cout << "\nEnter 5 time stamps (in the format ss mm hh) : " << endl;

    cout << endl;
    
    for (int i=0; i<5; i++) {

        cin >> seconds >> minutes >> hours;
        
        timeStamp t2(seconds, minutes, hours);
        s1.InsertItem(t2);
    }

    cout << endl;

    //delete the time stamp 25 36 17

    cout << "Enter the time stamp you would like to delete (in the format ss mm hh): ";

    cin >> seconds >> minutes >> hours;

    for (int i=0; i<s1.LengthIs(); i++) {

        s1.GetNextItem(t1);

        if ((t1.getSec()==seconds && t1.getMin()==minutes) && t1.getHr()==hours) {

            s1.DeleteItem(t1);
        }

    }

    cout << endl;

    s1.ResetList();

    //print the list

    for (int i=0; i<s1.LengthIs(); i++) {

        s1.GetNextItem(t1);
        
        cout << t1.getSec() << ":" << t1.getMin() << ":" << t1.getHr() << endl;
    }

    cout << endl;

    s1.ResetList();

    return 0;
}