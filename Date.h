// Fig. 9.17: Date.h 
// Date class definition; Member functions defined in Date.cpp
#ifndef DATE_H
#define DATE_H

#include <iostream>	// for operator<< overload

class Date {
public:
   static const unsigned int monthsPerYear = 12; // months in a year
   explicit Date( const int& = 1, const int& = 1, const int& = 1900 ); // default constructor
   // operator==(Date) compares two Date objects for equality
   bool operator== (const Date&) const;
   void print() const; // print date in month/day/year format
    // getMonth() returns int month
    int getMonth() const;
    // getDay() returns int day
    int getDay() const;
    // getYear() returns year member
    int getYear() const;
   ~Date(); // provided to confirm destruction order
private:
   unsigned int month; // 1-12 (January-December)
   unsigned int day; // 1-31 based on month
   unsigned int year; // any year

   // utility function to check if day is proper for month and year
   unsigned int checkDay( const int& ) const; 
}; // end class Date

// non member overloaded operator<< function for Date object
std::ostream& operator<<(std::ostream& ost, const Date& dateObj);
#endif

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
