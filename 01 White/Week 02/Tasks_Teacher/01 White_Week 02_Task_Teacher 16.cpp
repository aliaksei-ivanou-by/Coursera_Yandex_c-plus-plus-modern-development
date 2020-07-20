// Основы разработки на C++: белый пояс. Вторая неделя
// Тренировочное задание по программированию: Множество значений словаря (решение)
#include "iostream"
#include "string"
#include "set"
#include "map"
using namespace std;

set<string> BuildMapValuesSet(const map<int, string>& m) {
  set<string> values;
  for (const auto& item : m) {
    values.insert(item.second);
  }
  return values;
}

int main()
{
	set<string> values = BuildMapValuesSet(
			{
		{1, "odd"},
	    {2, "even"},
	    {3, "odd"},
	    {4, "even"},
	    {5, "odd"}
			}
	);

	for (const string& value : values)
	{
		cout << value << endl;
	}
	return 0;
}
