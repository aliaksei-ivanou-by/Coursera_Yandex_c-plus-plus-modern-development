// Основы разработки на C++: белый пояс. Четвертая неделя
// Работа с текстовыми файлами и потоками. Аккуратное создание потока
#include "iostream"
#include "fstream"
#include "string"
using namespace std;

int main()
{
	{
		cout << "1\n";
		ifstream input("Coursera_Yandex_White_Week04_05_hello.txt");
		string line;
		while (getline(input, line))
		{
			cout << line << '\n';
		}
	}
	cout << "\n=========\n";
	{
		cout << "2\n";
		ifstream input("Coursera_Yandex_White_Week04_05_hello1.txt");
		string line;
		while (getline(input, line))
		{
			cout << line << '\n';
		}
	}
	cout << "\n=========\n";
	{
		cout << "3\n";
		ifstream input("Coursera_Yandex_White_Week04_05_hello.txt");
		string line;
		if (input.is_open())
		{
			while (getline(input, line))
			{
				cout << line << '\n';
			}
			cout << "Done!\n";
		}
		else
		{
			cout << "Error\n";
		}
	}
	cout << "\n=========\n";
	{
		cout << "4\n";
		ifstream input("Coursera_Yandex_White_Week04_05_hello11.txt");
		string line;
		if (input.is_open())
		{
			while (getline(input, line))
			{
				cout << line << '\n';
			}
			cout << "Done!\n";
		}
		else
		{
			cout << "Error\n";
		}
	}
	cout << "\n=========\n";
	{
		cout << "5\n";
		ifstream input("Coursera_Yandex_White_Week04_05_hello.txt");
		string line;
		if (input)
		{
			while (getline(input, line))
			{
				cout << line << '\n';
			}
			cout << "Done!\n";
		}
		else
		{
			cout << "Error\n";
		}
	}
	cout << "\n=========\n";
	{
		cout << "6\n";
		ifstream input("Coursera_Yandex_White_Week04_05_hello11.txt");
		string line;
		if (input)
		{
			while (getline(input, line))
			{
				cout << line << '\n';
			}
			cout << "Done!\n";
		}
		else
		{
			cout << "Error\n";
		}
	}
	return 0;
}
