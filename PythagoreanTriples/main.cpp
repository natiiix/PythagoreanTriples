#include <iostream>
#include <math.h>

const int getLength(const int x, const int y)
{
	double length = sqrt((double)(x * x) + (double)(y * y));
	
	if (std::floor(length) == length)
	{
		return (int)length;
	}
	else
	{
		return -1;
	}
}

int main(void)
{
	const int LIMIT = 10000;
	int counter = 0;

	for (int x = 1; x < LIMIT; x++)
	{
		for (int y = x; y < LIMIT; y++)
		{
			int length = getLength(x, y);

			if (length > 0)
			{
				std::cout << "{ " << x << "; " << y << "; " << length << " }" << std::endl;
				counter++;
			}
		}
	}

	std::cout << "There are " << counter << " Pythagorean Triples for x = <1; " << (LIMIT - 1) << "> and y >= x.";

	std::cin.sync();
	std::cin.get();

	return 0;
}
