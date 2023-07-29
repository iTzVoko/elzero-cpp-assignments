/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

int main()
{
	// For Output
	// 0
	// 1
	// 2
	// 3
	// 4
	// 5
	// 6
	// 7
	// 8
	// 9
	// 10
	for (int i = 0; i <= 10; i++)
	{
		std::cout << i << '\n';
	}

	std::cout << "============\n";

	// While Output
	// 0
	// 1
	// 2
	// 3
	// 4
	// 5
	// 6
	// 7
	// 8
	// 9
	// 10
	int i = 0;

	while (i <= 10)
	{
		std::cout << i << '\n';

		i++;
	}

	// Do While Output
	// 0
	// 1
	// 2
	// 3
	// 4
	// 5
	// 6
	// 7
	// 8
	// 9
	// 10
	int x = 0;

	do
	{
		std::cout << x << '\n';

		x++;
	} while (x <= 10);

	return 0;
}
