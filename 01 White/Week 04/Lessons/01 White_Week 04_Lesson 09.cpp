// Основы разработки на C++: белый пояс. Четвертая неделя
// Выполнение операция "естественным" образом. Перегрузка операторов ввода и вывода
#include "iostream"
#include "vector"
#include "algorithm"
#include "sstream"
#include "iomanip"
using namespace std;


struct Duration
{
	int hour;
	int min;
	Duration(int h = 0, int m = 0)
	{
		hour = h;
		min = m;
	}
};

Duration ReadDuration(istream& stream)
{
	int h = 0;
	int m = 0;
	stream >> h;
	stream.ignore(1);
	stream >> m;
	return Duration{h, m};
}

void PrintDuration(ostream& stream, const Duration& duration)
{
	stream << setfill('0');
	stream << setw(2) << duration.hour << ':'
			<< setw(2) << duration.min;
}

ostream& operator<<(ostream& stream, const Duration& duration)
{
	stream << setfill('0');
	stream << setw(2) << duration.hour << ':'
			<< setw(2) << duration.min;
	return stream;
}

istream& operator>>(istream& stream, Duration& duration)
{
	stream >> duration.hour;
	stream.ignore(1);
	stream >> duration.min;
	return stream;
}

int main()
{
	{
		stringstream dur_ss("01:50");
		Duration dur1 = ReadDuration(dur_ss);
		PrintDuration(cout, dur1);
		cout << '\n';
		cout << dur1;
	}
	cout << "\n=========\n";
	{
		stringstream dur_ss("02:50");
		Duration dur2{0, 0};
		dur_ss >> dur2;
		cout << dur2;
	}
	cout << "\n=========\n";
	{
		stringstream dur_ss("03:50");
		Duration dur3;
		dur_ss >> dur3;
		cout << dur3;
	}
	return 0;
}
