#include <iostream>
#include <string>
using namespace std;

int main() {
    string stdName[10];
    string AttStatus[10];
    int totalPresent = 0;
    int totalStd = 10;
    int totalAbsent = 0;


    // Open a file to store the data
    ofstream outFile("StudentAttendance.txt", ios::app); // Open in append mode

    if (!outFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }


    for (int i = 0; i < 10; i++) {

        // Taking/input Student name
        cout << i << " Enter Student Name: ";
        cin >> stdName[i];

        // Taking/ipnut attendance status 
        cout << "Enter Student Status (p or P for Present, A for Absent): ";
        cin >> AttStatus[i];

        if (AttStatus[i] == "p" || AttStatus[i] == "P") {
            totalPresent++;
        }

        // Write the data to the file
        outFile << "Student Name: " << stdName[i] << ", Status: " << AttStatus[i] << endl;
    
    }

    totalAbsent = totalStd - totalPresent;

    // out put in terminal
    cout << "Total Present: " << totalPresent << endl;
    cout << "Total Absent: " << totalAbsent << endl;
    cout << "Total Students: " << totalStd << endl;

    // stored attendance in StudentAttendance.txt
    outFile << "Total Present: " << totalPresent << endl;
    outFile << "Total Absent: " << totalAbsent << endl;
    outFile << "Total Students: " << totalStd << endl;
    outFile << "-----------------------------------" << endl;
 
    // Close the file
    outFile.close();

    // Pause the program before exiting 
    cout << "Press any key or enter key to exit...";
    cin.ignore(); 
    cin.get();    

    return 0;
}
