// Основы разработки на C++: белый пояс. Третья неделя
// Задание по программированию: Сортировка целых чисел по модулю
#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;

int main()
{
	int n;
	vector<int> v;
	cin >> n;
	while (n)
	{
		int num;
		cin >> num;
		v.push_back(num);
		--n;
	}
	sort(begin(v), end(v), [] (const int& x, const int& y) {return abs(x) < abs(y);});
	for (const auto& i : v)
	{
		cout << i << ' ';
	}
	return 0;
}
