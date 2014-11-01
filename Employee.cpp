// Employee.cpp Employee class implementation
// Aleksey Leschuk CISP400 AD6

#include <iostream>
#include "Employee.h"
#include "Date.h"
#include <string>
#include <cstring>	// for strlen
using namespace std;

// Employee constructor takes firstName, lastName, and birthDate Date object
Employee::Employee( const char* fName,
	const char* lName,
	const Date& bDate):
    birthDate(bDate) // will validate
{
    setFirstName(fName);
    setLastName(lName);
}

// setFirstName(char) validate and set firstName member
void Employee::setFirstName(const char* name){
    if (strlen(name)>10)	// if first name is longer than 10 char, truncate
	firstName.assign(name,10);
    else
	firstName.assign(name);
}
// setLastName(char) validate and set lastName member
void Employee::setLastName(const char* name){
    if (strlen(name)>15)	// if last name is >15 char, truncate
	lastName.assign(name,15);
    else
	lastName.assign(name);
}
// getFirstName() returns string member firstName
std::string Employee::getFirstName() const{
    return firstName;
}
// getLastName() returns string member lastName
std::string Employee::getLastName() const {
    return lastName;
}

// getBirthDate() returns birthDate Date object
Date Employee::getBirthDate() const {
    return birthDate;
}
// operator==() overloaded compare operator
bool Employee::operator==(const Employee& empObj) const{
    // if all data members are equal, return true
    if (this->firstName == empObj.getFirstName() &&
	    this->lastName == empObj.getLastName() &&
	    this->birthDate == empObj.getBirthDate() )
	return true;
    else 
	return false;
}

// print() prints Employee information
void Employee::print() const{
    cout<<firstName<<" "<<lastName<<" birth date: "<<birthDate;
}

// overloaded operator<<
std::ostream& operator<<(std::ostream& out, const Employee& empObj){
    out<<empObj.getFirstName()<<" "<<empObj.getLastName()<<" birth date: "<<empObj.getBirthDate();
    return out;
}
