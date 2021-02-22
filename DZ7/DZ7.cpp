#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected :
	string name;
public:
	Animal(string nema) : name(name) {}

	virtual void Say() = 0;

};

class Dog : public Animal
{
public:
	Dog(string name ) : Animal(name) {}

	void Say() override
	{
		cout << name << "GAV-GAV" << endl;
	}
};

class Cat : public Animal
{
public: 
	Cat(string name) : Animal(name) {}

	void Say() override
	{
		cout << name << "MAY-MAY" << endl;
	}
};

class Donald_Duck : public Animal
{
public:
	Donald_Duck(string name) : Animal(name) {}
    
	void Say() override
	{
		cout << name << "KREY-KREY" << endl;
	}
};

int main()
{
	Animal* animals[3] = { new Dog("Dog") , new Cat("Cat") , new Donald_Duck("Donald Duck") };

	for (int i = 0; i < 3; i++)
	{
		animals[i]->Say();
   }

	return 0;


}