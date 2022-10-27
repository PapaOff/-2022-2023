#include <iostream>

using namespace std;

/*
По въведена година проверете дали тя е високосна.
(hint: Една година е високосна, когато тя се дели на 4 без остатък.
Специално правило се прилага, когато последните две цифри на годината са нули.
Тогава допълнителното условие годината да е високосна е да се дели на 400 без остатък.)

Вход: 2016
Изход: 2016 is a leap year

Вход: 1900
Изход: 1900 is not a leap year
*/

int main()
{
	int year;
	cout << "Enter a year: ";
	cin >> year;

	if (year % 400 == 0) // if the year is divisible by 400, then it 100% is a leap year
	{
		cout << year << " is a leap year";
	}
	else if (year % 100 == 0) // however, if a year is divisible by 100 and NOT divisible by 400, then it is 100% NOT a leap year
	{
		cout << year << " is NOT a leap year";
	}
	else if (year % 4 == 0) // if a year is neither divisible by 400 or 100, but it is by 4, then it is a leap year
	{
		cout << year << " is a leap year";
	}
	else // in any other case - it is not a leap year
	{
		cout << year << " is NOT a leap year";
	}
}