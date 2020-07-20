// Основы разработки на C++: белый пояс. Первая неделя
// Задание по программированию: Минимальная строка
#include "iostream"
#include "string"
using namespace std;

int main()
{
	string a;
	string b;
	string c;
	cin >> a >> b >> c;
	if (a <= b && a <= c)
	{
		cout << a;
	}
	else
		if (b <= a && b <= c)
		{
			cout << b;
		}
		else
			if (c <= a && c <= b)
			{
				cout << c;
			}
	return 0;
}
