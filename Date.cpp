// Fig. 9.18: Date.cpp
// Date class member-function definitions.
// Aleksey Leshchuk CISP400
// AD6
#include <array>
#include <iostream>
#include <string>
#include "Date.h" // include Date class definition
using namespace std;

// non member overloaded operator<< function for Date object
std::ostream& operator<<(std::ostream& ost, const Date& dateObj){
    // months of the year array for output
    std::string months[12] = {"January","February","March","April","May",
				"June","July","August","September","October",
				"November","December"};
    ost<<months[dateObj.getMonth()-1]<<" "<<dateObj.getDay()<<", "<<dateObj.getYear();
    return ost;
}

// constructor confirms proper value for month; calls
// utility function checkDay to confirm proper value for day
Date::Date( const int& mn, const int& dy, const int& yr ){
   if ( mn > 0 && mn <= monthsPerYear ){ // validate the monthfter the 8/8/2013 update,\nthe Accounts information***\n
      month = mn;
    } else {
	cout<<"Invalid month ("<<mn<<") set to 1.\n";
	month=1;
   }

   if (yr>1900 && yr<2020){
       year = yr; // could validate yr
   } else {
       year=2011;
       cout<<"Invalid year ("<<yr<<") set to 2011.\n";
   }
   day = checkDay( dy ); // validate the day
   

} // end Date constructor

// operator==(Date) compares two Date objects for equality
bool Date::operator== (const Date& other) const {
    // test each data member for equality, return result
    if (this->month == other.month && this->day == other.day && this->year == other.year)
	return true;
    else 
	return false;
}
// print Date object in form month/day/year
void Date::print() const{
   cout << month << '/' << day << '/' << year; 
} // end function print

// getMonth() returns int month
int Date::getMonth() const {
    return month;
}

// getDay() returns int day
int Date::getDay() const {
    return day;
}

// getYear() returns year member
int Date::getYear() const {
    return year;
}
// output Date object to show when its destructor is called
Date::~Date()
{ 
} // end ~Date destructor

// utility function to confirm proper day value based on 
// month and year; handles leap years, too
int Date::checkDay( const int& testDay ) const
{
   static const array< int, monthsPerYear + 1 > daysPerMonth = 
      { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   // determine whether testDay is valid for specified month
   if ( testDay > 0 && testDay <= daysPerMonth[ month ] )
      return testDay;

   // February 29 check for leap year 
   if ( month == 2 && testDay == 29 && ( year % 400 == 0 || 
      ( year % 4 == 0 && year % 100 != 0 ) ) )
      return testDay;

   cout<<"day ("<<testDay<<") set to 1.\n";	// if all test fail, set day to 1
   return 1; 
} // end function checkDay


/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
