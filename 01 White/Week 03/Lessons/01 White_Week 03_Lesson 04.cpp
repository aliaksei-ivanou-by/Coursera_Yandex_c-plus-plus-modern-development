// Основы разработки на C++: белый пояс. Третья неделя
// Видимость и инициализация переменных. Области видимости переменных
#include "iostream"
#include "vector"
#include "string"
using namespace std;

int main()
{
	int x = 5;
	cout << x << '\n';
	{
		int xx = 5;
		{
			cout << xx << '\n';
		}
		cout << xx << '\n';
	}
	// cout << xx << '\n';

	if (1 > 0)
	{
		int xxx = 5;
	}
	// cout << xxx << '\n';
	for (int i = 0; i < 10; ++i)
	{
		int xxxx = 5;
	}
	// cout << xxxx << '\n';
	// cout << i << '\n';

	string s = "hello";
	{
		string s = "world";
		cout << s << '\n';
	}
	cout << s << '\n';
	return 0;
}
