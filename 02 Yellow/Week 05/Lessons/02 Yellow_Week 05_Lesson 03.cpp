// Основы разработки на C++: желтый пояс. Пятая неделя
// Наследование. Порядок конструирования экземпляров классов

#include <iostream>
using namespace std;

struct Log
{
	Log(string name):
		n{ name }
	{
		cout << "+ " << n << endl;
	}	
	~Log()
	{
		cout << "- " << n << endl;
	}
	string n;
};

struct Fruit
{
	Fruit(const string& t):
		l{ t + " (Fruit)" }
	{}
	const Log l;
};

struct Apple : public Fruit
{
	Apple(const string& t):
		Fruit{ t },
		l{ t }
	{}
	const Log l;
};

class AppleTree
{
public:
	AppleTree(const string& t):
		type{ t },
		a1{ type + " a1" },
		a2{ type + " a2" }
	{}
	string type = t;
	Apple a1;
	Apple a2;
}; 

int main()
{
	Apple a1 = Apple("a1");
	Apple a2 = Apple("a2");
	AppleTree at;
	return 0;
}