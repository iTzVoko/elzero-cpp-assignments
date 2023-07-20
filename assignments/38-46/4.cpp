/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 * Note: You can use { } to define variables with the same name; that's because they have different scopes.
 */
#include <iostream>

int main()
{
	// Example 1
	{
		int vals[] = {100, 200, 600, 200, 100};

		// Output
		// "Array Is Palindrome"

		int lastIndex = std::size(vals) - 1;

		if (vals[0] == vals[lastIndex] && vals[1] == vals[lastIndex - 1])
		{
			std::cout << "Array Is Palindrome\n";
		}
		else
		{
			std::cout << "Array Is Not Palindrome\n";
		}
	}

	// Example 2
	{
		int vals[] = {100, 200, 200, 100};

		// Output
		// "Array Is Palindrome"

		int lastIndex = std::size(vals) - 1;

		if (vals[0] == vals[lastIndex] && vals[1] == vals[lastIndex - 1])
		{
			std::cout << "Array Is Palindrome\n";
		}
		else
		{
			std::cout << "Array Is Not Palindrome\n";
		}
	}

	// Example 3
	{
		int vals[] = {100, 300, 600, 200, 100};

		// Output
		// "Array Is Not Palindrome"

		int lastIndex = std::size(vals) - 1;

		if (vals[0] == vals[lastIndex] && vals[1] == vals[lastIndex - 1])
		{
			std::cout << "Array Is Palindrome\n";
		}
		else
		{
			std::cout << "Array Is Not Palindrome\n";
		}
	}

	return 0;
}
