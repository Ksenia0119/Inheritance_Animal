/// @author Maltseva K.V.
/// Реализация  наследования классов "Домашние животные"


#pragma once
#include <iostream>

using namespace std;


class Pets				/// Класс Домашние животные
{
protected:
	string name;       /// Имя
	string color;     /// Цвет
	double weight;    /// Вес
	string sound;     ///Звук

public:

	Pets(); /// Конструктор без параметров
	
	Pets(string name1, string color1, double weight1, string sound1); /// Конструктор с параметрами

	~Pets(); /// Деструктор

	virtual string toString(); /// Вывод в одну строку виртуальный 

	void set_name(string name1); /// Установить имя

	string get_name() const;			/// Вернуть имя

	void set_color(string color1); /// Установить цвет

	string get_color()const;			/// Вернуть цвет

	void set_weight(double weight1); /// Установить вес

	double get_weight()const;     /// Вернуть вес

	void set_sound(string sound1); /// Установить имя

	string get_sound()const;			/// Вернуть имя

};


/// Класс Собаки
class Dog: public Pets {  
private:
	string Specialization; /// Специализация(охотничья,поводырь,сторожевая и т.д)
	bool AbilitytoSwim; /// Умение плавать
	string Commands; ///Знание команд
public:
	Dog();/// Конструктор без параметров

	Dog(string spec, bool swim, string comm);/// Конструктор с параметрами
	~Dog();/// Деструктор

	void set_BaseType(string name1, string color1, double weight1, string sound1); /// Задание базового типа из основного класса

	string toString() override;			///Вывод в одну строку виртуальный (с перезагрузкой)

	void set_specialization(string spec); /// Установить специализацию

	string get_specialization()const; /// Вернуть специализацию

	void set_AbilitytoSwim(bool swim); /// Установить умение плавать

	bool get_AbilitytoSwim()const;/// Вернуть умение плавать

	void set_commands(string comm); /// Установить знание команд

	string get_commands()const;/// Вернуть знание команд
};

/// Класс Попугаи
class Parrot : public Pets
{
protected:
	bool AbilityToFly; ///Умение летать
	string social; ///Социализация (живут ли одни/неразлучники)
public:

	Parrot();     /// Конструктор без параметров

	Parrot(bool fly, string soc);    /// Конструктор с параметрами

	~Parrot();    ///Деструктор

	void set_BaseType(string name1, string color1, double weight1, string sound1); /// Задание базового типа из основного класса

	string toString() override; ///Вывод в одну строку виртуальный (с перезагрузкой)

	void set_AbilityToFly(bool fly); ///Установить умение летать

	bool get_AbilityToFly()const;///Вернуть умение летать

	void set_social(string soc); ///Установить социализацию

	string get_social()const; ///Вернуть социализацию
	
	
};


