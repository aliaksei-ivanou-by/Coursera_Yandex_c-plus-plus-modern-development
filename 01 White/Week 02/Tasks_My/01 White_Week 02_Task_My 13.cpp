// Основы разработки на C++: белый пояс. Вторая неделя
// Задание по программированию: Автобусные остановки — 1
#include "iostream"
#include "vector"
#include "string"
#include "map"
using namespace std;

int main()
{
	int n;
	cin >> n;
	string comand;
	map<string, vector<string>> buses_m;
	vector<string> bus_v;
	while (n)
	{
		cin >> comand;
		if (comand == "NEW_BUS")
		{
			string bus;
			int stops;
			cin >> bus >> stops;
			bus_v.push_back(bus);
			while (stops)
			{
				string stop;
				cin >> stop;
				buses_m[bus].push_back(stop);
				--stops;
			}
		}
		else
			if (comand == "BUSES_FOR_STOP")
			{
				string stop;
				cin >> stop;
				int key = 0;
				vector<string> v;
				for (const auto& i : buses_m)
				{
					for (const auto& j : i.second)
					{
						if (j == stop)
						{
							v.push_back(i.first);
							++key;
						}
					}
				}
				if (key > 0)
				{
					for (const auto& i : bus_v)
					{
						for (auto j : v)
						{
							if (j == i)
							{
								cout << j <<' ';
							}
						}
					}
				}
				else
				{
					cout << "No stop";
				}
				cout << '\n';
			}
			else
				if (comand == "STOPS_FOR_BUS")
				{
					string bus;
					cin >> bus;
					int key1 = 0;
					for (auto i : buses_m)
					{
						if (i.first == bus)
						{
							for (auto j : i.second)
							{
								cout << "Stop " << j <<": ";
								int key2 = 0;
								vector<string> v;
								for (auto ii : buses_m)
								{
									for (auto jj : ii.second)
									{
										if (jj == j && ii.first != bus)
										{
											v.push_back(ii.first);
											++key2;
										}
									}
								}
								if (key2 == 0)
								{
									cout << " no interchange";
								}
								else
									if (key2 > 0)
									{
										for (const auto& i : bus_v)
										{
											for (auto j : v)
											{
												if (j == i)
												{
													cout << ' ' << i;
												}
											}
										}
									}
								cout << '\n';
							}
							++key1;
						}
					}
					if (key1 == 0)
					{
						cout << "No bus\n";
					}
				}
				else
					if (comand == "ALL_BUSES")
					{
						if (buses_m.size() == 0)
						{
							cout << "No buses\n";
						}
						else
						{
							for (const auto& i : buses_m)
							{
								cout << "Bus " << i.first << ":";
								for (const auto& j : i.second)
								{
									cout << ' ' << j;
								}
								cout << '\n';
							}
						}
					}
		--n;
	}
	return 0;
}
