// Основы разработки на C++: желтый пояс. Третья неделя
// Заголовочные файлы. Введение в разработку в нескольких файлах на примере задачи "Синонимы"
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <cassert>
#include <exception>
#include <sstream>
#include "02 Yellow_Week 03_Lesson 01_test_runner.h"
#include "02 Yellow_Week 03_Lesson 01_synonyms.h"
#include "02 Yellow_Week 03_Lesson 01_tests.h"

using namespace std;

int main()
{
	TestAll();

	int q;
	cin >> q;

	Synonyms synonyms;

	for (int i = 0; i < q; ++i)
	{
		string operation_code;
		cin >> operation_code;
		if (operation_code == "ADD")
		{
			string first_word, second_word;
			cin >> first_word >> second_word;
			AddSynonyms(synonyms, first_word, second_word);
		}
		else if (operation_code == "COUNT")
		{
			string word;
			cin >> word;
			cout << GetSynonymCount(synonyms, word) << endl;
		}
		else if (operation_code == "CHECK")
		{
			string first_word, second_word;
			cin >> first_word >> second_word;
			// ищём второе слово во множестве синонимов первого
			// (можно было сделать и наоборот)
			if (AreSynonyms(synonyms, first_word, second_word))
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}
