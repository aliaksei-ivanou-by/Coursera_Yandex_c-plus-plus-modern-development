// Основы разработки на C++: белый пояс. Четвертая неделя
// Задание по программированию: Работа с файлами. Чтение из файла
#include "iostream"
#include "fstream"
#include "string"
using namespace std;

int main()
{
	ifstream input("Coursera_Yandex_White_Week04_Task_04_1_input.txt");
	string line;
	while (getline(input, line))
	{
		cout << line << '\n';
	}
	return 0;
}
