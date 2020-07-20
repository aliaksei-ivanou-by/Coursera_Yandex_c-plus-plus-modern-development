// Основы разработки на C++: белый пояс. Вторая неделя
// Тренировочное задание по программированию: Максимизатор (решение)
#include "iostream"
using namespace std;

void UpdateIfGreater(int a, int& b) {
    if (a > b) {
        b = a;
    }
}
int main()
{
	int a = 4;
	int b = 2;
	UpdateIfGreater(a, b);
	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';
	return 0;
}
