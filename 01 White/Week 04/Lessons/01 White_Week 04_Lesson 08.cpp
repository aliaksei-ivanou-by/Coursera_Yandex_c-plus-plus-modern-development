// Основы разработки на C++: белый пояс. Четвертая неделя
// Работа с текстовыми файлами и потоками. Форматирование данных при выводе в поток
#include "iostream"
#include "fstream"
#include "string"
#include "vector"
#include "iomanip"
using namespace std;

void Print(const vector<string>& names, const vector<double>& values, int width)
{
	for (const auto& n : names)
	{
		cout << setw(width) << n << '\t';
	}
	cout << '\n';
	cout << fixed << setprecision(6);
	for (const auto& v : values)
	{
		cout << setw(width) << v << '\t';
	}
}

int main()
{
	vector<string> names = {"a", "b", "c"};
	vector<double> values = {5, 0.01, 0.000005};
	cout << setfill('.');
	cout << left;
	Print(names, values, 10);
	return 0;
}
