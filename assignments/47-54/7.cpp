/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

int main()
{
	// Output Needed
	// 2
	// 4
	// 8
	// 16
	// 32
	// 64
	// 128
	
	// For loop
	for (int i = 2; i <= 128; i *= 2)
	{
		std::cout << i << '\n';
	}

	// While loop
	int i = 2;

	while (i <= 128)
	{
		std::cout << i << '\n';

		i *= 2;
	}

	return 0;
}
