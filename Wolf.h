#pragma once
#include "Animal.h";
class Wolf: public Animal // public, protected, private
{
public:
	Wolf(string name, const size_t& age, const size_t& weight)
		:Animal(name, age), weight{ weight } {
		cout << "Wolf ctor (" << this->id << ". " << this->name << ")" << endl;
	}
	Wolf() = default;
	~Wolf(){
		cout << "Wolf dtor (" << this->id << ". " << this->name << ")" << endl;
	}
	virtual void print() override {
		cout << "\t-------------Wolf---------------" << endl;
		Animal::print();
		cout << "Weight: " << weight << endl;
	}
	virtual void eat() const override {
		cout << "Wolf eat" << endl;
	}
	virtual void move() const override {
		cout << "Wolf moves" << endl;
	}
protected:
	size_t weight;
};

