#include <iostream>
#pragma warning(disable:4996)

using namespace std;

void mySwap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void bubbleSort(int* arr, int size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				mySwap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main()
{
	int size;
	cin >> size;

	int* arr = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	bubbleSort(arr, size);
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}