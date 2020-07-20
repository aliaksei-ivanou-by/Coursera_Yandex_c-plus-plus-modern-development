// Основы разработки на C++: желтый пояс. Вторая неделя
// Разработка фреймворка юнит-тестов. Начало. Анализ недостатков фреймворка юнит-тестов
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <cassert>

using namespace std;

using Synonyms = map<string, set<string>>;

void AddSynonyms(Synonyms& synonyms, const string& first_word, const string& second_word)
{
	// второе слово добавляем в список синонимов первого...
	synonyms[second_word].insert(first_word);
	// и наоборот
	synonyms[first_word].insert(second_word);
}

size_t GetSynonymCount(Synonyms& synonyms, const string& first_word)
{
	return synonyms[first_word].size();
}

bool AreSynonyms(Synonyms& synonyms, const string& first_word, const string& second_word)
{
	return synonyms[first_word].count(second_word) == 1;
}


void TestAddSynonyms()
{
	{
		Synonyms empty;
		AddSynonyms(empty, "a", "b");
		const Synonyms expected = {
				{"a", {"b"}},
				{"b", {"a"}},
		};
		assert(empty == expected);
	}
	{
		Synonyms synonyms = {
				{"a", {"b"}},
				{"b", {"a", "c"}},
				{"c", {"b"}},
		};
		AddSynonyms(synonyms, "a", "c");
		const Synonyms expected = {
				{"a", {"b", "c"}},
				{"b", {"a", "c"}},
				{"c", {"b", "a"}},
		};
		assert(synonyms == expected);
	}
	cout << "TestAddSynonyms OK\n";
}

void TestGetSynonymCount()
{
	{
		Synonyms empty;
		assert(GetSynonymCount(empty, "a") == 0);
	}
	{
		Synonyms synonyms = {
				{"a", {"b", "c"}},
				{"b", {"a"}},
				{"c", {"a"}},
		};
		assert(GetSynonymCount(synonyms, "a") == 2);
		assert(GetSynonymCount(synonyms, "b") == 1);
		assert(GetSynonymCount(synonyms, "z") == 0);
	}
	cout << "TestGetSynonymCount OK\n";
}

void TestAreSynonyms()
{
	{
		Synonyms empty;
		assert(!AreSynonyms(empty, "a", "b"));
		assert(!AreSynonyms(empty, "b", "a"));
	}
	{
		Synonyms synonyms = {
				{"a", {"b", "c"}},
				{"b", {"a"}},
				{"c", {"a"}},
		};
		assert(AreSynonyms(synonyms, "a", "b"));
		assert(AreSynonyms(synonyms, "b", "a"));
		assert(AreSynonyms(synonyms, "a", "c"));
		assert(AreSynonyms(synonyms, "c", "a"));
		assert(!AreSynonyms(synonyms, "b", "c"));
		assert(!AreSynonyms(synonyms, "c", "b"));
	}
	cout << "TestAreSynonyms OK\n";
}

void TestAll()
{
	TestGetSynonymCount();
	TestAreSynonyms();
	TestAddSynonyms();
}

int main() {
  TestAll();
  return 0;

  int q;
  cin >> q;

  Synonyms synonyms;

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
