// Основы разработки на C++: желтый пояс. Третья неделя
// Многофайловые проекты. Механизм сборки проектов, состоящих из нескольких файлов

#include "02 Yellow_Week 03_Lesson 06_synonyms.h"

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