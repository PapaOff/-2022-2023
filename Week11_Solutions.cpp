#include <iostream>
#include <cmath>

int fibonachi(int n)
{
	if (n <= 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}
	return fibonachi(n - 1) + fibonachi(n - 2);
}

// racecar

int strSize(const char* str)
{
	int size = 0;
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	return size;
}

bool paliRecHelper(const char* str, int startIndex, int endIndex)
{
	if (str[startIndex] != str[endIndex])
	{
		return false;
	}
	if (startIndex >= endIndex)
	{
		return true;
	}
	return paliRecHelper(str, startIndex + 1, endIndex - 1);
}

bool paliRec(const char* str)
{
	return paliRecHelper(str, 0, strSize(str) - 1);
}




int numberOfWords(const char* str) 
{

	if (str[0] == '\0')
	{
		return 1;
	}
	if (str[0] == ' ')
	{
		return 1 + numberOfWords(str + 1);
	}
	return numberOfWords(str + 1);
}

int biggestNumber(const int* arr, int length)
{
	if (length == 1)
	{
		return arr[length-1];
	}
	int num = biggestNumber(arr, length - 1);
	return arr[length - 1] > num ? arr[length - 1] : num;
}

int smallestNumber(const int* arr, int length)
{
	if (length == 1)
	{
		return arr[length - 1];
	}
	int num = smallestNumber(arr, length - 1);
	return arr[length - 1] < num ? arr[length - 1] : num;
}
void revStr(char* str) { //i
	if (*str == '\0'){
		return;
	}
	  revStr(str + 1);
	std::cout << *str;
}
void normalStr(char* str) { //i
	if (*str == '\0') {
		return;
	}
	std::cout << *str;
	revStr(str + 1);
}

//1234 -> 4321
//4 -> 123
//3 -> 12

int numSize(int n)
{
	int size = 0;
	while (n > 0)
	{
		size++;
		n /= 10;
	}
	return size;
}
//4000 + 300 + 20 + 1
int printRevrseTwo(int input)
{
	if (input < 10)
	{
		return input;
	}
	//return (input % 10)*pow(10,numSize(input) - 1) + printRevrseTwo(input / 10);
	return (input % 10)*pow(10,numSize(input) - 1) + printRevrseTwo(input / 10);
}

void printReverseNum(int input)
{
	if (input == 0)
	{
		return;
	}
	std::cout << input % 10;
	printReverseNum(input / 10);
}

bool isPrime(int input, int divider)
{
	if (divider > input/2)
	{
		return true;
	}
	
	return (input % divider != 0) && isPrime(input, divider + 1);
}

bool primeIter(int number) {
	for (int i = 2; i < number/2; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}
//mami
int main()
{
	
	std::cout << primeIter(13);
	
}
