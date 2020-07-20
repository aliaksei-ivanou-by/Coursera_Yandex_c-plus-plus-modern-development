// Основы разработки на C++: белый пояс. Четвертая неделя
// Тренировочное задание по программированию: Вывод с точностью
#include "iostream"
#include "fstream"
#include "iomanip"
using namespace std;

int main()
{
	ifstream input("Coursera_Yandex_White_Week04_Task_05_input.txt");
	double line;
	cout << fixed;
	cout << setprecision(3);
	while (input >> line)
	{
		cout << line << '\n';
	}
	return 0;
}
