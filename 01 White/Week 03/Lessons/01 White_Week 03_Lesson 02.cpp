// Основы разработки на C++: белый пояс. Третья неделя
// Алгоритмы. Алгоритмы count и count_if, лямбда-функции
#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
#include "iomanip"
using namespace std;

void Print(vector<int> v, const string& title)
{
	cout << title << ": ";
	for (auto i : v)
	{
		cout << i << ' ';
	}
}

bool Gt2(int x)
{
	if (x > 2)
	{
		return true;
	}
	return false;
}

bool Lt2(int x)
{
	if (x < 2)
	{
		return true;
	}
	return false;
}

int main()
{
	vector<int> v = {1, 3, 2, 5, 4};
	int cnt = 0;
	for (auto i : v)
	{
		if (i == 2)
		{
			++cnt;
		}
	}
	cout << cnt << '\n';

	cout << count(begin(v), end(v), 2) << '\n';

	cout << count_if(begin(v), end(v), Gt2) << '\n';

	cout << count_if(begin(v), end(v), Lt2) << '\n';

	int thr = 0;
	cin >> thr;
	cout << count_if(begin(v), end(v), [thr] (int x) {
		if (x > thr)
		{
			return true;
		}
		return false;
	}) << '\n';

	return 0;
}
