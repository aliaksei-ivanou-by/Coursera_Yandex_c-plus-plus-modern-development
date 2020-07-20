// Основы разработки на C++: белый пояс. Вторая неделя
// Контейнер map. Словари, часть 2
#include "iostream"
#include "map"
#include "vector"
using namespace std;

void PrintMap(const map<string, int>& m)
{
	cout << "Size = " << m.size() << '\n';
	for (const auto& item : m)
	{
		cout << item.first << ": " << item.second << '\n';
	}
}

int main()
{
	map<string, int> m = {{"one", 1}, {"two", 2}, {"three", 3}};
	PrintMap(m);
	m.erase("three");
	cout << '\n';
	PrintMap(m);

	cout << "\n\n";

	vector<string> words1 = {"one", "two", "one"};
	map<string, int> counters1;
	for (const string& word1 : words1)
	{
		PrintMap(counters1);
		++counters1[word1];
	}
	PrintMap(counters1);

	cout << "\n\n";

	map<string, int> counters2;
	counters2["a"];
	PrintMap(counters2);

	cout << "\n\n";

	vector<string> words2 = {"one", "two", "three"};
	map<char, vector<string>> grouped_words;
	for (const string& word2 : words2)
	{
		grouped_words[word2[0]].push_back(word2);
	}
	for (const auto& item : grouped_words)
	{
		cout << item.first << '\n';
		for (const string& word2 : item.second)
		{
			cout << word2 << ' ';
		}
		cout << '\n';
	}
	return 0;
}
