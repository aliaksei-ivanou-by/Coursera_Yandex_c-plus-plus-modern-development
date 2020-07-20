// Основы разработки на C++: белый пояс. Третья неделя
// Введение в структуры и классы. Зачем нужны структуры
#include "iostream"
#include "vector"
using namespace std;

struct Lecture
{
	string title;
	int duration;
	string author;
};

struct LectureTitle
{
	string specialization;
	string course;
	string week;
};

struct DetailedLecture
{
	LectureTitle title;
	int duration;
};

void PrintLecture(const Lecture& lecture)
{
	cout << "Title: " << lecture.title <<
			", duration: " << lecture.duration <<
			", author: " << lecture.author << '\n';
}

void PrintCourse(const vector<Lecture>& lectures)
{
	for (const Lecture& lecture : lectures)
	{
		PrintLecture(lecture);
	}
}

Lecture GetCurrentLecture()
{
	return {"OOP", 5400, "Anton"};
}

int main()
{
	Lecture lecture1;
	lecture1.title = "OOP";
	lecture1.duration = 5400;
	lecture1.author = "Anton";
	Lecture lecture2 = {"OOP", 5400, "Anton"};
	PrintLecture({"OOP", 5400, "Anton"});
	Lecture current_lecture = GetCurrentLecture();

	LectureTitle title = {"C++", "While belt", "OOP"};
	DetailedLecture lecture3 = {title, 5400};
	DetailedLecture lecture4 = {{"C++", "White belt", "OOP"}, 5400};
	cout << lecture4.title.specialization << '\n';
	return 0;
}
