// Основы разработки на C++: белый пояс. Четвертая неделя
// Задание по программированию: Работа с файлами. Чтение и запись в файл
#include "iostream"
#include "fstream"
#include "string"
using namespace std;

int main()
{
	ifstream input("Coursera_Yandex_White_Week04_Task_04_2_input.txt");
	string line;
	ofstream output("Coursera_Yandex_White_Week04_Task_04_2_output.txt");
	while (getline(input, line))
	{
		output << line << '\n';
	}
	return 0;
}
