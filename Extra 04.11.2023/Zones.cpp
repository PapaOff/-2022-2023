#include <iostream>

int main()
{
    float x, y;
	float r = 2;
	std::cin >> x >> y;

	float distance = x * x + y * y;
	if (r * r >= distance) 
	{
		if (x > 0 && y > 0)
		{
			if (x <= 1 && y <= 1)
			{
				std::cout << "inside purple zone";
			}
			else
			{
				std::cout << "inside red zone";
			}
		}
		else if (x < 0 && y < 0))
		{
			if (x >= -1 && y >= -1)
			{
				std::cout << "inside blue zone";
			}
			else
			{
				std::cout << "inside red zone";
			}
		}
		else if (x >= -1 && y <= 1 || x <= 1 && y >= -1)
		{
			std::cout << "not in any zone";
		}
		else
		{
			std::cout << "inside orange zone";
		}
	}
	else
	{
		std::cout << "not in any zone";
	}
}