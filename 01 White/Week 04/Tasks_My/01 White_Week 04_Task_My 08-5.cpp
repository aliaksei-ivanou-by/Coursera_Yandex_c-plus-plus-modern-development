// Основы разработки на C++: белый пояс. Четвертая неделя
// Задание по программированию: Класс Rational, часть 5
#include <iostream>
#include <sstream>
#include <set>
#include <map>
#include <vector>
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

Rational operator*(const Rational& a, const Rational& b)
{
	return Rational(a.Numerator() * b.Numerator(),
			a.Denominator() * b.Denominator());
}

Rational operator/(const Rational& a, const Rational& b)
{
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
    {
        const set<Rational> rs = {{1, 2}, {1, 25}, {3, 4}, {3, 4}, {1, 2}};
        if (rs.size() != 3)
        {
            cout << "Wrong amount of items in the set" << '\n';
            return 1;
        }

        vector<Rational> v;
        for (auto x : rs)
        {
            v.push_back(x);
        }
        if (v != vector<Rational>{{1, 25}, {1, 2}, {3, 4}})
        {
            cout << "Rationals comparison works incorrectly" << '\n';
            return 2;
        }
    }

    {
        map<Rational, int> count;
        ++count[{1, 2}];
        ++count[{1, 2}];

        ++count[{2, 3}];

        if (count.size() != 2)
        {
            cout << "Wrong amount of items in the map" << '\n';
            return 3;
        }
    }

    cout << "OK" << '\n';
    return 0;
}
