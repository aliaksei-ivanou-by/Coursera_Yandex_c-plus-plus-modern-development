// Основы разработки на C++: желтый пояс. Первая неделя
// Задание по программированию: Ссылка на элемент (решение)
#include <iostream>
#include <map>
#include <stdexcept>
using namespace std;

template<typename KeyType, typename ValueType>
ValueType& GetRefStrict(map<KeyType, ValueType>& input_map, KeyType key) {
    if (input_map.count(key) == 0) {
        throw runtime_error("no such key in dictionary");
    }
    return input_map[key];
}

int main()
{
	map<int, string> m = {{0, "value"}};
	string& item = GetRefStrict(m, 0);
	item = "newvalue";
	cout << m[0] << '\n';
	return 0;
}
