// Основы разработки на C++: белый пояс. Третья неделя
// Задание по программированию: Имена и фамилии — 3
#include "iostream"
#include "string"
#include "map"
#include "vector"
using namespace std;

class Person
{
public:
	Person(const string& name, const string& surname, int year)
	{
		 Year_Name[year] = {name, surname};
		 birth = year;
		 for (auto& i : Year_Name)
		 {
			 if (i.first < year)
			 {
				 Year_Name.erase(i.first);
			 }
		 }
	}
	void ChangeFirstName(int year, const string& first_name)
	{
		for (auto& i : Year_Name)
		{
			if (year > i.first)
			{
				if (Year_Name.count(year) == 0)
				{
					Year_Name[year].Surname = "";
				}
				Year_Name[year].Name = first_name;
			}
			break;
		}
	}
	void ChangeLastName(int year, const string& last_name)
	{
		for (auto& i : Year_Name)
		{
			if (year > i.first)
			{
				if (Year_Name.count(year) == 0)
				{
					Year_Name[year].Name = "";
				}
				Year_Name[year].Surname = last_name;
			}
			break;
		}
	}
	string GetFullName(int year) const
	{
		if (birth != 0 && year < birth)
		{
			return "No person";
		}
		else
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
	        {
	        	if (s == "")
	        	{
	        		return n + " with unknown last name";
	        	}
	        	else
	        	{
	        		return n + " " + s;
	        	}
	        }
		}
	}
	string GetFullNameWithHistory(int year) const
	{
		if (birth != 0 && year < birth)
		{
			return "No person";
		}
		else
		{	if (Year_Name.size() == 0)
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
	        vector<string> surnames;
	        vector<string> names;
	        for (const auto& i : Year_Name)
	        {
	        	if (i.first <= year && i.second.Surname != "")
	        	{
	        		if (i.second.Surname != s && s != "")
	        		{
	        			surnames.push_back(s);
	                }
	                s = i.second.Surname;
	            }
	            if (i.first <= year && i.second.Name != "")
	            {
	                if (i.second.Name != n && n != "")
	                {
	                    names.push_back(n);
	                }
	                n = i.second.Name;
	            }
	        }
	        string surnames_string = "", names_string = "";
	        if (surnames.size() > 0)
	        {
	        	surnames_string += " (" + surnames[surnames.size() - 1];
	            if (surnames.size() > 1)
	            {
	                for (int i = surnames.size() - 1; i > 0; --i)
	                {
	                	surnames_string += ", " + surnames[i - 1];
	                }
	            }
	            surnames_string += ")";
	        }
	        if (names.size() > 0)
	        {
	        	names_string += " (" + names[names.size() - 1];
	            if (names.size() >1)
	            {
	                for (int i = names.size() - 1; i > 0; --i)
	                {
	                	names_string += ", " + names[i - 1];
	                }
	            }
	            names_string += ")";
	        }
	        if (n == "")
	        {
	        	return s + surnames_string + " with unknown first name";
	        }
	        else
	        {
	        	if (s == "")
	        	{
	        		return n + names_string + " with unknown last name";
	        	}
	        	else
	        	{
	        		return n + names_string + " " + s + surnames_string;
	        	}
	        }
	    }
	}
private:
	struct FullName
	{
		string Name;
		string Surname;
	};
	map<int, FullName> Year_Name;
	int birth = 0;
};


int main()
{
	Person person("Polina", "Sergeeva", 1960);
	for (int year : {1959, 1960})
	{
		cout << person.GetFullNameWithHistory(year) << '\n';
	}

	person.ChangeFirstName(1965, "Appolinaria");
	person.ChangeLastName(1967, "Ivanova");
	for (int year : {1965, 1967})
	{
		cout << person.GetFullNameWithHistory(year) << '\n';
	}
	return 0;
}
