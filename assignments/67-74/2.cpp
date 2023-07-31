/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers = {10, 20, 30, 40};

	// Print the first element
	cout << numbers[0] << '\n';
	cout << numbers.at(0) << '\n';
	cout << numbers.front() << '\n';
	cout << *numbers.begin() << '\n';

	// Print the last element
	cout << numbers[size(numbers) - 1] << '\n';
	cout << numbers.at(size(numbers) - 1) << '\n';
	cout << numbers.back() << '\n';
	cout << *(numbers.end() - 1) << '\n';

	return 0;
}
