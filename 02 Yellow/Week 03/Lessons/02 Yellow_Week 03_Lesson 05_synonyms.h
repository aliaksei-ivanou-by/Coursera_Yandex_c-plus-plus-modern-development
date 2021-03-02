// Основы разработки на C++: желтый пояс. Третья неделя
// Многофайловые проекты. Понятия объявления и определения

#pragma once
#include <map>
#include <set>
#include <string>

using namespace std;

using Synonyms = map<string, set<string>>;

// Interface

void AddSynonyms(Synonyms& synonyms, const string& first_word, const string& second_word);
bool AreSynonyms(Synonyms& synonyms, const string& first_word, const string& second_word);
size_t GetSynonymCount(Synonyms& synonyms, const string& first_word);

// Implementation

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