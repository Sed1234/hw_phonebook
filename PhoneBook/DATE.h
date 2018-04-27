#pragma once
class DATE
{
	unsigned int day;
	unsigned int month;
	unsigned int year;
public:
	DATE(int , int , int );
	int GetDay() const;
	void SetDay(int);
	int GetMonth() const;
	void SetMonth(int);
	int GetYear() const;
	void SetYear(int year);
	DATE();
	//~DATE();
};

