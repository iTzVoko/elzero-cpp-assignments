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
	// 10
	// 100
	// 10000
	// 100000000

	// For loop
	for (int i = 10; i <= 100000000; i *= i)
	{
		std::cout << i << '\n';
	}

	std::cout << "============\n";

	// While loop
	int i = 10;

	while (i <= 100000000)
	{
		std::cout << i << '\n';

		i *= i;
	}

	return 0;
}
