/// @author Maltseva K.V.
/// ����������  ������������ ������� "�������� ��������"
#include "ClassAnimal.h"
#include <iostream>
#include <exception>
#include <string>

using namespace std;
/// ������� �� double � string
string eraseNulls(double number) {
	string numStr = to_string(number);
	if (numStr[numStr.size() - 1] == '0')
		for (size_t i = numStr.size() - 1; numStr[i] == '0'; i--)
			numStr.erase(i, 1);

	if (numStr[numStr.size() - 1] == '.')
		numStr.erase(numStr.size() - 1, 1);
	return numStr;
}
/// ����������� ��� ����������
Pets::Pets() {
	
	name = "Kuzya";
	color = "Black";
	weight = 2;
	sound = "";
}

/// ����������� � ����������� 
Pets::Pets(string name1, string color1, double weight1, string sound1) {
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
/// ����������
Pets::~Pets() {}
///������� � ������ ���������� � �������� ��������
string Pets::toString() {
	return "name: " + name + "; " + " color: " + color + "; " + " weight gramm: " + eraseNulls(weight) + "; " + " sound: " + sound + "; ";
}
/// ���������� ���
void Pets::set_name(string name1) {
	if (name1 == "") throw invalid_argument("Error: field name is empty");
	name = name1;
}
/// ������� ���
string Pets::get_name()const {
	return name;
}
/// ���������� ����
void Pets::set_color(string color1) {
	if (color1 == "") throw invalid_argument("Error: field color is empty");
	color = color1;
}
/// ������� ����
string Pets::get_color() const {
	return color;
}
/// ���������� ���
void Pets::set_weight(double weight1) {
	if (weight1 != (double)weight1) throw invalid_argument("Error: field weight is empty");
	if (weight1 <= 0) throw invalid_argument("Error: field weight <= 0");
	weight = weight1;
}
/// ������� ���
double Pets::get_weight()const {
	return weight;
}
/// ���������� ����
void Pets::set_sound(string sound1) {
	if (sound1 == "") throw invalid_argument("Error: field sound is empty");
	sound = sound1;
}
/// ������� ����
string Pets::get_sound()const {
	return sound;
}

/// ����������� ��� ����������
Dog::Dog() {
	Specialization = "hunter";
	AbilitytoSwim = 1;
	Commands = "found";
};
///�����������
Dog::Dog(string spec, bool swim, string comm) {
	if (spec == "") throw invalid_argument("Error: field specialization is empty");
	if (swim != 1 && swim != 0) throw invalid_argument("Error: field AbilitytoSwim; is empty");
	if (comm == "") throw invalid_argument("Error: field commands is empty");
	Specialization = spec;
	AbilitytoSwim = swim;
	Commands = comm;
}
///����������
Dog::~Dog() {};

/// ������� �������� ���� �� ��������� ������
void Dog::set_BaseType(string name1, string color1, double weight1, string sound1) {
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
/// ������� � ������ ���������� � ������
string Dog::toString() {
	return Pets::toString()  + " Specialization " + Specialization + "; " + " AbilityToSwim " + (AbilitytoSwim == 1 ? "yes" : "no") + "; " + " Commands " + Commands + "; ";
};
/// ���������� �������������
void Dog::set_specialization(string spec) {
	if (spec == "") throw invalid_argument("Error: field specialization is empty");
	Specialization = spec;
}  
/// ������� �������������
string Dog::get_specialization()const{
	return Specialization;
};
/// ���������� ������ �������
void Dog::set_AbilitytoSwim(bool swim) {
	if (swim != 1 && swim != 0) throw invalid_argument("Error: field AbilitytoSwim; is empty");
	AbilitytoSwim = swim;
} 
/// ������� ������ �������
bool Dog::get_AbilitytoSwim()const {
	return AbilitytoSwim;
};
/// ���������� ������ ������
void Dog::set_commands(string comm) {
	if (comm == "") throw invalid_argument("Error: field commands is empty");
	Commands = comm;
};
/// ������� ������ ������
string Dog::get_commands() const{
	return Commands;
};

/// ����������� ��� ����������
Parrot::Parrot() {

	AbilityToFly = 1;
	social = "Single";
};

/// ����������� � �����������
Parrot::Parrot(bool fly, string soc) {
	if (fly != 1 && fly != 0) throw invalid_argument("Error: field AbilityToFly is empty");
	if (soc == "") throw invalid_argument("Error: field social is empty");
	AbilityToFly = fly;
	social = soc;
};

/// ����������
Parrot::~Parrot(){};

/// ������� �������� ���� �� ��������� ������
void Parrot::set_BaseType(string name1, string color1, double weight1, string sound1) {
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
/// ������� � ������ ���������� � ��������
string Parrot::toString() {
	return Pets::toString()  + "AbilityToFly: " + (AbilityToFly  == 1 ? "yes" : "no") + "; " + "social: " + social + ";";
};
/// ���������� ������ ������
void Parrot::set_AbilityToFly(bool fly) {
	if (fly != 1 && fly != 0) throw invalid_argument("Error: field AbilityToFly is empty");
	AbilityToFly = fly;
};
/// ������� ������ ������
bool Parrot::get_AbilityToFly() const{
	return AbilityToFly;
};
/// ���������� ������������
void Parrot::set_social(string soc) {
	if (soc == "") throw invalid_argument("Error: field social is empty");
	social = soc;
};
/// ������� ������������
string Parrot::get_social()const{
	return social;
};



