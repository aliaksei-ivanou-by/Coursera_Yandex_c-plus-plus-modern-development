// Основы разработки на C++: белый пояс. Четвертая неделя
// Тренировочное задание по программированию: Список студентов
#include "iostream"
#include "vector"
#include "string"
using namespace std;

struct Student
{
	string Name;
	string Soname;
	int Day;
	int Month;
	int Year;
};

int main()
{
	int N;
	vector<Student> students;
	string name;
	string soname;
	int day;
	int month;
	int year;
	cin >> N;
	while (N)
	{
		cin >> name >> soname >> day >> month >> year;
		students.push_back({name, soname, day, month, year});
		--N;
	}
	int M;
	cin >> M;
	string comand;
	int key;
	while (M)
	{
		cin >> comand >> key;
		if (int(students.size()) < key || key <= 0)
		{
			cout << "bad request" << '\n';
		}
		else
			if (comand == "name")
			{
				cout << students[key - 1].Name << ' ' << students[key - 1].Soname << '\n';
			}
			else
				if (comand == "date")
				{
					cout << students[key - 1].Day << '.'
							<< students[key - 1].Month << '.'
							<< students[key - 1].Year <<'\n';
				}
				else
				{
					cout << "bad request" << '\n';
				}
		--M;
	}
	return 0;
}
