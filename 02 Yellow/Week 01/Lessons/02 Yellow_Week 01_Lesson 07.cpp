// Основы разработки на C++: желтый пояс. Первая неделя
// Кортежи и пары. Возврат нескольких значений из функции
#include "iostream"
#include "vector"
#include "tuple"
#include "utility"
#include "map"
#include "set"
using namespace std;

class Cities
{
public:
	tuple<bool, string> FindCountry(const string& city) const
	{
		if (city_to_country.count(city) == 1)
		{
			return {true, city_to_country.at(city)};
		}
		else
		{
			if (ambiguous_cities.count(city) == 1)
			{
				return {false, "Ambiguous"};
			}
			else
			{
				return {false, "Not exist"};
			}
		}
	}
private:
	map<string, string> city_to_country;
	set<string> ambiguous_cities;
};

int main()
{
	{
		Cities cities;
		auto t = cities.FindCountry("Volgograd");
		cout << get<1>(t);
	}
	cout << "\n========\n";
	{
		Cities cities;
		bool success;
		string message;
		tie(success, message) = cities.FindCountry("Volgograd");
		cout << success << ' ' << message << '\n';
	}
	cout << "\n========\n";
	{
		Cities cities;
		auto [success, message] = cities.FindCountry("Volgograd");
		cout << success << ' ' << message << '\n';
	}
	cout << "\n========\n";
	{
		map<string, pair<double, double>> cities;
		for (const auto& item : cities)
		{
			cout << item.second.first << '\n'; // don't do it!
		}
	}
	return 0;
}
