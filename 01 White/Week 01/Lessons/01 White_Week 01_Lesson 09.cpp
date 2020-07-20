// Основы разработки на C++: белый пояс. Первая неделя
// Операции. Логические операции
#include "iostream"
#include "vector"
#include "string"
#include "map"
using namespace std;

int main()
{
	int a1 = 3;
	int b1 = 5;
	if (a1 < b1)
	{
		cout << "a1 is less than b1";
	}

	cout << '\n';

	string a2 = "fire";
	string b2 = "water";
	if (a2 < b2)
	{
		cout << "a2 is less than b2";
	}

	cout << '\n';

	string a3 = "fire";
	string b3 = "fog";
	if (a3 == b3)
	{
		cout << "a3 is equal to b3";
	}
	else
	{
		cout << "a3 isn't equal to b3";
	}

	cout << '\n';

	vector<string> a4 = {"fire", "water"};
	vector<string> b4 = {"fog", "air"};
	if (a4 == b4)
	{
		cout << "a4 is equal to b4";
	}
	else
	{
		cout << "a4 isn't equal to b4";
	}

	cout << '\n';

	map<string, int> a5;
	a5["one"] = 1;
	map<string, int> b5;
	if (a5 == b5)
	{
		cout << "a5 is equal to b5";
	}
	else
	{
		cout << "a5 isn't equal to b5";
	}

	cout << '\n';

	string s1 = "abc";
	if (!s1.empty() && s1 < "zzz")
	{
		cout << s1;
	}

	cout << '\n';

	string s2 = "abc";
	if (!s2.empty() || s2 < "zzz")
	{
		cout << s2;
	}
 	return 0;
}
