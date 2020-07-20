// Основы разработки на C++: желтый пояс. Первая неделя
// Задание по программированию: Ссылка на элемент
#include "iostream"
#include "map"
#include "utility"
using namespace std;

template<typename Key, typename Value>
Value& GetRefStrict(map<Key, Value>& m, const Key& key)
{
	if (m.count(key) == 0)
	{
		throw runtime_error("exception");
	}
	Value& output = m[key];
	return output;
}

int main()
{
	map<int, string> m = {{0, "value"}};
	string& item = GetRefStrict(m, 0);
	item = "newvalue";
	cout << m[0] << '\n';
	return 0;
}
