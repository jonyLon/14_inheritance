#pragma once
#include "Animal.h"
class Cat : public Animal
{

public:
	Cat(string name, const size_t& age) : Animal(name, age) {

	}
	virtual void sound() const override {
		cout << "Sound: Meow" << endl;
	}
	virtual void type() const override {
		cout << "Type: Cat" << endl;
	}
};

