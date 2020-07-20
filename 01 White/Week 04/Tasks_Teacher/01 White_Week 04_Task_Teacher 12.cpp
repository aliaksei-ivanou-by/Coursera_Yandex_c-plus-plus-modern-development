// Основы разработки на C++: белый пояс. Четвертая неделя
// Задание по программированию: Работа с сервером времени (решение)
#include <iostream>
#include <exception>
#include <system_error>
using namespace std;

using namespace std;

string AskTimeServer()
{

}

class TimeServer {
public:
  string GetCurrentTime() {
    // поместим вызов функции AskTimeServer в try-catch блок
    try {
      last_fetched_time = AskTimeServer();
    } catch (const system_error&) {  // ловим только system_error
    }
    // возвращаем значение поля — либо обновлённое, либо нет
    return last_fetched_time;
  }

private:
  string last_fetched_time = "00:00:00";
};

int main()
{
	TimeServer ts;
    try
    {
    	cout << ts.GetCurrentTime() << '\n';
    }
    catch (exception& e)
    {
        cout << "Exception got: " << e.what() << '\n';
    }
    return 0;
}
