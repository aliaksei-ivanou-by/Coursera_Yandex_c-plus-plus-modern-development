// Основы разработки на C++: белый пояс. Четвертая неделя
// Задание по программированию: Работа с сервером времени
#include <iostream>
#include <exception>
#include <string>
using namespace std;

string AskTimeServer()
{

}

class TimeServer
{
public:
    string GetCurrentTime()
    {
    	try
    	{
    		last_fetched_time = AskTimeServer();
    		return last_fetched_time;
    	}
    	catch(const system_error&)
    	{
    		return last_fetched_time;
    	}
    	catch(...)
    	{
    		throw;
    	}
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
