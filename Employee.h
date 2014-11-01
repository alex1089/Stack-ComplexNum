// Employee.h Employee class definition
// Aleksey Leshchuk CISP400
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Date.h"
#include <string>
#include <iostream>	// for operator<< overloading


class Employee{
    public:
	// Employee constructor takes firstName, lastName, and birthDate Date object
	Employee( const char*, 
		const char*,
		const Date&);
	// setFirstName(char) validate and set firstName member
	void setFirstName(const char*);
	// setLastName(char) validate and set lastName member
	void setLastName(const char*);
	// getFirstName() returns string member firstName
	std::string getFirstName() const;
	// getLastName() returns string member lastName
	std::string getLastName() const;
	// getBirthDate() returns birthDate Date object
	Date getBirthDate() const;
	// operator==() overloaded compare operator
	bool operator==(const Employee&) const;
	// print() prints Employee information
	void print() const;
    private:
	std::string firstName;
	std::string lastName;
	Date birthDate;
};

// overloaded operator<<
std::ostream& operator<<(std::ostream, const Employee&);

#endif
