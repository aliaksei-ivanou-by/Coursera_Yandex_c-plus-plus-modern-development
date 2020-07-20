// Основы разработки на C++: белый пояс. Первая неделя
// Обзор возможностей C++. Операции с контейнерами, count, sort
#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
using namespace std;

int main()
{
	string s1 = "abcdefg";
	for (char c : s1)
	{
		cout << c << ", ";
	}

	cout << '\n';

	vector<int> nums1 = {1, 5, 2, 3, 5};
	for (int c : nums1)
	{
		cout << c << ", ";
	}

	cout << '\n';

	vector<string> nums2={"1", "5", "2", "3", "5+"};
	for (auto c : nums2)
	{
		cout << c << ", ";
	}

	cout << '\n';

	vector<int> nums3 = {1, 5, 2, 3, 5};
	int quantity1 = 0;
	for (auto x : nums3)
	{
		if (x == 5)
		{
			quantity1+=1;
		}
	}
	cout << "There are " << quantity1 << " fives.";

	cout << '\n';

	vector<int> nums4 = {1, 5, 2, 3, 5};
	int quantity2 = count(begin(nums4), end(nums4), 5);
	cout << "There are " << quantity2 << " fives.";

	cout << '\n';

	vector<int> nums5 = {1, 5, 2, 3, 5};
	sort(begin(nums5), end(nums5));
	for (auto x : nums5)
	{
		cout << x << ", ";
	}

	cout << '\n';

	vector<string> nums6 = {"hello", "world", "milk"};
	sort(begin(nums6), end(nums6));
	for (auto x : nums6)
	{
		cout << x << ", ";
	}
	return 0;
}
