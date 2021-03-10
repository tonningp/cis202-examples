#include "gcd.h"
#include "rational.h"

Rational::Rational()
{
   m_numerator = 0;
   m_denominator = 1;
}

Rational::Rational(int n)
{
   m_numerator = n;
   m_denominator = 1;
}

Rational::Rational(int n, int d)
{
   int g = gcd(n, d); // The greatest common divisor
   if (g == 0)
   {
      m_numerator = 0;
      m_denominator = 1;
   }
   else if (d > 0)
   {
      m_numerator = n / g;
      m_denominator = d / g;
   }
   /*
   else
   {
      m_numerator = -n / g;
      m_denominator = -d / g;
   }
   */
}

Rational Rational::operator-() const
{
    return Rational(m_numerator * -1,m_denominator);
}

void Rational::set_numerator(int numerator)
{
    m_numerator = numerator;
}

int  Rational::get_numerator() const
{
    return m_numerator;
}

void Rational::set_denominator(int denominator)
{
    m_denominator = denominator;
}

int  Rational::get_denominator() const
{
    return m_denominator;
}

Rational Rational::_add(const Rational &rhs) const
{
//    int numerator = rhs.m_numerator * m_denominator 
 //                   + m_numerator * rhs.m_denominator;
//                  ------------------------------------
//    int denominator = rhs.m_denominator*m_denominator;
//    return Rational(numerator,denominator);

    return Rational(rhs.m_numerator * m_denominator 
                    + m_numerator * rhs.m_denominator,
//                  ------------------------------------
                    rhs.m_denominator*m_denominator);
}

void Rational::print(std::ostream &os) const
{
    os << to_string() << std::endl;
}


std::string Rational::to_string() const
{
    return std::to_string(m_numerator) + " / " + std::to_string(m_denominator);
}    

std::ostream &operator<<(std::ostream &o,const Rational &rhs)
{
    o << rhs.to_string();
    return o;
}

Rational operator+(const Rational &lhs,const Rational &rhs)
{
    return lhs._add(rhs);
}

Rational operator-(const Rational &lhs,const Rational &rhs)
{
    return lhs._add(-rhs);
}
