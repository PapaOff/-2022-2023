#include <iostream>

using namespace std;

/*
Дадени са коефициентите a и b на едно линейно уравнение ax + b = 0.
Изведете решението, ако има единствено такова, NO ако няма решение 
и INF, ако има безброй много решения. Работим единствено с цели числа.

Вход: 1 1
Изход: -1

Вход: 6 -2
Изход: NO
*/

int main()
{
	int a, b;
	cout << "Enter 'a' and 'b' for ax + b = 0:\n";
	cin >> a >> b;

	if (a == 0 && b == 0) // if both 'a' and 'b' are 0, then x could be anything
	{
		cout << "INF";
	}
	else
	{
		int x = -b / a; // calculate x (remember we are working only with whole numbers)
		if (a * x + b == 0)
		{
			cout << x;
		}
		else
		{
			cout << "NO";
		}
	}
}