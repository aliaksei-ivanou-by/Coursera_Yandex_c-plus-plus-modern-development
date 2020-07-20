// Основы разработки на C++: белый пояс. Вторая неделя
// Задание по программированию: Факториал (решение)
#include "iostream"
using namespace std;

int Factorial1(int x) {
  int result = 1;
  for (int i = 2; i <= x; ++i) {
    result *= i;
  }
  return result;
}

int Factorial2(int x) {
  if (x <= 1) {
    return 1;
  } else {
    return x * Factorial2(x - 1);  // вычисляем факториал от x-1 и умножаем на x
  }
}

int main()
{
	int n;
	cin >> n;
	cout << Factorial1(n) << '\n';
	cout << Factorial2(n) << '\n';
	return 0;
}

