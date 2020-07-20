// Основы разработки на C++: белый пояс. Четвертая неделя
// Задание по программированию: Работа с файлами. Чтение и запись в файл (решение)
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ifstream input("Coursera_Yandex_White_Week04_Task_04_2_sol_input.txt");
  ofstream output("Coursera_Yandex_White_Week04_Task_04_2_sol_output.txt");

  string line;
  while (getline(input, line)) {
    output << line << endl;
  }

  return 0;
}
