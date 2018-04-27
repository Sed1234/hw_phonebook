#include "PhoneBook.h"
#include <iostream>
#include "DATE.h"
#include "TEL.h"

	std::string const PhoneBook::GetSurname() const {
		return surname;
	}


	void PhoneBook::SetSurname(std::string surname)
	{
		this->surname = surname;
		
	}

	//имья
	std::string const PhoneBook::GetName() const {
		return name;
	}


	void PhoneBook::SetName(std::string name)
	{
		this->name = name;
	}

	//отчество
	std::string const PhoneBook::GetPatronymic() const
	{
		return patronymic;
	}

	void PhoneBook::SetPatronymic(std::string patronymic)
	{
		this->patronymic = patronymic;
	}
	//домашний  адресс
	std::string const PhoneBook::GetAdress() const
	{
		return adress;
	}

	void PhoneBook::SetAdress(std::string adress)
	{
		this->adress = adress;
	}
	//сколько лет
	int PhoneBook::GetAge() const
	{
		return age;
	}

	void PhoneBook::SetAge(int age)
	{
		this->age = age;
	}

	//дата рождения
	DATE PhoneBook::GetBirthday() const
	{
		return birthday;
	}

	void PhoneBook::SetBirthday(int day, int month, int year)
	{
		if ((day < 1 || day > 31 && month == (1, 3, 5, 7, 8, 10, 12)) || (day < 1 || day > 28 && month == 2) ||
			(day < 1 || day > 30 && month == (4, 6, 9, 11))) throw "error date!";
		birthday.SetDay(day);
		birthday.SetMonth(month);
		birthday.SetYear(year);
	}

	//телефонные номера


	int PhoneBook:: GetPhone() 
	{
		return phone.GetHome();
	}

	void PhoneBook::SetPhone(int work, int home, int mob)
	{
		if (work < 0 || work > 99999 || home < 0 || home > 999999 ||
			mob < 0 || mob > 999999999) throw "error date!";

		phone.SetMob(mob);
		phone.SetHome(home);
		phone.SetWork (work);

	}

	PhoneBook::PhoneBook()
	{
	
	}
	PhoneBook::PhoneBook(std::string Surname, std::string Name, std::string Patronymic, std::string Adress, int Age, DATE Birthday, TEL Phone)
		
	{
		this->name = Name;
		this->surname = Surname;
		this->patronymic = Patronymic;
		this->adress = Adress;
		this->age = Age;
		this->birthday = Birthday;
		this->phone = Phone;
	}
	void PhoneBook::show_contact()
	{
		std::cout << "Surname: " << surname << std::endl
			<< "Name:\t" << name << std::endl
			<< "Patronymic:\t" << patronymic << std::endl
			<< "Adress:\t" << adress << std::endl
			<< "Age:\t" << age << " years" << std::endl
			<< "Birthday: " << birthday.DATE::GetDay() << '.' << birthday.DATE::GetMonth() << '.' << birthday.DATE::GetYear() << std::endl
			<< "Phone num-s :" << "\n mob.: " << phone.TEL::GetMob() << "\n home.: " << phone.TEL::GetHome() << "\n work.: " << phone.TEL::GetWork() << std::endl;

	}
	
