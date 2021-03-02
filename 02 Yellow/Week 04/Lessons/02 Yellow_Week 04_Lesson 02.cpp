// Основы разработки на C++: желтый пояс. Четвертая неделя
// Введение в итераторы. Концепция полуинтервалов итераторов

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Lang
{
	string name;
	int age;
};

void PrintRange(vector<Lang>::iterator range_begin, vector<Lang>::iterator range_end)
{
	for (auto it = range_begin; it != range_end; ++it)
	{
		cout << *it << " ";
	}
}

using LangIt = vector<string>::iterator;

void PrintRange(LangIt range_begin, LangIt range_end)
{
	for (auto it = range_begin; it != range_end; ++it)
	{
		cout << *it << " ";
	}
}

template<typename It>
void PrintRange(It range_begin, It range_end)
{
	for (auto it = range_begin; it != range_end; ++it)
	{
		cout << *it << " ";
	}
}

int main()
{
	vector<string> langs = {"Python", "C++", "C", "Java", "C#"};
	auto result = find_if(
			begin(langs), end(langs),
			[](const string& lang){
				return langs[0] == 'C';
			});
	string& ref = *result;
	cout << ref << endl;
	cout << *result << endl;
	ref = "D++";
	cout << ref << endl;
	cout << *result << endl;
	
	vector<Lang> langs2 =
	{
		{"Python", 26},
		{"C++", 34},
		{"C", 45},
		{"Java", 22},
		{"C#", 17}
	};
	auto result2 = find_if(
		begin(langs2), end(langs2),
		[](const Lang& lang2){
			return lang2.name[0] == 'C';
		});
	if (result2 == end(langs2))
	{
		cout << "Not found" << endl;
	}
	else
	{
		cout << result2->age << endl;
	}
	cout << begin(langs)->name << " " 
		<< begin(langs)->age << endl;
		
	string lang3 = langs2[1].name;
	auto it = begin(lang3);
	cout << *it;
	++it;
	cout << *it;
	for (auto it = begin(langs2); it != end(langs2); ++it)
	{
		cout << it->name << " ";
	}
	vector<string> langs4 = {"Python", "C++", "C", "Java", "C#"};
	PrintRange(begin(langs4), end(langs4));
	return 0;
}