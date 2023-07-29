/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

using namespace std;

int main()
{
	int num = 3;

	cout << num + num << "\n";				   // 6
	cout << num * num - num << "\n";		   // 6
	cout << (num * num) - num << "\n";		   // 6
	cout << (num + num - num) + num << "\n";   // 6
	cout << (num + num) / (num / num) << "\n"; // 6
	cout << (num + num) * (num / num) << "\n"; // 6
	cout << (num + num) + (num - num) << "\n"; // 6

	return 0;
}
