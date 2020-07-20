// Основы разработки на C++: белый пояс. Третья неделя
// Тренировочное задание по программированию: Строка
#include "iostream"
#include "string"
#include "algorithm"
using namespace std;

class ReversibleString
{
public:
	ReversibleString() {}
	ReversibleString(const string& data)
	{
		str = data;
	}
	void Reverse()
	{
		reverse(begin(str), end(str));
	}
	string ToString() const
	{
		return str;
	}
private:
	string str;
};

int main()
{
	ReversibleString s("live");
	s.Reverse();
	cout << s.ToString() << '\n';

	s.Reverse();
	const ReversibleString& s_ref = s;
	string tmp = s_ref.ToString();
	cout << tmp << endl;

	ReversibleString empty;
	cout << '"' << empty.ToString() << '"' << '\n';
	return 0;
}
