// Основы разработки на C++: белый пояс. Четвертая неделя
// Задание по программированию: Исключения в классе Rational (решение)
#include <iostream>
#include <exception>

using namespace std;

int GreatestCommonDivisor(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return GreatestCommonDivisor(b, a % b);
  }
}

class Rational {
public:
  Rational() {
    numerator = 0;
    denominator = 1;
  }
  Rational(int new_numerator, int new_denominator) {
    if (new_denominator == 0) {
      // бросаем исключение в случае нулевого знаменателя
      throw invalid_argument("");
    }
    const int gcd = GreatestCommonDivisor(new_numerator, new_denominator);
    numerator = new_numerator / gcd;
    denominator = new_denominator / gcd;
    if (denominator < 0) {
      denominator = -denominator;
      numerator = -numerator;
    }
  }

  int Numerator() const {
    return numerator;
  }

  int Denominator() const {
    return denominator;
  }

private:
  int numerator;
  int denominator;
};

Rational operator * (const Rational& lhs, const Rational& rhs) {
  return {
      lhs.Numerator() * rhs.Numerator(),
      lhs.Denominator() * rhs.Denominator()
  };
}

Rational operator / (const Rational& lhs, const Rational& rhs) {
  // проверяем делитель на 0 (что равносильно проверке на 0 его числителя)
  if (rhs.Numerator() == 0) {
    throw domain_error("");
  }
  return lhs * Rational(rhs.Denominator(), rhs.Numerator());
}

int main()
{
    try
    {
        Rational r(1, 0);
        cout << "Doesn't throw in case of zero denominator" << '\n';
        return 1;
    } catch (invalid_argument&)
    {
    }

    try {
        auto x = Rational(1, 2) / Rational(0, 1);
        cout << "Doesn't throw in case of division by zero" << '\n';
        return 2;
    } catch (domain_error&)
    {
    }

    cout << "OK" << '\n';
    return 0;
}

