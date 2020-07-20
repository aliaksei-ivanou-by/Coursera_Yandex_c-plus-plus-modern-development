// Основы разработки на C++: желтый пояс. Первая неделя
// Целочисленные типы. Введение в целочисленные типы
#include "iostream"
#include "vector"
#include "limits"
using namespace std;

int main()
{
	{
		vector<int> t = {8, 7, 3};
		int sum = 0;
		for (int x : t)
		{
			sum += x;
		}
		int avg = sum / t.size();
		cout << avg;
	}
	cout << "\n=========\n";
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
	cout << "\n=========\n";
	{
		int x = 2'000'000'000;
		cout << x << ' ';
		x *= 2;
		cout << x;
	}
	cout << "\n=========\n";
	{
		cout << sizeof(int16_t) << '\n';
		cout << sizeof(int) << '\n';
		cout << numeric_limits<int>::min() << ' ' <<
				numeric_limits<int>::max() << '\n';
		cout << sizeof(long int) << '\n';
		cout << numeric_limits<long int>::min() << ' ' <<
				numeric_limits<long int>::max() << '\n';
		cout << sizeof(long long int) << '\n';
		cout << numeric_limits<long long int>::min() << ' ' <<
				numeric_limits<long long int>::max();
	}
	return 0;
}
