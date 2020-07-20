// Основы разработки на C++: белый пояс. Вторая неделя
// Задание по программированию: Ежемесячные дела
#include "iostream"
#include "vector"
#include "string"
using namespace std;

void Next(int& month, const vector<int>& monthes, vector<vector<string>>& task)
{
	month++;
    if (month > 11)
    {
    	month = 0;
    }
    vector<vector<string>> NewMonth = task;
    int days_old = task.size();
    int days_new = monthes[month];
    task.resize(days_new);
    const int key = days_new - 1;
    if (days_old > days_new)
    {
        for (days_new; days_old > days_new; days_new++)
        {
        	task[key].insert(end(task[key]), begin(NewMonth[days_new]), end(NewMonth[days_new]));
        }
    }
    NewMonth.clear();
}

void PrintTasks(int day, const vector<vector<string>>& task)
{
	cout << task[day - 1].size();
	for (auto i : task[day - 1])
	{
		cout << " " << i;
	}
	cout << '\n';
}

int main()
{
	int n;
	cin >> n;
	vector<int> monthes = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	vector<vector<string>> task_day;
	int month = 0;
	task_day.resize(monthes[month], {});
	for (int i = 0; n > i; i++)
	{
		string command;
		int day;
		string task;
		cin >> command;
		if (command == "NEXT")
		{
			Next(month, monthes, task_day);
		}
		else
			if (command == "DUMP")
			{
				cin >> day;
				PrintTasks(day, task_day);
			}
			else
				if (command == "ADD")
				{
					cin >> day >> task;
					task_day[day - 1].push_back(task);
				}
	}
	return 0;
}
