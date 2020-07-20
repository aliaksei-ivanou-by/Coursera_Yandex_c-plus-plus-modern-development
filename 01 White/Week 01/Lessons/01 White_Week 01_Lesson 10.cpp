// Основы разработки на C++: белый пояс. Первая неделя
// Условный оператор и циклы. Условный оператор if
#include "iostream"
using namespace std;

int main()
{
	int a;
	int b;
	cin >> a >> b;
	if (a == b)
	{
		cout << "equal" << '\n';
		cout << a;
	}
	else
	{
		cout << "not equal" << '\n';
		cout << a << ' ' << b << '\n';
	}

	cout << '\n';

	int aa=-1;
	if (aa >= 0)
	{
		if (aa > 0)
			cout << "positive";
	}
	else
	{
		cout << "negative";
	}
 	return 0;
}
