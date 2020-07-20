// Основы разработки на C++: белый пояс. Первая неделя
// Операции. Операции: присваивание
#include "iostream"
#include "vector"
#include "string"
using namespace std;

int main()
{
	int x1 = 5;
	x1 = 6;
	cout << x1;

	cout << "\n\n";

	string s1 = "Hello";
	string t1 = s1;
	t1 +=  ", world";
	cout << "s1 - " << s1 << '\n';
	cout << "t1 - " << t1 << '\n';

	cout << '\n';

	string s2 = "Hello";
	string t2 = s2;
	t2 +=  ", world";
	s2 = "Holiday";
	cout << "s2 - " << s2 << '\n';
	cout << "t2 - " << t2 << '\n';

	cout << '\n';

	vector<string> w1 = {"a", "b", "c"};
	vector<string> v1;
	v1 = w1;
	v1[0] = "d";
	cout << w1[0] << ' ' << w1[1] << '\n';
	cout << v1[0] << ' ' << v1[1] << '\n';
 	return 0;
}
