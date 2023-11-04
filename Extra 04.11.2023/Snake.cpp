#include <iostream>

int main()
{
    // Attention! This solutions only works correctly for displaying numbers from 1 - 99
	int n = 5;

	int counter = 1;
	for (int i = 0; i < n + 2; i++)
	{
		std::cout << "#  ";
	}
	std::cout << '\n';
	for (int i = 1; i <= n; i++)
	{
		std::cout << "#  ";
		if (i % 2 != 0)
		{
			for (int j = counter; j <= i*n; j++)
			{
				std::cout << j << ((j < 10) ? "  " : " ");
			}
		}
		else
		{
			for (int j = i*n; j >= counter; j--)
			{
				std::cout << j << ((j < 10) ? "  " : " ");
			}
		}
		counter += n;
		std::cout << "#" << std::endl;
	}
	for (int i = 0; i < n + 2; i++)
	{
		std::cout << "#  ";
	}

}