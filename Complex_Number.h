// Complex_Number.h header
// Aleksey Leshchuk CISP400 AD6

#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H
#include <iostream>

class Complex_Number {
    public:
	// Complex_Number constructor, default values to 0.0
	explicit Complex_Number( const double& =0.0, const double& =0.0 );
	// setReal() sets the real number of the complex number
	void setReal( const double& );
	// setImaginary(double) sets the imaginary number of the object
	void setComplex( const double& );
	// getImaginary() returns the imaginary part of the complex number
	double getImaginary() const;
	// getReal() returns the real part of the complex number
	double getReal() const;
	// operator==(Complex_Number) compares objects for equality
	bool operator==( const Complex_Number& ) const ;
    private:
	double real;
	double imaginary;
};

std::ostream& operator<<(std::ostream&, const Complex_Number&);

#endif
