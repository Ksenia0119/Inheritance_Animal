/// @author Maltseva K.V.

/// Реализация  наследования классов "Домашние животные"
#include "ClassAnimal.h"
#include <iostream>
#include <exception>
#include <string>

using namespace std;
/// Перевод из double в string
string eraseNulls(double number) {
	string numStr = to_string(number);
	if (numStr[numStr.size() - 1] == '0')
		for (size_t i = numStr.size() - 1; numStr[i] == '0'; i--)
			numStr.erase(i, 1);

	if (numStr[numStr.size() - 1] == '.')
		numStr.erase(numStr.size() - 1, 1);
	return numStr;
}
/// Конструктор без параметров
Pets::Pets() {
	
	name = "Kuzya";
	color = "Black";
	weight = 2;
	sound = "";
}

/// Конструктор с параметрами 
Pets::Pets(const string &name1, const string &color1, double weight1,const string &sound1) {
	if (name1 == "") throw invalid_argument("Error: field name is empty");
	if (color1 == "") throw invalid_argument("Error: field color is empty");
	if (weight1 != (double)weight1) throw invalid_argument("Error: field weight is empty");
	if (weight1 <= 0) throw invalid_argument("Error: field weight <= 0");
	if (sound1 == "") throw invalid_argument("Error: field sound is empty");
	name = name1;
	color = color1;
	weight = weight1;
	sound = sound1;
}
/// Деструктор
Pets::~Pets() {}
///Вывести в строку информацию о домашнем животном
string Pets::toString() {
	return "name: " + name + "; " + " color: " + color + "; " + " weight gramm: " + eraseNulls(weight) + "; " + " sound: " + sound + "; ";
}
/// Установить имя
void Pets::set_name(const string &name1) {
	if (name1 == "") throw invalid_argument("Error: field name is empty");
	name = name1;
}
/// Вернуть имя
string Pets::get_name()const {
	return name;
}
/// Установить цвет
void Pets::set_color(const string &color1) {
	if (color1 == "") throw invalid_argument("Error: field color is empty");
	color = color1;
}
/// Вернуть цвет
string Pets::get_color() const {
	return color;
}
/// Установить вес
void Pets::set_weight(double weight1) {
	if (weight1 != (double)weight1) throw invalid_argument("Error: field weight is empty");
	if (weight1 <= 0) throw invalid_argument("Error: field weight <= 0");
	weight = weight1;
}
/// Вернуть вес
double Pets::get_weight()const {
	return weight;
}
/// Установить звук
void Pets::set_sound(const string &sound1) {
	if (sound1 == "") throw invalid_argument("Error: field sound is empty");
	sound = sound1;
}
/// Вернуть звук
string Pets::get_sound()const {
	return sound;
}

/// Конструктор без параметров
Dog::Dog() {
	Specialization = "hunter";
	AbilitytoSwim = 1;
	Commands = "found";
};
///Конструктор
Dog::Dog(const string &spec, bool swim,const string &comm) {
	if (spec == "") throw invalid_argument("Error: field specialization is empty");
	//if (swim != 1 && swim != 0) throw invalid_argument("Error: field AbilitytoSwim; is empty");
	if (comm == "") throw invalid_argument("Error: field commands is empty");
	Specialization = spec;
	AbilitytoSwim = swim;
	Commands = comm;
}
///Деструктор
Dog::~Dog() {};

/// Задание базового типа из основного класса
void Dog::set_BaseType(const string &name1, const string &color1, double weight1,const string &sound1) {
	if (name1 == "") throw invalid_argument("Error: field name is empty");
	if (color1 == "") throw invalid_argument("Error: field color is empty");
	if (weight1 != (double)weight1) throw invalid_argument("Error: field weight is empty");
	if (weight1 <= 0) throw invalid_argument("Error: field weight <= 0");
	if (sound1 == "") throw invalid_argument("Error: field sound is empty");
	name = name1;
	color = color1;
	weight = weight1;
	sound = sound1;
};
/// Вернуть в строку информацию о собаке
string Dog::toString() {
	return Pets::toString()  + " Specialization " + Specialization + "; " + " AbilityToSwim " + (AbilitytoSwim == 1 ? "yes" : "no") + "; " + " Commands " + Commands + "; ";
};
/// Установить специализацию
void Dog::set_specialization(const string &spec) {
	if (spec == "") throw invalid_argument("Error: field specialization is empty");
	Specialization = spec;
}  
/// Вернуть специализацию
string Dog::get_specialization()const{
	return Specialization;
};
/// Установить умение плавать
void Dog::set_AbilitytoSwim(bool swim) {
	//if (swim != 1 && swim != 0) throw invalid_argument("Error: field AbilitytoSwim; is empty");
	AbilitytoSwim = swim;
} 
/// Вернуть умение плавать
bool Dog::get_AbilitytoSwim()const {
	return AbilitytoSwim;
};
/// Установить знание команд
void Dog::set_commands(const string &comm) {
	if (comm == "") throw invalid_argument("Error: field commands is empty");
	Commands = comm;
};
/// Вернуть знание команд
string Dog::get_commands() const{
	return Commands;
};

/// Конструктор без параметров
Parrot::Parrot() {

	AbilityToFly = 1;
	social = "Single";
};

/// Конструктор с параметрами
Parrot::Parrot(bool fly, const string &soc) {
	//if (fly != 1 && fly != 0) throw invalid_argument("Error: field AbilityToFly is empty");
	if (soc == "") throw invalid_argument("Error: field social is empty");
	AbilityToFly = fly;
	social = soc;
};

/// Деструктор
Parrot::~Parrot(){};

/// Задание базового типа из основного класса
void Parrot::set_BaseType(const string &name1, const string &color1, double weight1,const string &sound1) {
	if (name1 == "") throw invalid_argument("Error: field name is empty");
	if (color1 == "") throw invalid_argument("Error: field color is empty");
	if (weight1 != (double)weight1) throw invalid_argument("Error: field weight is empty");
	if (weight1 <= 0) throw invalid_argument("Error: field weight <= 0");
	if (sound1 == "") throw invalid_argument("Error: field sound is empty");
	name = name1;
	color = color1;
	weight = weight1;
	sound = sound1;
};
/// Вывести в строку информацию о ппопугае
string Parrot::toString() {
	return Pets::toString()  + "AbilityToFly: " + (AbilityToFly  == 1 ? "yes" : "no") + "; " + "social: " + social + ";";
};
/// Установить умение летать
void Parrot::set_AbilityToFly(bool fly) {
	if (fly != 1 && fly != 0) throw invalid_argument("Error: field AbilityToFly is empty");
	AbilityToFly = fly;
};
/// Вернуть умение летать
bool Parrot::get_AbilityToFly() const{
	return AbilityToFly;
};
/// Установить социализацию
void Parrot::set_social( const string &soc) {
	if (soc == "") throw invalid_argument("Error: field social is empty");
	social = soc;
};
/// Вернуть социализацию
string Parrot::get_social()const{
	return social;
};



