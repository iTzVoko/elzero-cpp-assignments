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
	// 30
	// 27
	// 24
	// 21
	// 18
	// 15
	// 12
	// 9
	// 6
	// 3

	// Without Even Numbers
	// 27
	// 21
	// 15
	// 9
	// 3

	for (int i = 30; i >= 3; i -= 3)
	{
		std::cout << i << '\n';
	}

	std::cout << "============\n";

	for (int i = 30; i >= 3; i -= 3)
	{
		if (i % 2 != 0)
			std::cout << i << '\n';
	}

	return 0;
}
