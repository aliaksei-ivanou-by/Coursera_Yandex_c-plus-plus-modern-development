// Основы разработки на C++: желтый пояс. Третья неделя
// Многофайловые проекты. Понятия объявления и определения

#include "02 Yellow_Week 03_Lesson 05_synonyms.h"
#include "02 Yellow_Week 03_Lesson 05_tests.h"

#include <exception>
#include <iostream>
#include <vector>

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
