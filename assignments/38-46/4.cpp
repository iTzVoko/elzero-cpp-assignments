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
	// Example 1
	{
		int vals[]{100, 200, 250, 400, 200};

		// Needed Output
		// "First Number + Last Number Is Larger Than Middle Number"
		// "100 + 200 = 300"
		// "300 > 250"
		if (vals[0] + vals[4] > vals[2])
		{
			std::cout
				<< "First Number + Last Number Is Larger Than Middle Number\n"
				<< vals[0] << " + " << vals[4] << '\n'
				<< vals[0] + vals[4] << " > " << vals[2] << '\n';
		}
		else if (vals[1] + vals[3] > vals[2])
		{
			std::cout
				<< "Second Number + Before Last Number Is Larger Than Middle Number\n"
				<< vals[1] << " + " << vals[3] << '\n'
				<< vals[1] + vals[3] << " > " << vals[2] << '\n';
		}
		else
		{
			std::cout
				<< "Middle Number Is Larger Than Middle Number\n"
				<< vals[1] << " + " << vals[3] << '\n'
				<< vals[1] + vals[3] << " > " << vals[2] << '\n';
		}
	}

	// Example 2
	{
		int vals[]{100, 200, 500, 400, 200};

		// Needed Output
		// "Second Number + Before Last Number Is Larger Than Middle Number"
		// "200 + 400 = 600"
		// "600 > 500"

		if (vals[0] + vals[4] > vals[2])
		{
			std::cout
				<< "First Number + Last Number Is Larger Than Middle Number\n"
				<< vals[0] << " + " << vals[4] << '\n'
				<< vals[0] + vals[4] << " > " << vals[2] << '\n';
		}
		else if (vals[1] + vals[3] > vals[2])
		{
			std::cout
				<< "Second Number + Before Last Number Is Larger Than Middle Number\n"
				<< vals[1] << " + " << vals[3] << '\n'
				<< vals[1] + vals[3] << " > " << vals[2] << '\n';
		}
		else
		{
			std::cout
				<< "Middle Number Is Larger Than Middle Number\n"
				<< vals[1] << " + " << vals[3] << '\n'
				<< vals[1] + vals[3] << " > " << vals[2] << '\n';
		}
	}

	// Example 3
	{
		int vals[]{100, 200, 600, 400, 200};

		// Needed Output
		// "Middle Number Is The Largest"
		// "600"

		if (vals[0] + vals[4] > vals[2])
		{
			std::cout
				<< "First Number + Last Number Is Larger Than Middle Number\n"
				<< vals[0] << " + " << vals[4] << '\n'
				<< vals[0] + vals[4] << " > " << vals[2] << '\n';
		}
		else if (vals[1] + vals[3] > vals[2])
		{
			std::cout
				<< "Second Number + Before Last Number Is Larger Than Middle Number\n"
				<< vals[1] << " + " << vals[3] << '\n'
				<< vals[1] + vals[3] << " > " << vals[2] << '\n';
		}
		else
		{
			std::cout
				<< "Middle Number Is Larger Than Middle Number\n"
				<< vals[1] << " + " << vals[3] << '\n'
				<< vals[1] + vals[3] << " > " << vals[2] << '\n';
		}
	}

	return 0;
}
