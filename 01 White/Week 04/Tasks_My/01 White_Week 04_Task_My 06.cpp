// Основы разработки на C++: белый пояс. Четвертая неделя
// Задание по программированию: Чтение и вывод таблицы
#include "iostream"
#include "fstream"
#include "iomanip"
using namespace std;

int main()
{
	ifstream input("Coursera_Yandex_White_Week04_Task_06_input.txt");
	string line;
	int N;
	int M;
	input >> N >> M;
	input.ignore(1);
	for (int i = N; i > 0;--i)
	{
		for (int z = M; z > 1; --z)
		{
			getline(input, line, ',');
			cout << setw(10) << line << ' ';
		}
		getline(input, line);
		cout << setw(10) << line << '\n';
	}
	return 0;
}
