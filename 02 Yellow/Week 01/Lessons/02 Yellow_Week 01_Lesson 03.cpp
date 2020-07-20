// Основы разработки на C++: желтый пояс. Первая неделя
// Целочисленные типы. Безопасное использование целочисленных типов
#include "iostream"
#include "vector"
#include "limits"
using namespace std;

int main()
{
	{
		// int x = -1;
		// unsigned int y = 1;
		// cout << (x < y) << '\n';
		// cout << (-1 < 1u);
	}
	// cout << "\n===========\n";
	{
		vector<int> x = {4, 5};
		for (int i = 0; i < static_cast<int>(x.size()); ++i)
		{
			cout << i << ' ' << x[i] << '\n';
		}
	}
	cout << "\n===========\n";
	{
		vector<int> t = {-8, -7, 3};
		int sum = 0;
		for (int x : t)
		{
			sum += x;
		}
		int avg = sum / static_cast<int>(t.size());
		cout << avg;
	}
	cout << "\n===========\n";
	{
		vector<int> v = {1, 4, 6};
		for(size_t i = 0; i + 1 < v.size(); ++i)
		{
			cout << v[i] << '\n';
		}
	}
	cout << "\n===========\n";
	{
		vector<int> v;
		for(size_t i = 0; i + 1 < v.size(); ++i)
		{
			cout << v[i] << '\n';
		}
	}
	cout << "\n===========\n";
	{
		vector<int> v;
		for(size_t k = v.size(); k > 0; --k)
		{
			size_t i = k -1;
			cout << v[i] << '\n';
		}
	}
	cout << "\n===========\n";
	{
		vector<int> v = {1, 4, 6};
		for(size_t k = v.size(); k > 0; --k)
		{
			size_t i = k -1;
			cout << v[i] << '\n';
		}
	}
	cout << "\n===========\n";
	{
		vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
		size_t n = 1;
		size_t m = 2;
		for (size_t k = v.size(); k > n + m; --k)
		{
			size_t i = k - m - 1;
			cout << v[i] << '\n';
		}
	}
	cout << "\n===========\n";
	{
		vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
		size_t n = 1;
		size_t m = 2;
		for (size_t i = n; i + m <= v.size(); ++i)
		{
		  cout << v[i] << '\n';
		}
	}
	return 0;
}
