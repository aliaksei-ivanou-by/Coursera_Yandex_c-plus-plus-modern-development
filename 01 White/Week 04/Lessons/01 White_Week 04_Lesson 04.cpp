// Основы разработки на C++: белый пояс. Четвертая неделя
// Работа с текстовыми файлами и потоками. Знакомство с потоками ввода и вывода
#include "iostream"
#include "fstream"
#include "string"
using namespace std;

int main()
{
	{
		ifstream input("Coursera_Yandex_White_Week04_04_hello.txt");
		string line;
		getline(input, line);
		cout << line << '\n';
		getline(input, line);
		cout << line << '\n';
		getline(input, line);
		cout << line;
	}
	cout << "\n=========\n";
	{
		ifstream input("Coursera_Yandex_White_Week04_04_hello.txt");
		string line;
		while (getline(input, line))
		{
			cout << line << '\n';
		}
	}
	return 0;
}
