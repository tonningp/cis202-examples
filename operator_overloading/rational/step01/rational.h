#ifndef RATIONAL_H
#define RATIONAL_H
#include<iostream>

class Rational
{
public:
	// Constructors
	Rational();
	Rational(int);
    Rational(int numerator,int denominator);

    void set_numerator(int);     
    int get_numerator() const;
    void set_denominator(int);
    int get_denominator() const;

    Rational _add(const Rational &rhs) const;

    void print(std::ostream &os) const;
    std::string to_string() const;
	Rational operator-() const;

private:
    int m_numerator;
    int m_denominator;

};

std::ostream &operator<<(std::ostream &o,const Rational &rhs);
Rational operator+(const Rational &lhs,const Rational &rhs);
Rational operator-(const Rational &lhs,const Rational &rhs);


#endif
