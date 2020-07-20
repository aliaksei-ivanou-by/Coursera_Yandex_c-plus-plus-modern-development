// Основы разработки на C++: белый пояс. Вторая неделя
// Тренировочное задание по программированию: Количество уникальных строк (решение)
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
  int n;
  cin >> n;
  set<string> strings;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    strings.insert(s);
  }
  cout << strings.size() << endl;

  return 0;
}
