// Основы разработки на C++: белый пояс. Вторая неделя
// Контейнер map. Словари: новые возможности
#include "iostream"
#include "map"
using namespace std;

int main()
{
	map<string, int> m = {{"one", 1}, {"two", 2}};
	for (const auto& [key, value] : m)
	{
		cout << "key: " << key << "\t";
		cout << "value: " << value << '\n';
	}
	return 0;
}
