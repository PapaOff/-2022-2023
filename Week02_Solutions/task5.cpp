#include <iostream>

using namespace std;

/*
Използвайте оператор switch като според въведен месец от годината (цяло число) да се изведе кой сезон е.
Валидирайте (Какво ще стане ако въведем месец 0 или месец 10000)

Вход: 6
Изход: The season is summer!
*/

int main()
{
	int month;

	cout << "Enter a month [1-12]: ";
	cin >> month;

	switch (month)
	{
	case 3:
	case 4: // if the month is 3 OR 4 (this is why the 'break' is missing)
		cout << "It's spring!"; 
		break;
	case 5:
	case 6:
	case 7:
	case 8: // if the month is 5 OR 6 OR 7 OR 8
		cout << "It's summer!";
		break;
	case 9:
	case 10:
	case 11:
		cout << "It's autumn!";
		break;
	case 12:
	case 1:
	case 2:
		cout << "It's winter!";
		break;
	default: // if the month is any other number that is not 1 - 12
		cout << "Invalid month...";
		break;
	}
}