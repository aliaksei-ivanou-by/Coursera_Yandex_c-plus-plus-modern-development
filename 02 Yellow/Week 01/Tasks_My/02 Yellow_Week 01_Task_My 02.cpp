// Основы разработки на C++: желтый пояс. Первая неделя
// Задание по программированию: Средняя температура — 2
#include "iostream"
#include "vector"
#include "limits"
using namespace std;

int main()
{
	int n;
	int mean;
	cin >> n;
	vector<int> v(n);
	for (int& i : v)
	{
		cin >> i;
	}

	long int sum = 0;
	for (auto i : v)
	{
		sum += i;
	}
	mean = sum / n;
	int k = 0;
	vector<int> v_up;
	for (int i = 0; i < static_cast<int>(v.size()); ++i)
	{
		if (v[i] > mean)
		{
			++k;
			v_up.push_back(i);
		}
	}
	cout << k << '\n';
	for (auto i : v_up)
		cout << i << ' ';
	return 0;
}
