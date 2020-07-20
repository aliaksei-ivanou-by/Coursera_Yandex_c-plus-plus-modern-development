// Основы разработки на C++: желтый пояс. Первая неделя
// Шаблоны функций. Указание шаблонного параметра-типа
#include "iostream"
#include "algorithm"
using namespace std;

template <typename T>
T Max(T a, T b)
{
	if (b < a)
	{
		return a;
	}
	return b;
}

int main()
{
	cout << Max(2, 3) << '\n';
	// cout << Max(2, 3.5) << '\n';
	cout << Max<double>(2, 3.5) << '\n';
	cout << Max<int>(2, 3.5);

	cout << "\n======\n";

	cout << max(2, 3) << '\n';
	// cout << max(2, 3.5) << '\n';
	cout << max<double>(2, 3.5) << '\n';
	cout << max<int>(2, 3.5);
	return 0;
}
