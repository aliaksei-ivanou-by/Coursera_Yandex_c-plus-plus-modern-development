// Основы разработки на C++: белый пояс. Вторая неделя
// Задание по программированию: Очередь
#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<char> queue;
	string command;
	int key = 0;
	while (n)
	{
		cin >> command;
		if (command == "WORRY_COUNT")
		{
			cout << count(begin(queue), end(queue), 'w') << '\n';
		}
		else
		{
			cin >> key;
			if (command == "COME")
			{
				queue.resize(queue.size() + key, 'q');
			}
			else
				if (command == "WORRY")
				{
					queue[key] = 'w';
				}
				else
					if (command == "QUIET")
					{
						queue[key] = 'q';
					}
		}
		--n;
	}
	return 0;
}
