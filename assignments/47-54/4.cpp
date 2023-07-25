/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

int main()
{
	// Output Needed
	// 0
	// 2
	// 4
	// 6
	// 8
	// 14
	// 16
	// 18
	
	// For loop
	for (int i = 0; i <= 18; i += 2)
	{
		if (i == 10 || i == 12)
			continue;

		std::cout << i << '\n';
	}

	// While loop
	int i = 0;

	while (i <= 18)
	{
		if (i != 10 && i != 12)
			std::cout << i << '\n';

		i += 2;
	}

	return 0;
}
