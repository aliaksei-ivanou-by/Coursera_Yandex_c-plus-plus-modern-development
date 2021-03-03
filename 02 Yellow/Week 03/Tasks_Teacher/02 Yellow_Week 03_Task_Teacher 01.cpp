// Основы разработки на C++: желтый пояс. Третья неделя
// Поддержка нашего юнит-тест фреймворка тестирующей системой
#include "test_runner.h"

void TestWorks() {
    AssertEqual(1, 1, "Just to check that Assert works");
}

int main() {
    TestRunner tr;
    tr.RunTest(TestWorks, "TestWorks");
    return 0;
}