// Основы разработки на C++: белый пояс. Третья неделя
// Тренировочное задание по программированию: Отсортированные строки (решение)
#include "iostream"
#include "vector"
#include "string"
#include "algorithm"
using namespace std;

class SortedStrings {
public:
  void AddString(const string& s) {
    data.push_back(s);
  }
  vector<string> GetSortedStrings() {
    sort(begin(data), end(data));
    return data;
  }
private:
  vector<string> data;
};

void PrintSortedStrings(SortedStrings& strings)
{
	for (const string& s : strings.GetSortedStrings())
	{
    cout << s << " ";
	}
	cout << '\n';
}

int main()
{
	SortedStrings strings;

	strings.AddString("first");
	strings.AddString("third");
	strings.AddString("second");
	PrintSortedStrings(strings);

	strings.AddString("second");
	PrintSortedStrings(strings);

	return 0;
}
