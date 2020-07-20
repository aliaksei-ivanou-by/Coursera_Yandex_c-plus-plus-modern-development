// Основы разработки на C++: белый пояс. Четвертая неделя
// Работа с текстовыми файлами и потоками. Операторы ввода/вывода и запись в конец файла
#include "iostream"
#include "fstream"
#include "string"
using namespace std;

void ReadAll(const string& path)
{
	ifstream input(path);
	if (input)
	{
		string line;
		while (getline(input, line))
		{
			cout << line << '\n';
		}
	}
}

int main()
{
	{
		ifstream input1("Coursera_Yandex_White_Week04_07_data.txt");
		int year = 0;
		int month = 0;
		int day = 0;
		if (input1)
		{
			input1 >> year;
			input1.ignore(1);
			input1 >> month;
			input1.ignore(1);
			input1 >> day;
		}
		cout << year << ' ' << month << ' ' << day << '\n';
	}
	cout << "\n===========\n";
	{
		const string path = "Coursera_Yandex_White_Week04_07_output.txt";
		ofstream output2(path);
		output2 << "hello" << '\n';
		output2.close();

		ifstream input2(path);
		if (input2)
		{
			string line2;
			while (getline(input2, line2))
			{
				cout << line2 << '\n';
			}
		}
	}
	cout << "\n===========\n";
	{
		const string path = "Coursera_Yandex_White_Week04_07_output.txt";
		ofstream output3(path);
		output3 << "hello" << '\n';
		output3.close();

		ReadAll(path);
	}
	cout << "\n===========\n";
	{
		const string path = "Coursera_Yandex_White_Week04_07_output.txt";
		ofstream output3(path, ios::app);
		output3 << " world!" << '\n';
		output3.close();

		ReadAll(path);
	}
	return 0;
}
