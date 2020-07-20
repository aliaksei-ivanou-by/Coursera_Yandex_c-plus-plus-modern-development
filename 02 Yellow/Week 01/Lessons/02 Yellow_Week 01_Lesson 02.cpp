// Основы разработки на C++: желтый пояс. Первая неделя
// Целочисленные типы. Преобразования целочисленных типов
#include "iostream"
#include "vector"
#include "limits"
using namespace std;

int main()
{
	{
		cout << numeric_limits<int>::max() + 1 << ' ' <<
				numeric_limits<int>::min() - 1;
	}
	cout << "\n===========\n";
	{
		int x = 2'000'000'000;
		int y = 1'000'000'000;
		cout << (x + y) / 2;
	}
	cout << "\n===========\n";
	{
		int x = 2'000'000'000;
		unsigned int y = x;
		cout << x << ' ' << y;
	}
	cout << "\n===========\n";
	{
		int x = -2'000'000'000;
		unsigned int y = x;
		cout << x << ' ' << y;
	}
	cout << "\n===========\n";
	{
		vector<int> t = {-8, -7, 3};
		int sum = 0;
		for (int x : t)
		{
			sum += x;
		}
		int avg = sum / t.size();
		cout << avg;
	}
	cout << "\n===========\n";
	{
		int x = -1;
		unsigned int y = 1;
		cout << (x < y) << '\n';
		cout << (-1 < 1u);
	}
	return 0;
}
