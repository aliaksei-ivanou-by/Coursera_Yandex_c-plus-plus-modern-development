// Основы разработки на C++: желтый пояс. Пятая неделя
// Полиморфизм. Хранение объектов разных типов в контейнере с помощью shared_ptr

#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Animal
{
public:
	Animal(const string& type):
		type_{ type }
	{}
	void Eat(const string& fruit)
	{
		cout << type_ << " eats " << fruit << endl;
	}
	virtual void Voice() const = 0;
private:
	const string type_;
};

class Cat : public Animal
{
public:
	Cat():
		Animal{ "cat" }
	{}
	void Voice() const override
	{
		cout << "Meow!" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog():
		Animal{ "dog" }
	{}
	void Voice() const override
	{
		cout << "Whaf!" << endl;
	}
};

class Parrot : public Animal
{
public:
	Parrot(const string& name):
		Animal{ "parrot" },
		name_{ name }
	{}
	void Voice() const override
	{
		cout << name_ << " is good!" << endl;
	}
private:
	const string name_;
};

class Horse : public Animal
{
public:
	Horse():
		Animal{ "horse" }
	{}
	void Voice() const override
	{
		cout << "Horse sound" << endl;
	}
};

void MakeSound(const Animal& a)
{
	a.Voice();
}

int main()
{
	shared_ptr>Animal> a;
	a = make_shared<Cat>();
	a->Sound();
	
	vector<shared_ptr<Animal>> animals = {
		make_shared<Cat>(),
		make_shared<Dog>(),
		make_shared<Parrot>("Kesha")
	};
	for (auto a : animals)
	{
		MakeSound(*a);
	}
	return 0;
}