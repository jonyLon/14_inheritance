#pragma once
#include <iostream>
using namespace std;
class Animal abstract
{
public:
	Animal(string name, const size_t& age) : name{ name }, age{ age } {
		//this->id = ++last_id;
		//cout << "Animal ctor (" << this->id << ". " << this->name << ")" << endl;
	};
	Animal() = default;
	~Animal() {
		//cout << "Animal dtor (" << this->id << ". " << this->name << ")" << endl;
	}
	void setName(string name) {
		if (name.size() == 0 || name[0] == ' ') {
			this->name = "None";
		}
		else {
			this->name = name;
		}
	}
	void setAge(const size_t& age) {
		this->age = age;
	}
	size_t getAge() const{
		return this->age;
	}
	string getName() const {
		return this->name;
	}

	//virtual void print(){
	//	cout << this->id << ". Name: " << this->name << "\t Age: " << this->age << endl;
	//}
	//virtual void eat() const = 0;
	//virtual void move() const = 0;
	virtual void sound() const = 0;
	virtual void type() const = 0;
	virtual void show() const {
		type();
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		sound();
	};

	
private:
	size_t age;
	//static size_t last_id;
protected:
	string name;
	size_t id;
};

//size_t Animal::last_id = 0;
