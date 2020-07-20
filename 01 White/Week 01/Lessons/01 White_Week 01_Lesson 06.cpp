// Основы разработки на C++: белый пояс. Первая неделя
// Обзор возможностей C++. Условия, циклы, комментарии: краткий обзор
#include "iostream"
#include "string"
#include "vector"
using namespace std;

int main()
{
	int x = 4;
	int y = 5;
	if (x == y)
	{
		cout << "equal\n";
	}
	else
	{
		cout << "not equal\n";
	}

	cout << '\n';

	vector<int> nums1 = {1, 2, 3};
	for (auto x : nums1)
	{
		cout << x << ", ";
	}

	cout << "\n\n";
	/* Программа для
	 * подсчета суммы от 1
	 * до N */
	int n1 = 5;
	int sum1 = 0;
	// sum хранит искомую сумму
	for (int i = 1; i<=n1; ++i)
	{
		sum1 += i;
	}
	cout << sum1;

	cout << "\n\n";

	int n2 = 5;
	int sum2 = 0;
	// sum хранит искомую сумму
	int i = 1;
	while (i<=n2)
	{
		sum2 += i;
		i += 1;
	}
	cout << sum2;
	return 0;
}
