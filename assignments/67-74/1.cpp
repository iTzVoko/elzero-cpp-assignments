/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> nums{100, 200, 300, 400};

	for (int num : nums)
	{
		std::cout << num << '\n';
	}

	nums.push_back(500);

	std::cout << "First Element Is: " << nums.front() << '\n';
	std::cout << "Last Element Is: " << nums.back() << '\n';

	// Output
	// 100
	// 200
	// 300
	// 400
	// "First Element Is: 100"
	// "Last Element Is: 500"

	return 0;
}
