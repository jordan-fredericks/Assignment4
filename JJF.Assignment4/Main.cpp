
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
    std::cout << "How many employees would you like to process?: " << "\n";
    int numEmployees = 0;
    std::cin >> numEmployees;

    Employee* employees = new Employee[numEmployees];
    for (int i = 0; i < numEmployees; i++)
    {
        std::cout << "Enter the ID for Employee " << numEmployees << ": ";
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

	(void)_getch();
	return 0;
}
