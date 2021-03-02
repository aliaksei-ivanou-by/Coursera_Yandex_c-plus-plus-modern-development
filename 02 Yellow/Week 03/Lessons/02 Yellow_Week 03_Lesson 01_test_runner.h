// Основы разработки на C++: желтый пояс. Третья неделя
// Заголовочные файлы. Введение в разработку в нескольких файлах на примере задачи "Синонимы"

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

class TestRunner
{
public:
	template<typename TestFunc>
	void RunTest(TestFunc func, const string& test_name)
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
	~TestRunner()
	{
		if (fail_count > 0)
		{
			cerr << fail_count << " tests failed. Terminate";
			exit(1);
		}
	}
private:
	int fail_count = 0;
};