// Основы разработки на C++: белый пояс. Четвертая неделя
// Тренировочное задание по программированию: Калькулятор обыкновенных дробей
#include <iostream>
#include <sstream>
#include <exception>
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
    	if (denominator == 0)
    	{
    		throw "Invalid argument";
    	}
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

Rational operator*(const Rational& a, const Rational& b)
{
	return Rational(a.Numerator() * b.Numerator(),
			a.Denominator() * b.Denominator());
}

Rational operator/(const Rational& a, const Rational& b)
{
	if (b.Numerator() == 0)
	{
		throw "Division by zero";
	}
	return Rational(a.Numerator() * b.Denominator(),
			a.Denominator() * b.Numerator());
}

bool operator<(const Rational& a, const Rational& b)
{
	return (double(a.Numerator()) / (double)a.Denominator()) < double(b.Numerator() / (double)b.Denominator());
}

bool operator>(const Rational& a, const Rational& b)
{
	return (double(a.Numerator()) / (double)a.Denominator()) > double(b.Numerator() / (double)b.Denominator());
}

ostream& operator<<(ostream& os, const Rational& a)
{
	return os << a.Numerator() <<'/' << a.Denominator();
}

istream& operator>>(istream& is, Rational& r)
{
	int a;
	int b;
	if (is >> a && is.ignore(1) && is >> b)
	{
		r = {a, b};
	}
	return is;
}

int main()
{
	try
	{
		Rational x;
		Rational y;
		char operation;
		cin >> x >> operation >> y;
		if (operation == '+')
		{
			cout << x + y;
		}
		else
			if (operation == '-')
			{
				cout << x - y;
			}
			else
				if (operation == '*')
				{
					cout << x * y;
				}
				else
				{
					cout << x / y;
				}
	}
	catch(const char* msg)
	{
		cout << msg;
	}
    return 0;
}
