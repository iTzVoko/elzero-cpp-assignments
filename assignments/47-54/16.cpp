/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

int main()
{
	int index = 10;
	int jump = 2;

	for (;;)
	{
		// Write Your Code Here
		std::cout << index << '\n';

		index -= jump;

		if (index < 4)
			break;
	}

	// Output Needed
	// 10
	// 8
	// 6
	// 4

	return 0;
}
