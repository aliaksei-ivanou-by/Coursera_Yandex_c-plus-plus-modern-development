// Основы разработки на C++: белый пояс. Вторая неделя
// Контейнер set. Множества, часть 1
#include "iostream"
#include "map"
#include "set"
using namespace std;

void PrintSet(const set<string>& s)
{
	cout << "Size = " << s.size() << '\n';
	for (auto i : s)
	{
		cout << i << '\n';
	}
}

int main()
{
	map<string, bool> is_famous_person;
	is_famous_person["Stroustrup"] = true;
	is_famous_person["Ritchie"] = true;

	set<string> famous_persons;
	famous_persons.insert("Stroustrup");
	famous_persons.insert("Ritchie");
	famous_persons.insert("Stroustrup");
	famous_persons.insert("Anton");
	PrintSet(famous_persons);
	cout << '\n';
	famous_persons.erase("Anton");
	PrintSet(famous_persons);
	return 0;
}
