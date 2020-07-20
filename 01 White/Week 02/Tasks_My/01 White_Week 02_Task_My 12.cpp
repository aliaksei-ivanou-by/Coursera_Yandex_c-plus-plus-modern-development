// Основы разработки на C++: белый пояс. Вторая неделя
// Тренировочное задание по программированию: Справочник столиц
#include "iostream"
#include "vector"
#include "string"
#include "map"
using namespace std;

int main()
{
	int n;
	cin >> n;
	string command;
	map<string, string> country_capital;
	while (n)
	{
		cin >> command;
		if (command == "CHANGE_CAPITAL")
		{
			string country;
			string capital_new;
			cin >> country >> capital_new;
			if (country_capital.count(country) == 0)
			{
				cout << "Introduce new country " << country << " with capital " << capital_new << '\n';
			}
			else
			{
				const string& capital_old = country_capital[country];
				if (capital_old == capital_new)
				{
					cout << "Country " << country << " hasn't changed its capital\n";
				}
				else
				{
					cout << "Country " << country <<
							" has changed its capital from " << capital_old << " to " << capital_new << '\n';
				}
			}
			country_capital[country] = capital_new;
		}
		else
			if (command == "RENAME")
			{
				string country_old;
				string country_new;
				cin >> country_old >> country_new;
				if (country_old == country_new || country_capital.count(country_old) == 0 || country_capital.count(country_new) == 1)
				{
					cout << "Incorrect rename, skip\n";
				}
				else
				{
					cout << "Country " << country_old << " with capital "
							<< country_capital[country_old] << " has been renamed to " << country_new << '\n';
					country_capital[country_new] = country_capital[country_old];
					country_capital.erase(country_old);
				}
			}
			else
				if (command == "ABOUT")
				{
					string country;
					cin >> country;
					if (country_capital.count(country) == 0)
					{
						cout << "Country " << country << " doesn't exist\n";
					}
					else
					{
						cout << "Country " << country << " has capital " << country_capital[country] << '\n';
					}
				}
				else
					if (command == "DUMP")
					{
						if (country_capital.empty())
						{
							cout << "There are no countries in the world\n";
						}
						else
						{
							for (const auto& i : country_capital)
							{
								cout << i.first << '/' << i.second << ' ';
							}
							cout << '\n';
						}
					}
		--n;
	}
	return 0;
}
