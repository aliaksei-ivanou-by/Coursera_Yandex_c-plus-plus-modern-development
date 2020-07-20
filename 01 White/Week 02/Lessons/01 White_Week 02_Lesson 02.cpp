// Основы разработки на C++: белый пояс. Вторая неделя
// Функции. Передача параметров функций по значению
#include "iostream"
#include "vector"
#include "string"
using namespace std;

void PrintWords(vector<string> words)
{
	for (auto w : words)
	{
		cout << w << ' ';
	}
}

void ChangeInt(int x)
{
	x = 42;
}

int main()
{
	PrintWords({"air", "water", "fire"});

	cout << "\n\n";

	int a = 5;
	ChangeInt(a);
	cout << a;
	return 0;
}
