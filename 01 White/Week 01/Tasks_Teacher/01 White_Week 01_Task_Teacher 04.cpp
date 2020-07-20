// Основы разработки на C++: белый пояс. Первая неделя
// Тренировочное задание по программированию: Деление (решение)
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (b == 0) {
        cout << "Impossible" << endl;
    } else {
        cout << a / b << endl;
    }

    return 0;
}
