/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 * Note: There are two solutions in this assignment, the second one is shorter.
 */
#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	switch (num)
	{
	case 10:
		cout << "Case 1\n";
		break;

	case 20:
		cout << "Case 2\n";
		break;

	case 30:
	case 31:
	case 32:
		cout << "Case 3\n";
		break;

	default:
		cout << "Invalid Number\n";
	}

	// This is a Shorter Solution
	/*
	switch (num)
	{
	case 10:
	case 20:
	case 30:
	case 31:
	case 32:
		cout << "Case " << num / 10 << '\n';
		break;

	default:
		cout << "Invalid Number\n";
	}
	*/

	/*
	if (num == 10)
	{
		cout << "Case 1";
	}
	else if (num > 19 && num < 21)
	{
		cout << "Case 2";
	}
	else if (num > 29 && num < 33)
	{
		cout << "Case 3";
	}
	else
	{
		cout << "Invalid Number";
	}
	*/

	return 0;
}
