#include <iostream>

using namespace std;

/*
Направете конзолен калкулатор с основните действия +, -, *, /
Използвайте switch!

Вход: 1 + 5
Изход: 6
*/

int main()
{
	double a, b;
	char op;
	double result;

	cout << "Enter a basic math equation: "; //ask the user for input
	cin >> a >> op >> b;

	switch (op)
	{
	case '+': 
		result = a + b;
		break;
	case '-': 
		result = a - b;
		break;
	case '*': 
		result = a * b;
		break;
	case '/': 
		if (b != 0) // check if b is NOT 0
		{
			result = a / b;
		}
		else // if b is 0, then a message pops and the program exits
		{
			cout << "Cannot divide by 0";
			return 0; // exits the program
		}
		break;
	default:
		cout << "invalid operation\n";
		return 0; // exits the program ('break' is not needed in that case)
	}
	cout << "Result: " << result;
}