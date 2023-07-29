/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

int main()
{
	int num = 2;
	while (num < 520)
	{
		// Your Code Here
		std::cout << num - 1 << '\n';

		num = num * 2 + 1;
	}

	// Needed Output
	// 1
	// 4
	// 10
	// 22
	// 46
	// 94
	// 190
	// 382

	return 0;
}
