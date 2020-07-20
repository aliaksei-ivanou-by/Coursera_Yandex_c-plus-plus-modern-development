// Основы разработки на C++: белый пояс. Вторая неделя
// Функции. Введение в функции
#include "iostream"
#include "vector"
#include "string"
using namespace std;

int Sum(int x, int y)
{
	return x + y;
}
bool Contains(vector<string> words, string w)
{
	for (auto s : words)
	{
		if (s == w)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int x1;
	int y1;
	cin >> x1 >> y1;
	cout << x1 + y1;

	cout << "\n\n";

	int x2;
	int y2;
	cin >> x2 >> y2;
	cout << Sum(x2, y2);

	cout << "\n\n";

	cout << Contains({"air", "fire", "water"}, "milk");
	return 0;
}
