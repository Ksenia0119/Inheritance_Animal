/// @author Maltseva K.V.

/// Реализация  наследования классов "Домашние животные"
#include <iostream>
#include <exception>
#include "ClassAnimal.h"

int main() {
	try {
		Pets Pets0("Kapa", "Orange", 350, "hello my dear friend");

		Dog Dog1("Savior", "Yes", "Sit");
		Dog1.set_AbilitytoSwim(0);
		Dog1.set_BaseType("Bobik", "Black fnd white", 16000, "GAV");
		Dog1.set_name("Rex");


		Parrot Parrot1("Yes", "LovebirdsK");
		Parrot1.set_AbilityToFly(1);
		Parrot1.set_BaseType("Gosha", "Blue", 531.1, "CHIRIK");
		


		cout << Pets0.toString() << endl;
		cout << Dog1.toString() << endl;
		cout << Parrot1.toString() << endl;


		Pets Pets1;
		Dog Dog2;
		Pets* Pets2 = &Dog2; ///Указатель на тип Dog
		Pets* Pets3 = new Parrot; //Создание динамического объекта

		cout << Pets2->toString() << endl;
		cout << Pets3->toString() << endl; //Программа сама распознает какой тип хранится в Pets2 и Pets3

		
	}
	catch (invalid_argument e) {
		cout << e.what();
	}
}
