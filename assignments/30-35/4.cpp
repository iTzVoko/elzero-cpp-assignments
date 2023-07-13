/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

using namespace std;

int main()
{
	int num1 = 12;
	int num2 = 5;
	int num3 = 12;
	int num4 = 40;

	// Do Not Edit Any Condition

	// Condition 1
	if (num1 > num2)
		cout << "Condition 1 Is True\n";
	else
		cout << "Condition 1 Is False\n";

	// Condition 2
	if (num1 > num2 && num1 < num4)
		cout << "Condition 2 Is True\n";
	else
		cout << "Condition 2 Is False\n";

	// Condition 3
	if (num1 > num2 && num1 == num3)
		cout << "Condition 3 Is True\n";
	else
		cout << "Condition 3 Is False\n";

	// Condition 4
	if (num1 + num2 < num4)
		cout << "Condition 4 Is True\n";
	else
		cout << "Condition 4 Is False\n";

	// Condition 5
	if (num1 + num3 < num4)
		cout << "Condition 5 Is True\n";
	else
		cout << "Condition 5 Is False\n";

	// Condition 6
	if (num1 + num2 + num3 < num4)
		cout << "Condition 6 Is True\n";
	else
		cout << "Condition 6 Is False\n";

	// Condition 7
	if (num4 - (num1 + num3) + num2 == 21)
		cout << "Condition 7 Is True\n";
	else
		cout << "Condition 7 Is False\n";

	// Output Needed
	// "Condition 1 Is True"
	// "Condition 2 Is True"
	// "Condition 3 Is True"
	// "Condition 4 Is True"
	// "Condition 5 Is True"
	// "Condition 6 Is True"
	// "Condition 7 Is True"

	return 0;
}
