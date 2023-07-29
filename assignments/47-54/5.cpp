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
	// 0
	// 3
	// 6
	// 9
	// 12
	// 15
	// 18
	// 21
	// 24
	// 27

	// For loop
	for (int i = 0; i <= 27; i += 3)
	{
		std::cout << i << '\n';
	}

	std::cout << "============\n";

	// While loop
	int i = 0;

	while (i <= 27)
	{
		std::cout << i << '\n';

		i += 3;
	}

	return 0;
}
