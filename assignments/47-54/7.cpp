/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
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

	std::cout << "============\n";

	// While loop
	int i = 2;

	while (i <= 128)
	{
		std::cout << i << '\n';

		i *= 2;
	}

	return 0;
}
