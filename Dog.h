#pragma once
#include "Animal.h"
class Dog :public Animal
{
public:
	Dog(string name, const size_t& age) : Animal(name, age) {

	}
	//virtual void print() {
	//	cout << "\t-------------Dog---------------" << endl;
	//	Animal::print();
	//}
	//virtual void eat() const override {
	//	cout << "Dog eat" << endl;
	//}
	//virtual void move() const override {
	//	cout << "Dog moves" << endl;
	//}
	virtual void sound() const override {
		cout << "Sound: Bark" << endl;
	}
	virtual void type() const override {
		cout << "Type: Dog" << endl;
	}
}; 

