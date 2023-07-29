/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 * Note: You can use { } to define variables with the same name; that's because they have different scopes.
 */
#include <iostream>

int main()
{
	{
		// Test Case 1
		int age = 18;
		int points = 450;

		// Output
		// "No Age Is Not Ok"
		// "No Points Is Not Ok"

		if (age > 18)
		{
			std::cout << "Yes Age Is Ok\n";
		}
		else
		{
			std::cout << "No Age Is Not Ok\n";
		}

		if (points > 500)
		{
			std::cout << "Yes Points Is Ok\n";
		}
		else
		{
			std::cout << "No Points Is Not Ok\n";
		}
	}

	{
		// Test Case 2
		int age = 20;
		int points = 450;

		// Output
		// "Yes Age Is Ok"
		// "No Points Is Not Ok"

		if (age > 18)
		{
			std::cout << "Yes Age Is Ok\n";
		}
		else
		{
			std::cout << "No Age Is Not Ok\n";
		}

		if (points > 500)
		{
			std::cout << "Yes Points Is Ok\n";
		}
		else
		{
			std::cout << "No Points Is Not Ok\n";
		}
	}

	{
		// Test Case 3
		int age = 20;
		int points = 650;

		// Output
		// "Yes Age Is Ok"
		// "Yes Points Is Ok"

		if (age > 18)
		{
			std::cout << "Yes Age Is Ok\n";
		}
		else
		{
			std::cout << "No Age Is Not Ok\n";
		}

		if (points > 500)
		{
			std::cout << "Yes Points Is Ok\n";
		}
		else
		{
			std::cout << "No Points Is Not Ok\n";
		}
	}
}
