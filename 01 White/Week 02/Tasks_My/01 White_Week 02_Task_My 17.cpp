// Основы разработки на C++: белый пояс. Вторая неделя
// Задание по программированию: Синонимы
#include "iostream"
#include "string"
#include "set"
#include "map"
using namespace std;

using sorted_pair = pair<string, string>;
sorted_pair make_sorted_pair(const std::string& w1, const string& w2)
{
	return (w1 <= w2) ? make_pair(w1, w2) : make_pair(w2, w1);
}

int main()
{
	int n;
	set<sorted_pair> synonyms;
	map<string, unsigned> synonyms_count;
	cin >> n;
	while (n)
	{
		string comand;
		cin >> comand;
		if (comand =="ADD")
		{
			string w1;
			string w2;
			cin >> w1 >> w2;
			if (synonyms.count(make_sorted_pair(w1, w2)) == 0)
			{
				 ++synonyms_count[w1];
				 ++synonyms_count[w2];
				 synonyms.insert(make_sorted_pair(w1, w2));
			}
		}
		else
			if (comand == "COUNT")
			{
				string w;
				cin >> w;
				cout << synonyms_count[w] << '\n';
			}
			else
				if (comand == "CHECK")
				{
					string w1;
					string w2;
					cin >> w1 >> w2;
					if (synonyms.count(make_sorted_pair(w1, w2)) != 0)
					{
						cout << "YES\n";
					}
					else
					{
						cout << "NO\n";
					}
				}
		--n;
	}
	return 0;
}
