// Complex_Number.cpp class implementation
// Aleksey Leshchuk CISP400 AD6

#include <iostream>
#include <cmath>    // for fabs()
#include <iomanip>
#include "Complex_Number.h"

// Complex_Number constructor, default values to 0.0
Complex_Number::Complex_Number( const double& re, const double& imagin ):
    real(re),
    imaginary(imagin) {}
// setReal() sets the real number of the complex number
void Complex_Number::setReal( const double& re) {
    real=re;
}
// setImaginary(double) sets the imaginary number of the object
void Complex_Number::setComplex( const double& imagin ) {
    imaginary=imagin;
}
// getReal() returns the real part of the complex number
double Complex_Number::getReal() const {
    return real;
}
// getImaginary() returns the imaginary part of the complex number
double Complex_Number::getImaginary() const {
    return imaginary;
}

// operator==(Complex_Number) compares objects for equality
bool Complex_Number::operator==( const Complex_Number& complexObj ) const {
    if (this->real == complexObj.getReal() &&
	    this->imaginary == complexObj.getImaginary() ) // if both parts of complex object are equal
	return true;
    else 
	return false;
}
//overloaded operator<< for use with ostream
std::ostream& operator<<(std::ostream& out, const Complex_Number& complexObj) {
    out<<complexObj.getReal();
    out<<(complexObj.getImaginary()>=0?" + ":" - ");	//   if imaginary part positive, display + , else -
    out<<fabs(complexObj.getImaginary())<<"i";
     return out;
}
