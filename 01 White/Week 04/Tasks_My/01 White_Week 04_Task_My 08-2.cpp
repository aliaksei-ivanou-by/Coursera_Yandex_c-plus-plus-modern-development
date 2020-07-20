// Основы разработки на C++: белый пояс. Четвертая неделя
// Задание по программированию: Класс Rational, часть 2
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

bool operator==(const Rational& a, const Rational& b)
{
	if (a.Numerator() == b.Numerator() && a.Denominator() == b.Denominator())
	{
		return true;
	}
	else
	{
		return false;
	}
}

Rational operator+(const Rational& a, const Rational& b)
{
	return Rational(a.Numerator() * b.Denominator() + a.Denominator() * b.Numerator(),
			a.Denominator() * b.Denominator());
}

Rational operator-(const Rational& a, const Rational& b)
{
	return Rational(a.Numerator() * b.Denominator() - a.Denominator() * b.Numerator(),
			a.Denominator() * b.Denominator());
}

int main()
{
	{
        Rational r1(4, 6);
        Rational r2(2, 3);
        bool equal = r1 == r2;
        if (!equal)
        {
            cout << "4/6 != 2/3" << '\n';
            return 1;
        }
    }

    {
        Rational a(2, 3);
        Rational b(4, 3);
        Rational c = a + b;
        bool equal = c == Rational(2, 1);
        if (!equal)
        {
            cout << "2/3 + 4/3 != 2" << '\n';
            return 2;
        }
    }

    {
        Rational a(5, 7);
        Rational b(2, 9);
        Rational c = a - b;
        bool equal = c == Rational(31, 63);
        if (!equal)
        {
            cout << "5/7 - 2/9 != 31/63" << '\n';
            return 3;
        }
    }

    cout << "OK" << '\n';
    return 0;
}
