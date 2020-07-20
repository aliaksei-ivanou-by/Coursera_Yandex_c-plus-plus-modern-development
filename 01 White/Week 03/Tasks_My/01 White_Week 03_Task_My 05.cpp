// Основы разработки на C++: белый пояс. Третья неделя
// Задание по программированию: Имена и фамилии — 2
#include "iostream"
#include "string"
#include "map"
#include "vector"
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
	string GetFullNameWithHistory(int year)
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
		vector<string> names1;
		vector<string> surnames1;
		for (const auto& i : Year_Name)
		{
			if (i.first <= year && i.second.Surname != "")
			{
				if (i.second.Surname != s && s != "")
				{
					surnames1.push_back(s);
				}
				s = i.second.Surname;
			}
			if (i.first <= year && i.second.Name != "")
			{
				if (i.second.Name != n && n != "")
				{
					names1.push_back(n);
				}
				n = i.second.Name;
			}
		}
		string names2 = "";
		string surnames2 = "";
		if (surnames1.size() > 0)
		{
			surnames2 += " (" + surnames1[surnames1.size()-1];
			if (surnames1.size() > 1)
			{
				for (int i = surnames1.size() - 1; i  > 0; --i)
				{
					surnames2 += ", " + surnames1[i - 1];
				}
			}
			surnames2 += ')';
		}
		if (names1.size() > 0)
		{
			names2 += " (" + names1[names1.size()-1];
			if (names1.size() > 1)
			{
				for (int i = names1.size() - 1; i  > 0; --i)
				{
					names2 += ", " + names1[i - 1];
				}
			}
			names2 += ')';
		}
		if (n == "")
		{
			return s + surnames2 + " with unknown first name";
		}
		else
			if (s == "")
			{
				return n + names2 + " with unknown last name";
			}
			else
			{
				return n + names2 + ' ' + s + surnames2;
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

	person.ChangeFirstName(1900, "Eugene");
	person.ChangeLastName(1900, "Sokolov");
	person.ChangeLastName(1910, "Sokolov");
	person.ChangeFirstName(1920, "Evgeny");
	person.ChangeLastName(1930, "Sokolov");
	cout << person.GetFullNameWithHistory(1940) << '\n';

  return 0;
}
