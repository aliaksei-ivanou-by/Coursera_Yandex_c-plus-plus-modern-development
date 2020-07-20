// Основы разработки на C++: белый пояс. Четвертая неделя
// Тренировочное задание по программированию: Вывод с точностью (решение)
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ifstream input("Coursera_Yandex_White_Week04_Task_05_sol_input.txt");

    double a;

    cout << fixed << setprecision(3);

    while (input >> a) {
        cout << a << endl;
    }

    return 0;
}
