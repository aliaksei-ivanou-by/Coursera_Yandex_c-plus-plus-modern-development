// Основы разработки на C++: белый пояс. Третья неделя
// Задание по программированию: Сортировка без учёта регистра
#include "iostream"
#include "algorithm"
#include "vector"
#include "string"
using namespace std;

string str_tolower(const string& str)
{
	string output;
	for (auto i : str)
	{
		output += tolower(i);
	}
	return output;
}

int main()
{
	int n;
	vector<string> v;
	cin >> n;
	while (n)
	{
		string str;
		cin >> str;
		v.push_back(str);
		--n;
	}
	sort(begin(v), end(v), [] (const string& x, const string& y) {return str_tolower(x) < str_tolower(y);});
	for (const auto& i : v)
	{
		cout << i << ' ';
	}
	return 0;
}
