#ifndef GCD_H
#define GCD_H
#include <cstdlib>
int gcd(int a, int b)                  {
	int m = abs(a);
	int n = abs(b);
    while (n != 0)
	{
		int r = m % n;
		m = n;
		n = r;
    }
    return m;
}      

#endif
