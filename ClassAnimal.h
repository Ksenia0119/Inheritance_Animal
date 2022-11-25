/// @author Maltseva K.V.
/// ����������  ������������ ������� "�������� ��������"


#pragma once
#include <iostream>

using namespace std;


class Pets				/// ����� �������� ��������
{
protected:
	string name;       /// ���
	string color;     /// ����
	double weight;    /// ���
	string sound;     ///����

public:

	Pets(); /// ����������� ��� ����������
	
	Pets(string name1, string color1, double weight1, string sound1); /// ����������� � �����������

	~Pets(); /// ����������

	virtual string toString(); /// ����� � ���� ������ ����������� 

	void set_name(string name1); /// ���������� ���

	string get_name() const;			/// ������� ���

	void set_color(string color1); /// ���������� ����

	string get_color()const;			/// ������� ����

	void set_weight(double weight1); /// ���������� ���

	double get_weight()const;     /// ������� ���

	void set_sound(string sound1); /// ���������� ���

	string get_sound()const;			/// ������� ���

};


/// ����� ������
class Dog: public Pets {  
private:
	string Specialization; /// �������������(���������,��������,���������� � �.�)
	bool AbilitytoSwim; /// ������ �������
	string Commands; ///������ ������
public:
	Dog();/// ����������� ��� ����������

	Dog(string spec, bool swim, string comm);/// ����������� � �����������
	~Dog();/// ����������

	void set_BaseType(string name1, string color1, double weight1, string sound1); /// ������� �������� ���� �� ��������� ������

	string toString() override;			///����� � ���� ������ ����������� (� �������������)

	void set_specialization(string spec); /// ���������� �������������

	string get_specialization()const; /// ������� �������������

	void set_AbilitytoSwim(bool swim); /// ���������� ������ �������

	bool get_AbilitytoSwim()const;/// ������� ������ �������

	void set_commands(string comm); /// ���������� ������ ������

	string get_commands()const;/// ������� ������ ������
};

/// ����� �������
class Parrot : public Pets
{
protected:
	bool AbilityToFly; ///������ ������
	string social; ///������������ (����� �� ����/������������)
public:

	Parrot();     /// ����������� ��� ����������

	Parrot(bool fly, string soc);    /// ����������� � �����������

	~Parrot();    ///����������

	void set_BaseType(string name1, string color1, double weight1, string sound1); /// ������� �������� ���� �� ��������� ������

	string toString() override; ///����� � ���� ������ ����������� (� �������������)

	void set_AbilityToFly(bool fly); ///���������� ������ ������

	bool get_AbilityToFly()const;///������� ������ ������

	void set_social(string soc); ///���������� ������������

	string get_social()const; ///������� ������������
	
	
};


