// Основы разработки на C++: белый пояс. Третья неделя
// Конструкторы. Значения по умолчанию для полей структур
#include "iostream"
using namespace std;

struct Lecture
{
	string title = "C++";
	int duration = 0;
};

int main()
{
	Lecture lecture1{"OOP", 5400};
	cout << lecture1.title << ' ' << lecture1.duration << '\n';
	Lecture lecture2;
	cout << lecture2.title << ' ' << lecture2.duration << '\n';
	Lecture lecture3{"OOP"};
	cout << lecture3.title << ' ' << lecture3.duration << '\n';
	return 0;
}
