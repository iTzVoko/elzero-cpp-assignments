/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <array>
#include <iostream>
using namespace std;

int main()
{
	array<int, 6> nums = {10, 20, 30, 40, 20, 50};

	// Method 1
	// "First: 10"
	// "Last: 50"
	cout << "First: " << nums[0] << '\n';
	cout << "Last: " << nums[size(nums) - 1] << '\n';

	// Method 2
	// "First: 10"
	// "Last: 50"
	cout << "First: " << nums.at(0) << '\n';
	cout << "Last: " << nums.at(nums.size() - 1) << '\n';

	// Method 3
	// "First: 10"
	// "Last: 50"
	cout << "First: " << nums.back() << '\n';
	cout << "Last: " << nums.front() << '\n';

	// There's also Method 4 to do that (Like the #9 assignment)
	cout << "First: " << *begin(nums) << '\n';
	cout << "Last: " << *(end(nums) - 1) << '\n';

	return 0;
}
