#include "DATE.h"



	DATE::DATE(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
	int DATE::GetDay() const
	{
		return day;
	}

	void DATE::SetDay(int day)
	{
		this->day = day;
	}
	int DATE::GetMonth() const
	{
		return month;
	}

	void DATE::SetMonth(int month)
	{
		this->month = month;
	}
	int DATE::GetYear() const
	{
		return year;
	}

	void DATE::SetYear(int year)
	{
		this->year = year;
	}

	DATE::DATE()
	{
	}

