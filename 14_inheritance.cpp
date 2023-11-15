#include "Animal.h"
//#include <vector>
//#include "Wolf.h"
//#include "Lion.h"
#include "Dog.h"
#include "Cat.h"
#include "Hamster.h"
#include "Parrot.h"
#include "Zoo.h"
int main()
{
    //Animal an("Dog", 2);
    //an.print();
    //Wolf wolf("Wolf", 4, 3);
    ////wolf.print();
    //Lion lion("Lion", 3, 5);
    //Dog dog("Dog", 2, 4);


    //vector<Animal*> zoo = { (Animal*)&wolf, (Animal*)&lion, (Animal*)&dog };
    //for(auto& item: zoo)
    //{
    //    item->print();
    //    item->eat();
    //    item->move();
    //}

    Animal* arr[] = { new Cat("Joker", 2) , new Parrot("Kesha", 1), new Hamster("Shchekan", 1), new Dog("Bubble", 3)};
    for (auto& item : arr) {
        item->show();
        cout << endl;
    }
    cout <<"=======================================================================" << endl;
    Zoo home_zoo;
    home_zoo.add(Type::cat, "Murmond", 3);
    home_zoo.add(Type::dog, "Oskar", 4);
    home_zoo.add(Type::parrot, "Wexer", 1);
    home_zoo.add(Type::hamster, "Burbon", 2);
    home_zoo.print();
    cout << "---------------------------------" << endl;
    home_zoo.sell("Oskar");
    home_zoo.print();
    cout << "---------------------------------" << endl;
    home_zoo.sellAll();
    home_zoo.print();
}


