#pragma once
#include <iostream>
#include "DATE.h"
#include "TEL.h"
#include <string>
class PhoneBook
{
	std::string  surname;   //фамили€
	std::string   name ;      //им€
	std::string   patronymic;//отчество
	std::string  adress;//домашний  адресс
	int age;            //возраст
	DATE birthday;      //день, мес€ц и год рождени€
	TEL phone;          //номер телефона
public:
	std::string const GetSurname() const;
	void SetSurname(std::string);
	//им€
	std::string const GetName() const;
	void SetName(std::string );
	//отчество
	std::string const GetPatronymic() const;
	void SetPatronymic(std::string );
	//домашний  адресс
	std::string const GetAdress() const;
	void SetAdress(std::string );
	//сколько лет
	int GetAge() const;
	void SetAge(int);
	//дата рождени€
	DATE GetBirthday() const;
	void SetBirthday(int, int, int);
	//телефонные номера
	int GetPhone();
	void SetPhone(int , int , int );
	PhoneBook();
	PhoneBook(std::string, std::string, std::string, std::string, int, DATE, TEL);
	void show_contact();
	//PhoneBook();
	//~PhoneBook();
};

