// Основы разработки на C++: белый пояс. Четвертая неделя
// Задание по программированию: Класс Rational, часть 1
#include <iostream>
using namespace std;

class Rational
{
public:
	Rational()
	{
		numer = 0;
		denom = 1;
    }

    Rational(int numerator, int denominator)
    {
    	numer = numerator;
    	denom = denominator;
    	normal();
    }

    int Numerator() const
    {
    	return numer;
    }

    int Denominator() const
    {
    	return denom;
    }
private:
    int numer;
    int denom;
    int gcd(int a, int b)
    {
    	while (b != 0)
    	{
    		int t = b;
    		b = a % b;
    		a = t;
    	}
    	return a;
    }
    void normal()
    {
    	if (denom < 0)
    	{
    		if (numer < 0)
    		{
    			denom = abs(denom);
    			numer = abs(numer);
    		}
    		else
    		{
    			denom = abs(denom);
    			numer = numer - 2 * numer;
    		}
    	}
    	if (numer == 0)
    	{
    		denom = 1;
    	}
    	int nod = NOD(abs(denom), abs(numer));
    	numer = numer / nod;
    	denom = denom / nod;
    }
    int NOD(int a, int b)
    {
    	while (a > 0 && b > 0)
    	{
    		if (a > b)
    		{
    			a = a % b;
    		}
    		else
    		{
    			b = b % a;
    		}
    	}
    	return a + b;
    }
};

int main()
{
	{
		const Rational r(3, 10);
        if (r.Numerator() != 3 || r.Denominator() != 10)
        {
            cout << "Rational(3, 10) != 3/10" << '\n';
            return 1;
        }
    }

    {
        const Rational r(8, 12);
        if (r.Numerator() != 2 || r.Denominator() != 3)
        {
            cout << "Rational(8, 12) != 2/3" << '\n';
            return 2;
        }
    }

    {
        const Rational r(-4, 6);
        if (r.Numerator() != -2 || r.Denominator() != 3)
        {
            cout << "Rational(-4, 6) != -2/3" << '\n';
            return 3;
        }
    }

    {
        const Rational r(4, -6);
        if (r.Numerator() != -2 || r.Denominator() != 3)
        {
            cout << "Rational(4, -6) != -2/3" << '\n';
            return 3;
        }
    }

    {
        const Rational r(0, 15);
        if (r.Numerator() != 0 || r.Denominator() != 1)
        {
            cout << "Rational(0, 15) != 0/1" << '\n';
            return 4;
        }
    }

    {
        const Rational defaultConstructed;
        if (defaultConstructed.Numerator() != 0 || defaultConstructed.Denominator() != 1)
        {
            cout << "Rational() != 0/1" << '\n';
            return 5;
        }
    }

    cout << "OK" << '\n';
    return 0;
}
