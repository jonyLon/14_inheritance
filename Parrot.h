#pragma once
#include "Animal.h"
class Parrot : public Animal
{
public:
	Parrot(string name, const size_t& age) : Animal(name, age) {

	}
	virtual void sound() const override {
		cout << "Sound: Grugles" << endl;
	}
	virtual void type() const override {
		cout << "Type: Parrot" << endl;
	}
};

