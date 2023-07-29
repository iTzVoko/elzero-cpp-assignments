/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

int main()
{
	int i = 100;
	while (i <= 1000)
	{
		std::cout << i << '\n';
		i += 100;
		std::cout << i << '\n';
	}

	std::cout << "============\n";

	// We can solve it also using for loop
	for (int i = 100; i <= 1100; i += 100)
	{
		if (i != 100 && i != 1100)
			std::cout << i << '\n';

		std::cout << i << '\n';
	}

	// Output Needed
	// 100
	// 200
	// 200
	// 300
	// 300
	// 400
	// 400
	// 500
	// 500
	// 600
	// 600
	// 700
	// 700
	// 800
	// 800
	// 900
	// 900
	// 1000
	// 1000
	// 1100

	return 0;
}
