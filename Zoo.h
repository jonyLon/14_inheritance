#pragma once
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Hamster.h"
#include "Parrot.h"
#include <vector>
enum Type {
	cat = 1, dog = 2, parrot = 3, hamster = 4
};
class Zoo
{
public:
	Zoo() = default;
	~Zoo() {
		if (zoo.size() != 0) {
			for (auto& item : zoo) {
				delete item;
			}
		}
		zoo.clear();
	}
	void add(Type type, string name, const size_t& age) {
		Animal* item;
		switch (type)
		{
		case cat:
			item = new Cat(name, age);
			break;
		case dog:
			item = new Dog(name, age);
			break;
		case parrot:
			item = new Parrot(name, age);
			break;
		case hamster:
			item = new Hamster(name, age);
			break;
		}
		zoo.insert(zoo.end(), item);
	}
	void print() const {
		for (auto &item : zoo) {
			item->show();
			cout << endl;
		}
		cout << endl;
	}

	void sell(string name) {
		if (zoo.size() == 0) {
			cout << "You don't have animals" << endl;
			return;
		}
		vector<Animal*>::iterator it;
		it = remove_if(zoo.begin(), zoo.end(), [name](Animal* item) {
			return item->getName() == name;
		});
		zoo.erase(it, zoo.end());
	}
	void sellAll(){
		if (zoo.size() == 0) {
			cout << "You don't have animals" << endl;
			return;
		}
		zoo.clear();
	}
private:
	vector<Animal*>zoo;
	
};

