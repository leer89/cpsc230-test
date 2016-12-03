/*
Program /// ClassesCPSC230.cpp
Program to demonstrate a very simple example of a class.
a better version of the class DayOfYear will be given in 
Display 10.4
*/

#include "stdafx.h"
using namespace std;

class DayOfYear
{
public:
	void output();
	int month;
	int day;
};

int main()
{
	DayOfYear today, birthday;

	cout << "Enter today's date:\n";
	cout << "Enter month as a number: ";
	cin >> today.month;
	cout << "Enter the day of the month: ";
	cin >> today.day;
	cout << endl;
	cout << "Enter your birthday:\n";
	cout << "Enter month as a number: ";
	cin >> birthday.month;
	cout << "Enter the day of the month: ";
	cin >> birthday.day;
	cout << endl;

	cout << "Today's date is ";
	today.output();
	cout << "Your birthday is ";
	birthday.output();

	if (today.month == birthday.month && today.day == birthday.day)
		cout << "Happy Birthday!\n";
	else
		cout << "Happy UnBirthday!\n";

    return 0;
}

// uses iostream
void DayOfYear::output()
{
	cout << "month = " << month
		<< ", day = " << day << endl;
}

