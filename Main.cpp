/// @author Maltseva K.V.
/// Реализация  наследования классов "Домашние животные"
#include <iostream>
#include <exception>
#include "ClassAnimal.h"

int main() {
	try {
		Pets Pets0("Kapa", "Orange", 200, "Mogy govorit");

		Dog Dog1("Savior", "Yes", "Sit");
		Dog1.set_AbilitytoSwim(0);
		Dog1.set_BaseType("Kapa", "Black", 2300, "GAV");
		Dog1.set_name("Rex");


		Parrot Parrot1("Yes", "NERAZLUCHNIK");
		Parrot1.set_AbilityToFly(1);
		Parrot1.set_BaseType("Goshan", "Blue", 231.1, "CHIRIK");
		


		cout << Pets0.toString() << endl;
		cout << Dog1.toString() << endl;
		cout << Parrot1.toString() << endl;


		Pets Pets1;
		Dog Dog2;
		Pets* Pets2 = &Dog2;
		Pets* Pets3 = new Parrot;

		cout << Pets2->toString() << endl;
		cout << Pets3->toString() << endl;

		
	}
	catch (invalid_argument e) {
		cout << e.what();
	}
}
