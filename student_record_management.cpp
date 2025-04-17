#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int id;
    float grade;
};

int main() {
    Student students[10];
    int choice, count = 0;
    bool found = false;
    int searchId;

    while (true) {
        cout << "Menu:\n1. Add student\n2. Display all students\n3. Search by ID\n4. Exit\nEnter Number: ";
        cin >> choice;

        if (choice == 1) {
            if (count < 10) {
                cout << "Enter student name: ";
                cin >> students[count].name;
                cout << "Enter student ID: ";
                cin >> students[count].id;
                cout << "Enter student grade: ";
                cin >> students[count].grade;
                count++;
            } else {
                cout << "Maximum student limit reached.\n";
            }
        } else if (choice == 2) {
            if (count == 0) {
                cout << "No students added yet.\n";
            } else {
                for (int i = 0; i < count; i++) {
                    cout << "Name: " << students[i].name << ", ID: " << students[i].id << ", Grade: " << students[i].grade << endl;
                }
            }
        } else if (choice == 3) {
            cout << "Enter student ID to search: ";
            cin >> searchId;
            found = false;
            for (int i = 0; i < count; i++) {
                if (students[i].id == searchId) {
                    cout << "Student found: Name: " << students[i].name << ", ID: " << students[i].id << ", Grade: " << students[i].grade << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Student with ID " << searchId << " not found.\n";
            }
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
