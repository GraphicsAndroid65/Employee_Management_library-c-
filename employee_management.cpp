#include <iostream>
#include <string>
using namespace std;

const int MAX_EMPLOYEES = 100;

struct Employee {
    string name;
    string employeeId;
    string contactNumber;
    string department;
    string position;
};

Employee employees[MAX_EMPLOYEES];
int employeeCount = 0;

void displayMenu();
void addEmployee();
void modifyEmployee();
void deleteEmployee();
void searchEmployee();
void listEmployees();
void sortEmployees();
void aboutUs();

int main() {
    int choice;
    do {
        displayMenu();
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: addEmployee(); break;
            case 2: modifyEmployee(); break;
            case 3: deleteEmployee(); break;
            case 4: searchEmployee(); break;
            case 5: listEmployees(); break;
            case 6: aboutUs(); break;
            case 7: cout << "Exiting the program.\n"; break;
            default: cout << "Invalid choice. Please try again.\n"; break;
        }
    } while (choice != 7);

    return 0;
}

void displayMenu() {
    cout << "\n====== Office Employee Management System ======\n";
    cout << "\n-- Options --\n";
    cout << "1. Add Employee\n";
    cout << "2. Modify Employee Details\n";
    cout << "3. Delete Employee\n";
    cout << "4. Search An Employee\n";
    cout << "5. List Employees\n";
    cout << "6. About Us\n";
    cout << "7. Exit\n";
}

void addEmployee() {
    if (employeeCount >= MAX_EMPLOYEES) {
        cout << "Employee limit reached. Cannot add more employees.\n";
        return;
    }

    cout << "Enter Employee Name: ";
    getline(cin, employees[employeeCount].name);
    cout << "Enter Employee ID: ";
    getline(cin, employees[employeeCount].employeeId);
    cout << "Enter Contact Number: ";
    getline(cin, employees[employeeCount].contactNumber);
    cout << "Enter Department: ";
    getline(cin, employees[employeeCount].department);
    cout << "Enter Position: ";
    getline(cin, employees[employeeCount].position);

    employeeCount++;
    cout << "Employee added successfully!\n";
}

void modifyEmployee() {
    string empId;
    cout << "Enter Employee ID to modify: ";
    getline(cin, empId);

    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].employeeId == empId) {
            cout << "Enter New Name: ";
            getline(cin, employees[i].name);
            cout << "Enter New Contact Number: ";
            getline(cin, employees[i].contactNumber);
            cout << "Enter New Department: ";
            getline(cin, employees[i].department);
            cout << "Enter New Position: ";
            getline(cin, employees[i].position);
            cout << "Employee details updated successfully!\n";
            return;
        }
    }
    cout << "Employee with ID " << empId << " not found.\n";
}

void deleteEmployee() {
    string empId;
    cout << "Enter Employee ID to delete: ";
    getline(cin, empId);

    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].employeeId == empId) {
            for (int j = i; j < employeeCount - 1; j++) {
                employees[j] = employees[j + 1];
            }
            employeeCount--;
            cout << "Employee deleted successfully!\n";
            return;
        }
    }
    cout << "Employee with ID " << empId << " not found.\n";
}

void searchEmployee() {
    string empId;
    cout << "Enter Employee ID to search: ";
    getline(cin, empId);

    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].employeeId == empId) {
            cout << "Employee Found:\n";
            cout << "Name: " << employees[i].name << "\n";
            cout << "Employee ID: " << employees[i].employeeId << "\n";
            cout << "Contact Number: " << employees[i].contactNumber << "\n";
            cout << "Department: " << employees[i].department << "\n";
            cout << "Position: " << employees[i].position << "\n";
            return;
        }
    }
    cout << "Employee with ID " << empId << " not found.\n";
}

void listEmployees() {
    if (employeeCount == 0) {
        cout << "No employees available.\n";
        return;
    }

    sortEmployees();
    cout << "\nEmployee List (Sorted by Name):\n";
    for (int i = 0; i < employeeCount; i++) {
        cout << "Name: " << employees[i].name 
             << " | ID: " << employees[i].employeeId 
             << " | Number: " << employees[i].contactNumber 
             << " | Department: " << employees[i].department 
             << " | Position: " << employees[i].position << "\n";
    }
}

void sortEmployees() {
    for (int i = 0; i < employeeCount - 1; i++) {
        for (int j = i + 1; j < employeeCount; j++) {
            if (employees[i].name > employees[j].name) {
                swap(employees[i], employees[j]);
            }
        }
    }
}

void aboutUs() {
    cout << "\nAbout Us:\n";
    cout << "This is an Office Employee Management System.\n";
    cout << "Made by Mangesh Choudhary & Sumit Kumar";
    cout << "For more information, visit our GitHub page: ";
    cout << "https://github.com/GraphicsAndroid65/Employee_Management_library-c-";
}
