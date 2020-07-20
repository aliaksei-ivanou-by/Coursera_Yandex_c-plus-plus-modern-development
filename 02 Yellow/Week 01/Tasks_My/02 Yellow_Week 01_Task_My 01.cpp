// Основы разработки на C++: желтый пояс. Первая неделя
// Тренировочное задание по программированию: Суммирование матриц
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <vector>
using namespace std;

class Matrix
{
public:
	Matrix()
	{
		num_col = 0;
		num_row = 0;
	}
	Matrix(int num_row_new, int num_col_new)
	{
		Reset(num_row_new, num_col_new);
	}
	void Reset(int num_row_new, int num_col_new)
	{
		if (num_row_new < 0)
		{
			throw out_of_range("num_row must be >= 0");
		}
		if (num_col_new < 0)
		{
			throw out_of_range("num_col must be >= 0");
		}
		if (num_row_new == 0 || num_col_new == 0)
		{
			num_row_new = num_col_new = 0;
		}
		num_row = num_row_new;
		num_col = num_col_new;
		v.assign(num_row_new, vector<int>(num_col_new));
	}
	int At(int num_row_new, int num_col_new) const
	{
		return v.at(num_row_new).at(num_col_new);
	}
	int& At(int num_row_new, int num_col_new)
	{
		return v.at(num_row_new).at(num_col_new);
	}
	int GetNumRows() const
	{
		return num_row;
	}
	int GetNumColumns() const
	{
		return num_col;
	}
private:
	int num_col;
	int num_row;
	vector<vector<int>> v;
};

istream& operator>>(istream& stream, Matrix& m)
{
	int num_row;
	int num_col;
	stream >> num_row >> num_col;
	m.Reset(num_row, num_col);
	for (int row = 0; row < num_row; ++row)
	{
		for (int col = 0; col < num_col; ++col)
		{
			stream >> m.At(row, col);
		}
	}
	return stream;
}

ostream& operator<<(ostream& stream, const Matrix& m)
{
	stream << m.GetNumRows() << ' ' << m.GetNumColumns() << '\n';
	for (int row = 0; row < m.GetNumRows(); ++row)
	{
		for (int col = 0; col < m.GetNumColumns(); ++col)
		{
			if (col > 0)
			{
				stream << ' ';
			}
			stream << m.At(row, col);
		}
		stream << '\n';
	}
	return stream;
}

bool operator==(const Matrix& a, const Matrix& b)
{
	if (a.GetNumColumns() != b.GetNumColumns())
	{
		return false;
	}
	if (a.GetNumRows() != b.GetNumRows())
	{
		return false;
	}
	for (int row = 0; row < a.GetNumRows(); ++row)
	{	for (int col = 0; col < a.GetNumColumns(); ++col)
		{
			if (a.At(row, col) != b.At(row, col))
			{
				return false;
			}
		}
	}
	return true;
}

Matrix operator+(const Matrix& a, const Matrix& b)
{
	if (a.GetNumColumns() != b.GetNumColumns())
	{
		throw invalid_argument("Mismatched number of cols");
	}
	if (a.GetNumRows() != b.GetNumRows())
	{
		throw invalid_argument("Mismatched number of rows");
	}
	Matrix output(a.GetNumRows(), a.GetNumColumns());
	for (int row = 0; row < a.GetNumRows(); ++row)
	{
		for (int col = 0; col < a.GetNumColumns(); ++col)
		{
			output.At(row, col) = a.At(row, col) + b.At(row, col);
		}
	}
	return output;
}

int main()
{
	Matrix one;
	Matrix two;

	cin >> one >> two;
	cout << one + two << '\n';
	return 0;
}
