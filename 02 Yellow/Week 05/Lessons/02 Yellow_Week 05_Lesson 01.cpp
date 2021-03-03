// Основы разработки на C++: желтый пояс. Пятая неделя
// Наследование. Введение в наследование

#include <iostream>
using namespace std;

struct Fruit
{
	int health = 0;
	string type = "fruit";
};

struct Apple : public Fruit
{
	Apple()
	{
		health = 10;
		type = "apple";
	}
};

struct Orange : public Fruit
{
	Orange()
	{
		health = 5;
		type = "orange";
	}
};

struct Pineapple : public Fruit
{
	Pineapple()
	{
		health = 15;
		type = "pineapple";
	}
};

class Animal
{
public:
	string type = "animal";
	void Eat(const Fruit& f)
	{
		cout << type << " eats " << f.type << ". " << f.health << "hp." << endl;
	}
};

class Cat : public Animal
{
public:
	Cat()
	{
		type = "cat";
	}
	void Meow() const
	{
		cout << "meow!" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog()
	{
		type = "dog";
	}
};

void DoMeal(Animal& a, Fruit& f)
{
	a.Eat(f);
	a.type += "*";
}

int main()
{
	Cat c;
	c.Meow();
	Apple a;
	Orange o;
	Pineapple p;
	c.Eat(a);
	c.Eat(o);
	c.Eat(p);
	
	Dog d;
	d.Eat(a);
	d.Eat(o);
	d.Eat(p);
	
	DoMeal(d, a);
	return 0;
}