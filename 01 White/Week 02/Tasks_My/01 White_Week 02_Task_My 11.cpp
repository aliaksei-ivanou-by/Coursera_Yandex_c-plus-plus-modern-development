// Основы разработки на C++: белый пояс. Вторая неделя
// Тренировочное задание по программированию: Анаграммы
#include "iostream"
#include "vector"
#include "string"
#include "map"
using namespace std;

map<char, int> BuildCharCounters(const string& input)
{
	map<char, int> letters;
	for (const auto& i : input)
	{
		++letters[i];
	}
	return letters;
}

int main()
{
	int n;
	cin >> n;
	string str1, str2;
	vector<string> result;
	while (n)
	{
		cin >> str1 >> str2;
		if (BuildCharCounters(str1) == BuildCharCounters(str2))
		{
			result.push_back("YES");
		}
		else
		{
			result.push_back("NO");
		}
		--n;
	}
	for (auto i : result)
	{
		cout << i << '\n';
	}
	return 0;
}
