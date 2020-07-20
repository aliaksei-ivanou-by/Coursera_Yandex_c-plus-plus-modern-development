// Основы разработки на C++: желтый пояс. Первая неделя
// Тренировочное задание по программированию: Трекер задач
#include "iostream"
#include "map"
#include "vector"
#include "tuple"
using namespace std;

enum class TaskStatus
{
	NEW,
	IN_PROGRESS,
	TESTING,
	DONE
};

using TasksInfo = map<TaskStatus, int>;

class TeamTasks
{
public:
	TasksInfo& GetPersonTasksInfo(const string& person)
	{
		return db[person];
	}
	void AddNewTask(const string& person)
	{
		(db[person])[TaskStatus::NEW]++;
	}
	tuple<TasksInfo, TasksInfo> PerformPersonTasks(const string& person, int task_count)
	{
		TasksInfo updated;
		TasksInfo untouched = GetPersonTasksInfo(person);
		TasksInfo current = GetPersonTasksInfo(person);
		while(untouched[TaskStatus::NEW] != 0 && task_count != 0)
		{
			MakeTask(untouched, TaskStatus::NEW);
			task_count--;
		}
		if(untouched[TaskStatus::NEW] == 0 && task_count != 0)
		{
			while (untouched[TaskStatus::IN_PROGRESS] != 0 && task_count != 0)
			{
				MakeTask(untouched, TaskStatus::IN_PROGRESS);
				task_count--;
			}
			if (untouched[TaskStatus::IN_PROGRESS] == 0 && task_count != 0)
			{
				while(untouched[TaskStatus::TESTING] != 0 && task_count != 0)
				{
					MakeTask(untouched, TaskStatus::TESTING);
					task_count--;
				}
				if (untouched[TaskStatus::TESTING] == 0 && task_count != 0)
				{
					task_count = 0;
				}
			}
		}
		for(int i = 0; i < 3; i++)
		{
			updated[TaskStatus(i+1)] = current[TaskStatus(i)] - untouched[TaskStatus(i)];
		}
		for(int i = 0; i < 4; i++)
		{
			db[person][TaskStatus(i)] = updated[TaskStatus(i)] + untouched[TaskStatus(i)];
			if(db[person][TaskStatus(i)] == 0)
			{
				db[person].erase(TaskStatus(i));
			}
		}
		for(int i = 0; i < 4; i++)
		{
			if(updated.at(TaskStatus(i)) == 0)
			{
				updated.erase(TaskStatus(i));
			}
			if(untouched.at(TaskStatus(i)) == 0)
			{
				untouched.erase(TaskStatus(i));
			}
		}
		untouched.erase(TaskStatus(3));
		return tie(updated, untouched);
	}

	void MakeTask(map<TaskStatus, int>& untouched, TaskStatus status)
	{
		untouched[status]--;
	}
private:
  map<string, TasksInfo> db;
};

void PrintTasksInfo(TasksInfo tasks_info)
{
	cout << tasks_info[TaskStatus::NEW] << " new tasks" <<
			", " << tasks_info[TaskStatus::IN_PROGRESS] << " tasks in progress" <<
			", " << tasks_info[TaskStatus::TESTING] << " tasks are being tested" <<
			", " << tasks_info[TaskStatus::DONE] << " tasks are done" << '\n';
}

int main()
{
	TeamTasks tasks;
	tasks.AddNewTask("Ilia");
	for (int i = 0; i < 3; ++i)
	{
		tasks.AddNewTask("Ivan");
	}
	cout << "Ilia's tasks: ";
	PrintTasksInfo(tasks.GetPersonTasksInfo("Ilia"));
	cout << "Ivan's tasks: ";
	PrintTasksInfo(tasks.GetPersonTasksInfo("Ivan"));

	TasksInfo updated_tasks, untouched_tasks;

	tie(updated_tasks, untouched_tasks) = tasks.PerformPersonTasks("Ivan", 2);
 	cout << "Updated Ivan's tasks: ";
 	PrintTasksInfo(updated_tasks);
 	cout << "Untouched Ivan's tasks: ";
 	PrintTasksInfo(untouched_tasks);

 	tie(updated_tasks, untouched_tasks) = tasks.PerformPersonTasks("Ivan", 2);
 	cout << "Updated Ivan's tasks: ";
 	PrintTasksInfo(updated_tasks);
 	cout << "Untouched Ivan's tasks: ";
 	PrintTasksInfo(untouched_tasks);

 	return 0;
}
