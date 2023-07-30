/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
#include <string>
using namespace std;

// Write Your Function Here
int calculate(int a, int b, string mode = "add")
{
	// Check the first letter
	switch (mode[0])
	{
	case 'a': // Add
		return a + b;
		break;

	case 's': // Subtract
		return a - b;
		break;

	case 'm': // Multiply
		return a * b;
		break;

	default:
		return 0;
	}
}

int main()
{
	cout << calculate(10, 20) << "\n";			   // 30
	cout << calculate(10, 20, "a") << "\n";		   // 30
	cout << calculate(10, 20, "s") << "\n";		   // -10
	cout << calculate(10, 20, "subtract") << "\n"; // -10
	cout << calculate(10, 20, "multiply") << "\n"; // 200
	cout << calculate(10, 20, "m") << "\n";		   // 200
	cout << calculate(10, 20, "Invalid") << "\n";  // 0
	return 0;
}
