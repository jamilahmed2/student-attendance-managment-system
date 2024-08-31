#include <iostream>
#include <string>
#include <fstream> // Include this to use file handling
using namespace std;

int main() {
    string stdName[10];
    string AttStatus[10];
    int totalPresent = 0;
    int totalStd = 0;
    int totalAbsent = 0;
    char choice;

    // Open a file to store the data
    ofstream outFile("StudentAttendance.txt", ios::app); // Open in append mode

    if (!outFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    do {
        // Taking/input Student name
        cout << totalStd << " Enter Student Name: ";
        cin >> stdName[totalStd];

        // Taking/input attendance status
        cout << "Enter Student Status (p or P for Present, A for Absent): ";
        cin >> AttStatus[totalStd];

        if (AttStatus[totalStd] == "p" || AttStatus[totalStd] == "P") {
            totalPresent++;
        }

        // Write the data to the file
        outFile << "Student Name: " << stdName[totalStd] << ", Status: " << AttStatus[totalStd] << endl;

        totalStd++;

        // Ask if the user wants to add more students or finish
        cout << "Do you want to add more student details? (y/n): ";
        cin >> choice;

    } while ((choice == 'y' || choice == 'Y') && totalStd < 10);

    totalAbsent = totalStd - totalPresent;

    // Output in terminal
    cout << "Total Present: " << totalPresent << endl;
    cout << "Total Absent: " << totalAbsent << endl;
    cout << "Total Students: " << totalStd << endl;

    // Store attendance summary in StudentAttendance.txt
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
