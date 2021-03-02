// Основы разработки на C++: желтый пояс. Третья неделя
// Многофайловые проекты. Механизм сборки проектов, состоящих из нескольких файлов

#include "02 Yellow_Week 03_Lesson 06_test_runner.h"

void Assert(bool b, const string& hint)
{
	AssertEqual(b, true, hint);
}

TestRunner::~TestRunner()
{
	if (fail_count > 0)
	{
		cerr << fail_count << " tests failed. Terminate";
		exit(1);
	}
}