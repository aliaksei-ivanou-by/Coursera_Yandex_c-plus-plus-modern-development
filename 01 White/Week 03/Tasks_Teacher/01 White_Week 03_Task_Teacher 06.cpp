// Основы разработки на C++: белый пояс. Третья неделя
// Тренировочное задание по программированию: Строка (решение)
#include "iostream"
#include "algorithm"
#include "string"

using namespace std;

class ReversibleString {
public:
  ReversibleString() {}
  ReversibleString(const string& s) {
    data = s;
  }
  void Reverse() {
    reverse(begin(data), end(data));
  }
  string ToString() const {
    return data;
  }
private:
  string data;
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
