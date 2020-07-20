// Основы разработки на C++: белый пояс. Вторая неделя
// Функции. Передача параметров функций по ссылке
#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
using namespace std;

void Swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

vector<int> Sort1(vector<int> v)
{
	sort(begin(v), end(v));
	return v;
}


void Sort2(vector<int>& v)
{
	sort(begin(v), end(v));
}

int main()
{
	int a = 1;
	int b = 2;
	Swap(a, b);
	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';

	cout << "\n\n";

	vector<int> nums1 = {3, 6, 1, 2, 0, 2};
	sort(begin(nums1), end(nums1));
	for (auto i : nums1)
	{
		cout << i << ' ';
	}

	cout << "\n\n";

	vector<int> nums2 = {3, 6, 1, 2, 0, 2};
	nums2 = Sort1(nums2);
	for (auto i : nums2)
	{
		cout << i << ' ';
	}

	cout << "\n\n";

	vector<int> nums3 = {3, 6, 1, 2, 0, 2};
	Sort2(nums3);
	for (auto i : nums3)
	{
		cout << i << ' ';
	}
	return 0;
}
