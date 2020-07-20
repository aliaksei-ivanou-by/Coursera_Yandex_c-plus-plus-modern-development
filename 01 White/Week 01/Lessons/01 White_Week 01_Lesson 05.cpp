// Основы разработки на C++: белый пояс. Первая неделя
// Обзор возможностей C++. Ввод и вывод
#include "iostream"
#include "vector"
using namespace std;

int main()
{
	int x1 = 4;
	string y1 = "hello";
	cout << x1 << ' ' << y1;

	cout << '\n';

	vector<int> d1 = {1, 3};

	cout << '\n';

	int x2;
	int y2;
	cin >> x2 >> y2;
	cout << x2 + y2;

	cout << "\n\n";

	string name1;
	cin >> name1;
	cout << "Hello, " << name1;

	cout << '\n';

	string name2;
	string surname2;
	cin >> name2 >> surname2;
	cout << "Hello, " << name2 << ' ' << surname2;
	return 0;
}
