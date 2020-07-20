// Основы разработки на C++: белый пояс. Третья неделя
// Тренировочное задание по программированию: Способы инициализации
#include "iostream"
using namespace std;
struct Incognizable
{
	int n1 = 0;
	int n2 = 0;
};

int main()
{
	Incognizable a;
	Incognizable b = {};
	Incognizable c = {0};
	Incognizable d = {0, 1};
	return 0;
}
