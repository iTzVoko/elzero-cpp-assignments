/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

int main()
{
	int num;
	std::cout << "Please Type A Number Between 0 And 150\n";
	std::cin >> num;

	// If Number Smaller Than 10 "Example 5" Output Will Be => 005
	if (num < 10)
	{
		std::cout << "00" << num << '\n';
	}
	// If Number Larger Than 10 And Smaller Than 100 "Example 59" Output Will Be => 059
	else if (num >= 10 && num < 100)
	{
		std::cout << '0' << num << '\n';
	}
	// If Number Larger Than 100 "Example 115" Output Will Be => 115
	else
	{
		std::cout << num << '\n';
	}

	return 0;
}
