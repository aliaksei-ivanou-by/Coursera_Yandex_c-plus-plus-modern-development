// Основы разработки на C++: желтый пояс. Пятая неделя
// Полиморфизм. Задача разбора арифметического выражения. Описание решения

#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Node
{
public:
	virtual int Evaluate()
	{
		return 0;
	}
};

class Digit : public Node
{
public:
	Digit(int d):
		d_{ d }
	{}
	int Evaluate() override
	{
		return d_;
	}
private:
	const int d_;
};

class Variable : public Node
{
public:
	Variable(const int& x):
		x_{ x }
	{}
	int Evaluate() override
	{
		return x_;
	}
private:
	const int& x_;
};

class Operation : public Node
{
public:
	Operation(char op, shared_ptr<Node> left, shared_ptr<Node> right):
		op_{ op },
		left_{ left },
		right_{ right }
	{}
	int Evaluate() override
	{
		if (op_ == '*')
		{
			return left_->Evaluate() * right_->Evaluate();
		}
		else
		{
			if (op_ == '+')
			{
				return left_->Evaluate() + right_->Evaluate();
			}
			else
			{
				if (op_ == '-')
				{
					return left_->Evaluate() - right_->Evaluate();
				}
			}
		}
		return 0;
	}
private:
	const char op_;
	shared_ptr<Node> left_;
	shared_ptr<Node> right_;
};

Node Parse(const string& tokens, int& x)
{
	
}

int main()
{
	// string tokens = "5+7-x*x+x";
	
	cout << "Enter expression: ";
	cin >> tokens;
	int x;
	auto expr = Parse(tokens, x);
	
	cout << "Enter x: ";
	while (cin >> x)
	{
		cout << expr->Evaluate() << endl;
		cout << "Enter x: ";
	}
	return 0;
}