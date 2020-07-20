// Основы разработки на C++: белый пояс. Вторая неделя
// Тренировочное задание по программированию: Средняя температура
#include "iostream"
#include "vector"
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

	int sum = 0;
	for (auto i : v)
	{
		sum += i;
	}
	mean = sum / n;
	int k = 0;
	vector<int> v_up;
	for (int i = 0; i < int(v.size()); ++i)
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
