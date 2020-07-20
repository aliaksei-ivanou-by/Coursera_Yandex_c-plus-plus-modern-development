// Основы разработки на C++: белый пояс. Вторая неделя
// Тренировочное задание по программированию: Количество уникальных строк
#include "iostream"
#include "string"
#include "set"
using namespace std;

int main()
{
	int n;
	cin >> n;
	set<string> s;
	for (int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		s.insert(str);
	}
	cout << s.size() ;
	return 0;
}
