#pragma once
#include <iostream>
#include "DATE.h"
#include "TEL.h"
#include <string>
class PhoneBook
{
	std::string  surname;   //�������
	std::string   name ;      //���
	std::string   patronymic;//��������
	std::string  adress;//��������  ������
	int age;            //�������
	DATE birthday;      //����, ����� � ��� ��������
	TEL phone;          //����� ��������
public:
	std::string const GetSurname() const;
	void SetSurname(std::string);
	//���
	std::string const GetName() const;
	void SetName(std::string );
	//��������
	std::string const GetPatronymic() const;
	void SetPatronymic(std::string );
	//��������  ������
	std::string const GetAdress() const;
	void SetAdress(std::string );
	//������� ���
	int GetAge() const;
	void SetAge(int);
	//���� ��������
	DATE GetBirthday() const;
	void SetBirthday(int, int, int);
	//���������� ������
	int GetPhone();
	void SetPhone(int , int , int );
	PhoneBook();
	PhoneBook(std::string, std::string, std::string, std::string, int, DATE, TEL);
	void show_contact();
	//PhoneBook();
	//~PhoneBook();
};

