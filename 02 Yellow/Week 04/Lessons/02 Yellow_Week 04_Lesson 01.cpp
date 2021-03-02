// Основы разработки на C++: желтый пояс. Четвертая неделя
// Введение в итераторы. Введение в итераторы

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Lan
{
	string name;
	int age;
};

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
	return 0;
}