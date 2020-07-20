// Основы разработки на C++: белый пояс. Третья неделя
// Задание по программированию: Имена и фамилии — 1
#include "iostream"
#include "string"
#include "map"
using namespace std;

class Person
{
public:
	void ChangeFirstName(int year, const string& first_name)
	{
		if (Year_Name.count(year) == 0)
		{
			Year_Name[year].Surname = "";
		}
		Year_Name[year].Name = first_name;
	}
	void ChangeLastName(int year, const string& last_name)
	{
		if (Year_Name.count(year) == 0)
		{
			Year_Name[year].Name = "";
		}
		Year_Name[year].Surname = last_name;
	}
	string GetFullName(int year)
	{
		if (Year_Name.size() == 0)
		{
			return "Incognito";
		}
		else
		{
			for (const auto& i : Year_Name)
			{
				if (year < i.first)
				{
					return "Incognito";
				}
				break;
			}
		}
		string n = "";
		string s = "";
		for (const auto& i : Year_Name)
		{
			if (i.first <= year && i.second.Surname != "")
			{
				s = i.second.Surname;
			}
			if (i.first <= year && i.second.Name != "")
			{
				n = i.second.Name;
			}
		}
		if (n == "")
		{
			return s + " with unknown first name";
		}
		else
			if (s == "")
			{
				return n + " with unknown last name";
			}
			else
			{
				return n + ' ' + s;
			}
	}
private:
	struct FullName
	{
		string Name;
		string Surname;
	};
	map<int, FullName> Year_Name;
};


int main()
{
	Person person;

	person.ChangeFirstName(1965, "Polina");
	person.ChangeLastName(1967, "Sergeeva");
	for (int year : {1900, 1965, 1990})
	{
		cout << person.GetFullName(year) << '\n';
	}

	person.ChangeFirstName(1970, "Appolinaria");
	for (int year : {1969, 1970})
	{
		cout << person.GetFullName(year) << '\n';
	}

	person.ChangeLastName(1968, "Volkova");
	for (int year : {1969, 1970})
	{
		cout << person.GetFullName(year) << '\n';
	}

  return 0;
}
