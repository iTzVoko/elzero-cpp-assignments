/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

int main()
{
	int nums[] = {10, 20, 30, 40, 20, 50};

	// Method 1
	// 6
	std::cout << sizeof(nums) / sizeof(int) << '\n';

	// Method 2
	// 6
	std::cout << std::size(nums) << '\n';

	// Method 3
	// 6
	std::cout << std::end(nums) - std::begin(nums) << '\n';

	return 0;
}
