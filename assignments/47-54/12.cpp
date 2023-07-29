/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

int main()
{
	int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};
	int numsCount = std::size(nums);

	// Output Needed
	// 10
	// 14
	// 40
	// 15

	for (int i = 0; i < numsCount; i++)
	{
		if (nums[i] + nums[i] == nums[i + 1])
			std::cout << nums[i] << '\n';
	}

	return 0;
}
