/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

int main()
{
	// Example 1
	{
		int check = 25;
		int nums[]{40, 20, 30, 70, 100};

		// Ouput
		// "{40} + {70} = 110"

		if (nums[0] > check)
		{
			std::cout << "{" << nums[0] << "} + ";
			std::cout << "{" << nums[3] << "} = ";
			std::cout << nums[0] + nums[3] << '\n';
		}
		else if (nums[1] > check)
		{
			std::cout << "{" << nums[1] << "} + ";
			std::cout << "{" << nums[3] << "} = ";
			std::cout << nums[1] + nums[3] << '\n';
		}
		else
		{
			std::cout << "{" << nums[2] << "} + ";
			std::cout << "{" << nums[3] << "} = ";
			std::cout << nums[2] + nums[3] << '\n';
		}
	}

	// Example 2
	{
		int check = 25;
		int nums[]{20, 35, 30, 70, 100};

		// Ouput
		// "{35} + {70} = 105"

		if (nums[0] > check)
		{
			std::cout << "{" << nums[0] << "} + ";
			std::cout << "{" << nums[3] << " } = ";
			std::cout << nums[0] + nums[3] << '\n';
		}
		else if (nums[1] > check)
		{
			std::cout << "{" << nums[1] << "} + ";
			std::cout << "{" << nums[3] << "} = ";
			std::cout << nums[1] + nums[3] << '\n';
		}
		else
		{
			std::cout << "{" << nums[2] << "} + ";
			std::cout << "{" << nums[3] << "} = ";
			std::cout << nums[2] + nums[3] << '\n';
		}
	}

	// Example 2
	{
		int check = 25;
		int nums[]{20, 25, 30, 70, 100};

		// Ouput
		// "{30} + {70} = 100"

		if (nums[0] > check)
		{
			std::cout << "{" << nums[0] << "} + ";
			std::cout << "{" << nums[3] << " } = ";
			std::cout << nums[0] + nums[3] << '\n';
		}
		else if (nums[1] > check)
		{
			std::cout << "{" << nums[1] << "} + ";
			std::cout << "{" << nums[3] << "} = ";
			std::cout << nums[1] + nums[3] << '\n';
		}
		else
		{
			std::cout << "{" << nums[2] << "} + ";
			std::cout << "{" << nums[3] << "} = ";
			std::cout << nums[2] + nums[3] << '\n';
		}
	}

	return 0;
}
