// Основы разработки на C++: белый пояс. Первая неделя
// Задание по программированию: Двоичные числа
#include "iostream"
#include "vector"
using namespace std;

int main()
{
	vector<int> arr;
	int a;
	int b;
	cin >> a;
	while (a > 0)
	{
		b = a;
		a /= 2;
		arr.push_back(b-a*2);
	}
	for (int i = int(arr.size())-1; i >= 0; --i)
	{
		cout << arr[i];
	}
	return 0;
}
