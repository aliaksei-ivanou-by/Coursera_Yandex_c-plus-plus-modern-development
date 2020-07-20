// Основы разработки на C++: желтый пояс. Вторая неделя
// Использование юнит-тестов для отладки программ. Декомпозиция решения задачи «Синонимы»
#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

void AddSynonyms(map<string, set<string>>& synonyms, const string& first_word, const string& second_word)
{
	// второе слово добавляем в список синонимов первого...
	synonyms[first_word].insert(second_word);
	// и наоборот
	synonyms[first_word].insert(first_word);
}

size_t GetSynonymCount(map<string, set<string>>& synonyms, const string& first_word)
{
	return synonyms[first_word].size();
}

bool AreSynonyms(map<string, set<string>>& synonyms, const string& first_word, const string& second_word)
{
	return synonyms[first_word].count(second_word) == 1;
}

int main() {
  int q;
  cin >> q;

  map<string, set<string>> synonyms;

  for (int i = 0; i < q; ++i) {
    string operation_code;
    cin >> operation_code;

    if (operation_code == "ADD") {

      string first_word, second_word;
      cin >> first_word >> second_word;

      AddSynonyms(synonyms, first_word, second_word);

    } else if (operation_code == "COUNT") {

      string word;
      cin >> word;
      cout << GetSynonymCount(synonyms, word) << endl;

    } else if (operation_code == "CHECK") {

      string first_word, second_word;
      cin >> first_word >> second_word;

      // ищём второе слово во множестве синонимов первого
      // (можно было сделать и наоборот)
      if (AreSynonyms(synonyms, first_word, second_word)) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }

    }
  }

  return 0;
}
