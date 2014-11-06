// Complex.cpp class implementation
// Aleksey Leshchuk CISP400 AD6

#include <iostream>
#include <cmath>    // for fabs()
#include <iomanip>
#include "Complex.h"

// Complex constructor, default values to 0.0
Complex::Complex( const double& re, const double& imagin ):
    real(re),
    imaginary(imagin) {}
// setReal() sets the real number of the complex number
void Complex::setReal( const double& re) {
    real=re;
}
// setImaginary(double) sets the imaginary number of the object
void Complex::setComplex( const double& imagin ) {
    imaginary=imagin;
}
// getReal() returns the real part of the complex number
double Complex::getReal() const {
    return real;
}
// getImaginary() returns the imaginary part of the complex number
double Complex::getImaginary() const {
    return imaginary;
}

// operator==(Complex) compares objects for equality
bool Complex::operator==( const Complex& complexObj ) const {
    if (this->real == complexObj.getReal() &&
	    this->imaginary == complexObj.getImaginary() ) // if both parts of complex object are equal
	return true;
    else 
	return false;
}
//overloaded operator<< for use with ostream
std::ostream& operator<<(std::ostream& out, const Complex& complexObj) {
    out<<complexObj.getReal();
    out<<(complexObj.getImaginary()>=0?" + ":" - ");	//   if imaginary part positive, display + , else -
    out<<fabs(complexObj.getImaginary())<<"i";
     return out;
}
