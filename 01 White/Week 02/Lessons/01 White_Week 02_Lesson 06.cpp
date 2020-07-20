// Основы разработки на C++: белый пояс. Вторая неделя
// Контейнер vector. Векторы, часть 1
#include "iostream"
#include "vector"
#include "string"
using namespace std;

void PrintVector(const vector<string>& v)
{
	for (string s : v)
	{
		cout << s << '\n';
	}
}

int main()
{
	int n1;
	cin >> n1;
	vector<string> v1(n1);
	for (string& s1 : v1)
	{
		cin >> s1;
	}
	PrintVector(v1);

	cout << "\n\n";

	int n2;
	cin >> n2;
	vector<string> v2;
	int i2 = 0;
	while (i2 < n2)
	{
		string s2;
		cin >> s2;
		v2.push_back(s2);
		cout << "Current size = " << v2.size() << '\n';
		++i2;
	}
	PrintVector(v2);

	cout << "\n\n";

	int n3;
	cin >> n3;
	vector<string> v3;
	for (int i3 = 0; i3 < n3; ++i3)
	{
		string s3;
		cin >> s3;
		v3.push_back(s3);
	}
	PrintVector(v3);
	return 0;
}
