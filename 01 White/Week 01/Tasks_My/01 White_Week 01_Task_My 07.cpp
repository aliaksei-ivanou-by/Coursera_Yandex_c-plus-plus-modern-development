// Основы разработки на C++: белый пояс. Первая неделя
// Задание по программированию: Второе вхождение
#include "iostream"
#include "string"
using namespace std;

int main()
{
	string str;
	cin >> str;
	int sum = 0;
	int f = 0;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == 'f')
		{
			f++;
			if (f == 2)
			{
				cout << i;
				break;
			}
		}

	}
	if (f == 1)
	{
		cout << -1;
	}
	if (f == 0)
	{
		cout << -2;
	}
	return 0;
}
