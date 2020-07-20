// Основы разработки на C++: белый пояс. Вторая неделя
// Функции. Модификатор const как защита от случайных изменений
#include "iostream"
#include "vector"
#include "string"
using namespace std;

int main()
{
	const int x = 5;
	// x = 6;
	// x += 4;
	cout << x << '\n';

	cout << "\n\n";

	const string s = "hello";
	cout << s.size() << '\n';
	// s += ", world";
	string t = s + '!';
	cout << s << '\n';

	cout << "\n\n";

	const vector<string> w = {"hello"};
	// w[0][0] = 'H';
	cout << w[0][0] << '\n';
	cout << w[0] << '\n';
	return 0;
}
