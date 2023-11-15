#pragma once
#include "Animal.h" 
class Hamster : public Animal
{
public:
	Hamster(string name, const size_t& age) : Animal(name, age) {

	}
	virtual void sound() const override {
		cout << "Sound: Squeak" << endl;
	}
	virtual void type() const override {
		cout << "Type: Hamster" << endl;
	}
};

