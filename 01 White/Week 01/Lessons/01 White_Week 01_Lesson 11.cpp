// Основы разработки на C++: белый пояс. Первая неделя
// Условный оператор и циклы. Цикл while
#include "iostream"
using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n >= 0)
	{
		int sum = 0;
		while (n > 0)
		{
			sum += n;
			--n;
		}
		cout << sum;
	}
	else
	{
		cout << "Please, enter positive number";
	}

	cout << "\n\n";

	int a=5;
	int b;
	do
	{
		cout << "Guess the number: ";
		cin >> b;
	} while (a != b);
	cout << "You are right!";
	return 0;
}
