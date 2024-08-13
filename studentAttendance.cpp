#include <iostream>
#include <string>
using namespace std;

int main() {
    string stdName[10];
    string AttStatus[10];
    int totalPresent = 0;
    int totalStd = 10;
    int totalAbsent = 0;

    for (int i = 0; i < 10; i++) {
        cout << i << " Enter Student Name: ";
        cin >> stdName[i];

        cout << "Enter Student Status (P for Present, A for Absent): ";
        cin >> AttStatus[i];

        if (AttStatus[i] == "p" || AttStatus[i] == "P") {
            totalPresent++;
        }
    }

    totalAbsent = totalStd - totalPresent;

    cout << "Total Present: " << totalPresent << endl;
    cout << "Total Absent: " << totalAbsent << endl;
    cout << "Total Students: " << totalStd << endl;

    // Pause the program before exiting
    cout << "Press any key or enter key to exit...";
    cin.ignore(); 
    cin.get();    

    return 0;
}
