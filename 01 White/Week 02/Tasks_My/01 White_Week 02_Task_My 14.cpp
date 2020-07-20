// Основы разработки на C++: белый пояс. Вторая неделя
// Задание по программированию: Автобусные остановки — 2
#include "iostream"
#include "vector"
#include "string"
#include "map"
using namespace std;

int main()
{
	int n;
	cin >> n;
	map<vector<string>, int> map;
	string stop;
	while (n)
	{
		int key;
		vector<string> v;
		cin >> key;
		for (int i = 0; i < key; ++i)
		{
			cin >> stop;
			v.push_back(stop);
		}
		if (map.count(v))
		{
			 cout << "Already exists for " << map[v] << '\n';
		}
		else
		{
			map[v];
			int size = map.size();
			map[v] = size;
			cout << "New bus " << map[v] << '\n';
		}
		--n;
	}
	return 0;
}
