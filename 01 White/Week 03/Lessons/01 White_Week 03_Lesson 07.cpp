// Основы разработки на C++: белый пояс. Третья неделя
// Введение в структуры и классы. Что такое класс
#include "iostream"
#include "string"
using namespace std;

struct Route1
{
private:
	string source;
	string destination;
	int length;
};

struct Route2
{
public:
	string GetSource()
	{
		return source;
	}
	string GetDestination()
	{
		return destination;
	}
	int GetLength()
	{
		return length;
	}
private:
	string source;
	string destination;
	int length;
};

class Route3
{
public:
	string GetSource()
	{
		return source;
	}
	string GetDestination()
	{
		return destination;
	}
	int GetLength()
	{
		return length;
	}
private:
	string source;
	string destination;
	int length;
};

int ComputeDistance(const string& source, const string& destination);

struct Point
{
	double x;
	double y;
};

int main()
{
	Route1 route1;
	// route.source = "Moscow";
	// cout << route.source << '\n';

	Route2 route2;
	route2.GetSource() = "Moscow"; // don't work
	cout << route2.GetLength() << '\n';
	int destination_name_length1 = route2.GetDestination().length();

	Route3 route3;
	route3.GetSource() = "Moscow"; // don't work
	cout << route3.GetLength() << '\n';
	int destination_name_length2 = route3.GetDestination().length();
	return 0;
}
