// Основы разработки на C++: белый пояс. Вторая неделя
// Тренировочное задание по программированию: Разворот последовательности — 2 (решение)
#include "iostream"
#include "vector"
using namespace std;

vector<int> Reversed(const vector<int>& input)
{
    vector<int> result;
    for (int i = input.size() - 1; i >= 0; --i) {
        result.push_back(input[i]);
    }
    return result;
}

int main()
{
	vector<int> numbers = {1, 5, 3, 4, 2};
	vector<int> numbers_new = Reversed(numbers);
	for (auto i : numbers_new)
	{
		cout << i << ' ';
	}
	return 0;
}
