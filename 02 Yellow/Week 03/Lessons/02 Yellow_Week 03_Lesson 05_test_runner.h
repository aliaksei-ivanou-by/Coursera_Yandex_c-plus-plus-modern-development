// Основы разработки на C++: желтый пояс. Третья неделя
// Многофайловые проекты. Понятия объявления и определения

#pragma once
#include <string>
#include <map>
#include <set>
#include <iostream>
#include <sstream>

using namespace std;

// Interface

template<typename T>
ostream& operator<<(ostream& os, const set<T>& s);
template<typename K, typename V>
ostream& operator<<(ostream& os, const map<K, V>& m);
template<typename T, typename U>
void AssertEqual(const T& t, const U& u, const string& hint);
void Assert(bool b, const string& hint);
class TestRunner
{
public:
	template<typename TestFunc>
	void RunTest(TestFunc func, const string& test_name);
	~TestRunner();
private:
	int fail_count = 0;
};

// Implementation

template<typename T>
ostream& operator<<(ostream& os, const set<T>& s)
{
	os << "{";
	bool first = true;
	for (const auto& x : s)
	{
		if (!first)
		{
			os << ", ";
		}
		first = false;
		os << x;
	}
	return os << "}";
}

template<typename K, typename V>
ostream& operator<<(ostream& os, const map<K, V>& m)
{
	os << "{";
	bool first = true;
	for (const auto& kv : m)
	{
		if (!first)
		{
			os << ", ";
		}
		first = false;
		os << kv.first << ": " << kv.second;
	}
	return os << "}";
}

template<typename T, typename U>
void AssertEqual(const T& t, const U& u, const string& hint)
{
	if (t != u)
	{
		ostringstream os;
		os << "Assertion failed: " << t << " != " << u
			<< " Hint: " << hint;
		throw runtime_error(os.str());
	}
}

void Assert(bool b, const string& hint)
{
	AssertEqual(b, true, hint);
}

template<typename TestFunc>
void TestRunner::RunTest(TestFunc func, const string& test_name)
{
	try
	{
		func();
		cerr << test_name << " OK" << endl;
	}
	catch (runtime_error& e)
	{
		++fail_count;
		cerr << test_name << " fail: " << e.what() << endl;
	}
}

TestRunner::~TestRunner()
{
	if (fail_count > 0)
	{
		cerr << fail_count << " tests failed. Terminate";
		exit(1);
	}
}