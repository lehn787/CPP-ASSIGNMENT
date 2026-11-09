#include <iostream>
using namespace std;

int main(){
    int students;
    int marks[100];

    cout << "Enter number of students: ";
    cin >> students;

    while (students < 1 || students > 100)
    {
        cout << "Invalid input! Number of students must be between 1 and 100.\n";
        cout << "Enter again: ";
        cin >> students;
    }
--------------------------------
    int total = 0;
    int passed = 0;
    int failed = 0;

    for (int i = 0; i < students; i++)
    {
        cout << "Enter mark for student " << i + 1 << ": ";
        cin >> marks[i];

        total += marks[i];

        if (marks[i] >= 40)
            passed++;
        else
            failed++;
    }
-----------------------
    int highest = marks[0];
    int lowest = marks[0];

    for (int i = 1; i < students; i++)
    {
        if (marks[i] > highest)
            highest = marks[i];

        if (marks[i] < lowest)
            lowest = marks[i];
    }
-----------------------------------
    double average = (double)total / students;

    cout << "\n----- REPORT -----\n";
    cout << "Total Marks : " << total << endl;
    cout << "Average     : " << average << endl;
    cout << "Highest Mark: " << highest << endl;
    cout << "Lowest Mark : " << lowest << endl;
    cout << "Passed      : " << passed << endl;
    cout << "Failed      : " << failed << endl;

    return 0;
}