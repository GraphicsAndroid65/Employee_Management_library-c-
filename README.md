# Employee Management library (c++)
This is a simple Employee Management System developed in C++ that allows users to manage employee records. The system provides various functionalities such as adding, modifying, deleting, and searching employee details. It is designed to store employee information such as name, employee ID, contact number, department, and position.

# Features
- Add Employee: Allows users to add a new employee by entering the employee's details such as name, employee ID, contact number, department, and position.

- Modify Employee Details: Users can modify the details of an existing employee by entering the employee ID.

- Delete Employee: Employees can be deleted from the system by searching through the employee ID.

- Search Employee: This feature enables users to search for employees by their ID, displaying their details if found.

- List Employees: Displays a sorted list of all employees based on their name in alphabetical order.

- About Us: Provides details about the system and includes a link to the project's GitHub page.

# Key Concepts Used
1. Functions
- Functions break down tasks into manageable blocks. Each action (adding, modifying, deleting, etc.) is handled by a separate function, making the code more organized and reusable.

2. Switch-Case Statement

- The switch-case handles user input from the menu. Based on the choice (1-7), the program performs corresponding actions like adding or modifying employees.

3. Loops

- do-while: Repeatedly displays the menu until the user exits.

- for: Used for iterating over the list of employees, such as displaying or sorting them.

4. Sorting (Bubble Sort)

- Employees are sorted alphabetically by name using the Bubble Sort algorithm, which swaps adjacent employees if they're in the wrong order.

5. Arrays and Structures

- The Employee structure holds attributes like name, ID, and contact number. An array of structures (employees[MAX_EMPLOYEES]) stores employee records.

6. String Handling

- C++ string type is used to manage text inputs (like employee names or positions), with getline() used for multi-word inputs.

# Code Structure

    Employee Structure: Represents employee details like name, ID, contact number, department, and position.

    Global Variables:

        employees[MAX_EMPLOYEES]: Array to store employee records.

        employeeCount: Tracks the number of employees.

    Functions:

        addEmployee(): Adds a new employee.

        modifyEmployee(): Modifies employee details.

        deleteEmployee(): Removes an employee.

        searchEmployee(): Searches for an employee by ID.

        listEmployees(): Lists all employees sorted by name.

        sortEmployees(): Sorts employees alphabetically by name.

        displayMenu(): Displays the menu.

        aboutUs(): Displays project info and GitHub link.

    Main Function: Contains a loop that displays the menu and handles user input.

## Developers

This project was proudly developed by:

- **Mangesh Choudhary**
- **Sumit Kumar**

📧 Contact:
For questions or feedback, reach out at GraphicsAnd65@gmail.com

## Acknowledgments

We would like to thank our college and instructor for guiding us through the Web Technology subject and giving us the opportunity to learn by creating this project.
