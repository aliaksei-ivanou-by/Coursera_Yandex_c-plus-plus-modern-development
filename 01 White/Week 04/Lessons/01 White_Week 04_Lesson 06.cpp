// Основы разработки на C++: белый пояс. Четвертая неделя
// Работа с текстовыми файлами и потоками. Читаем данные через разделитель
#include "iostream"
#include "fstream"
#include "string"
using namespace std;

int main()
{
	ifstream input("Coursera_Yandex_White_Week04_06_data.txt");
	string year;
	string month;
	string day;
	if (input)
	{
		getline(input, year, '-');
		getline(input, month, '-');
		getline(input, day, '-');
	}
	cout << year << ' ' << month << ' ' << day << '\n';
	return 0;
}
