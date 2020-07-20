// Основы разработки на C++: белый пояс. Вторая неделя
// Функции. Передача параметров функций по константной ссылке
#include "iostream"
#include "vector"
#include "string"
#include "map"
#include "chrono"
using namespace std;
using namespace std::chrono;

struct Person
{
	string name;
	string surname;
	int age;
};

vector<Person> GetMoscowPopulation1()
{
	vector<Person> p(12500000);
	return p;
}

void PrintPopulation1(vector<Person> p)
{
	cout << "There are " << p.size() << " people in Moscow" << '\n';
}

void PrintPopulation2(const vector<Person>& p)
{
	cout << "There are " << p.size() << " people in Moscow" << '\n';
}

int main()
{
	auto start = high_resolution_clock::now();
	vector<Person> staff;
	staff.push_back({"Ivan", "Ivanov", 25});

	vector<Person> people = GetMoscowPopulation1();
	auto finish = high_resolution_clock::now();
	cout << "GetMoscowPopulation1 "
			<< duration_cast<milliseconds>(finish - start).count() << " ms\n";

	start = high_resolution_clock::now();
	PrintPopulation1(people);
	finish = high_resolution_clock::now();
	cout << "PrintPopulation1 "
			<< duration_cast<milliseconds>(finish - start).count() << " ms\n";

	start = high_resolution_clock::now();
	PrintPopulation2(people);
	finish = high_resolution_clock::now();
	cout << "PrintPopulation2 "
			<< duration_cast<milliseconds>(finish - start).count() << " ms\n";

	start = high_resolution_clock::now();
	PrintPopulation2(GetMoscowPopulation1());
	finish = high_resolution_clock::now();
	cout << "PrintPopulation2 "
			<< duration_cast<milliseconds>(finish - start).count() << " ms\n";

	return 0;
}
