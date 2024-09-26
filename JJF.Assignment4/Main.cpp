
// Assignment 4 - Pay Report
// Jordan Fredericks

#include <iostream>
#include <conio.h>

struct Employee {
    int ID = 0;
    std::string FirstName;
    std::string LastName;
    float HoursWorked = 0;
    float HourlyRate = 0;
};

int main()
{
    // Get the number of employees to create
    std::cout << "How many employees would you like to process?: ";
    int numEmployees = 0;
    std::cin >> numEmployees;

    // Create the array and get the information for each employee
    Employee* employees = new Employee[numEmployees];
    for (int i = 0; i < numEmployees; i++)
    {
        std::cout << "\nEnter the ID for Employee " << numEmployees << ": ";
        std::cin >> employees[i].ID;

        std::cout << "Enter the First Name for Employee " << numEmployees << ": ";
        std::cin >> employees[i].FirstName;

        std::cout << "Enter the Last Name for Employee " << numEmployees << ": ";
        std::cin >> employees[i].LastName;

        std::cout << "Enter the Hours Worked for Employee " << numEmployees << ": ";
        std::cin >> employees[i].HoursWorked;

        std::cout << "Enter the Hourly Rate for Employee " << numEmployees << ": ";
        std::cin >> employees[i].HourlyRate;
    }

    // Generate the Pay Report
    std::cout << "\nPay Report";
    std::cout << "\n----------";

    for (int i = 0; i < numEmployees; i++)
    {
        std::cout << "\n" << employees[i].ID << ". " << employees[i].FirstName << " " << employees[i].LastName << ": $" << employees[i].HoursWorked * employees[i].HourlyRate;
    }

    // Calculate and display total pay
    float totalPay = 0;
    for (int i = 0; i < numEmployees; i++)
    {
        totalPay = totalPay + (employees[i].HoursWorked * employees[i].HourlyRate);
    }
    std::cout << "\n\nTotal Pay: $" << totalPay;

	(void)_getch();
	return 0;
}
