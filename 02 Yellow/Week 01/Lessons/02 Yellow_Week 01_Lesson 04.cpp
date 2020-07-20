// Основы разработки на C++: желтый пояс. Первая неделя
// Целочисленные типы. Перечислимые типы и оператор switch
#include "iostream"
#include "set"
using namespace std;

// 1
void ProcessRequest1(set<int>& numbers, const string& request_type, int request_data)
{
	if (request_type == "ADD")
	{
		numbers.insert(request_data);
	}
	else
	{	if (request_type == "REMOVE")
		{
			numbers.erase(request_data);
		}
		else
		{
			if (request_type == "NEGATE")
			{
				if (numbers.count(request_data) == 1)
				{
					numbers.erase(request_data);
					numbers.insert(-request_data);
				}
			}
		}
	}
}

// 2
void ProcessRequest2(set<int>& numbers, int request_type, int request_data)
{
	if (request_type == 0)
	{
		numbers.insert(request_data);
	}
	else
	{
		if (request_type == 1)
		{
			numbers.erase(request_data);
		}
		else
		{
			if (request_type == 2)
			{
				if (numbers.count(request_data) == 1)
				{
					numbers.erase(request_data);
					numbers.insert(-request_data);
				}
			}
		}
	}
}

// 3
const int REQUEST_ADD = 0;
const int REQUEST_REMOVE = 1;
const int REQUEST_NEGATE = 2;

void ProcessRequest3(set<int>& numbers, int request_type, int request_data)
{
	if (request_type == REQUEST_ADD)
	{
		numbers.insert(request_data);
	}
	else
	{
		if (request_type == REQUEST_REMOVE)
		{
			numbers.erase(request_data);
		}
		else
		{
			if (request_type == REQUEST_NEGATE)
			{
				if (numbers.count(request_data) == 1)
				{
					numbers.erase(request_data);
					numbers.insert(-request_data);
				}
			}
		}
	}
}

// 4
enum class RequestType
{
	ADD = 0,
	REMOVE = 1,
	NEGATE = 2
};

void ProcessRequest4(set<int>& numbers, RequestType request_type, int request_data)
{
	if (request_type == RequestType::ADD)
	{
		numbers.insert(request_data);
	}
	else
	{
		if (request_type == RequestType::REMOVE)
		{
			numbers.erase(request_data);
		}
		else
		{
			if (request_type == RequestType::NEGATE)
			{
				if (numbers.count(request_data) == 1)
				{
					numbers.erase(request_data);
					numbers.insert(-request_data);
				}
			}
		}
	}
}

// 5
void ProcessRequest5(set<int>& numbers, RequestType request_type, int request_data)
{
	switch (request_type)
	{
	case RequestType::ADD:
		numbers.insert(request_data);
		break;
	case RequestType::REMOVE:
		numbers.erase(request_data);
		break;
	case RequestType::NEGATE:
		if (numbers.count(request_data) == 1)
		{
			numbers.erase(request_data);
			numbers.insert(-request_data);
		}
		break;
	}
}

// 6
void ProcessRequest6(set<int>& numbers, RequestType request_type, int request_data)
{
	switch (request_type)
	{
	case RequestType::ADD:
		numbers.insert(request_data);
		break;
	case RequestType::REMOVE:
		numbers.erase(request_data);
		break;
	case RequestType::NEGATE:
		if (numbers.count(request_data) == 1)
		{
			numbers.erase(request_data);
			numbers.insert(-request_data);
		}
		break;
	default:
		cout << "Unknown request" << '\n';
	}
}

// 7
void ProcessRequest7(set<int>& numbers, RequestType request_type, int request_data)
{
	 switch (request_type)
	 {
	 case RequestType::ADD:
		 numbers.insert(request_data);
		 break;
	 case RequestType::REMOVE:
		 numbers.erase(request_data);
		 break;
	 case RequestType::NEGATE:
	 {  // фигурные скобки обязательны
		 bool contains = numbers.count(request_data) == 1;
		 if (contains)
		 {
			 numbers.erase(request_data);
			 numbers.insert(-request_data);
		 }
		 break;
	 }
	 default:
		 cout << "Unknown request" << '\n';
	 }
}

int main()
{
	{
		set<int> numbers;
		ProcessRequest1(numbers, "ADD", 8);
		ProcessRequest1(numbers, "NEGATE", 8);
		ProcessRequest1(numbers, "REMOVE", -8);
	}
	cout << "\n=======\n";
	{
		set<int> numbers;
		ProcessRequest2(numbers, 0, 8);
		ProcessRequest2(numbers, 2, 8);
		ProcessRequest2(numbers, 1, -8);
	}
	cout << "\n=======\n";
	{
		set<int> numbers;
		ProcessRequest3(numbers, 0, 8);
		ProcessRequest3(numbers, 2, 8);
		ProcessRequest3(numbers, 1, -8);
	}
	cout << "\n=======\n";
	{
		set<int> numbers;
		ProcessRequest4(numbers, RequestType::ADD, 8);
		ProcessRequest4(numbers, RequestType::NEGATE, 8);
		ProcessRequest4(numbers, RequestType::REMOVE, -8);
	}
	cout << "\n=======\n";
	{
		set<int> numbers;
		ProcessRequest5(numbers, RequestType::ADD, 8);
		ProcessRequest5(numbers, RequestType::NEGATE, 8);
		ProcessRequest5(numbers, RequestType::REMOVE, -8);
	}
	cout << "\n=======\n";
	{
		set<int> numbers;
		ProcessRequest6(numbers, RequestType::ADD, 8);
		ProcessRequest6(numbers, RequestType::NEGATE, 8);
		ProcessRequest6(numbers, RequestType::REMOVE, -8);
	}
	cout << "\n=======\n";
	{
		set<int> numbers;
		ProcessRequest7(numbers, RequestType::ADD, 8);
		ProcessRequest7(numbers, RequestType::NEGATE, 8);
		ProcessRequest7(numbers, RequestType::REMOVE, -8);
	}
	cout << "\n=======\n";
	{
		// Выведет 0
		cout << static_cast<int>(RequestType::ADD) << '\n';

		// Выведет 1
		cout << static_cast<int>(RequestType::REMOVE) << '\n';

		// Выведет 2
		cout << static_cast<int>(RequestType::NEGATE) << '\n';

	}
	cout << "\n=======\n";
	{
		int request_code;
		cin >> request_code;
		auto request_type = static_cast<RequestType>(request_code);
		// Если ввести request_code = 2,
		// в переменной request_type окажется RequestType::NEGATE
	}
	return 0;
}
