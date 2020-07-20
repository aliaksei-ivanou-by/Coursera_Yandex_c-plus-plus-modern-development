// Основы разработки на C++: желтый пояс. Первая неделя
// Задание по программированию: Масса блоков
#include "iostream"
using namespace std;

int main()
{
	unsigned int N;
	unsigned int R;
	cin >> N >> R;
	uint64_t output = 0;
	while (N)
	{
		unsigned int W;
		unsigned int H;
		unsigned int D;
		cin >> W >> H >> D;
		output += static_cast<uint64_t>(W) * H * D;
		--N;
	}
	output *= R;
	cout << output;
}
