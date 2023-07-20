/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 * Note: "std::end" points to the last element in the array plus one (after
 *		 the number 50 in this case) in the computer memory, and "std::begin"
 * 		 points to the first
 *		 element in the array (10), so we calculated the distance between them
 *		 (how many elements between them) by subtracting.
 * Note: "points to" means refers to a place in memory.
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
