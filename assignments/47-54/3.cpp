/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

int main()
{
	/*
	Test Case 1
		Number One: 1
		Number Two: 9
		Output: 3, 5, 7

	Test Case 2
		Number One: 2
		Number Two: 15
		Output: 3, 5, 7, 9, 11, 13

	Test Case 3
		Number One: 8
		Number Two: 2
		Output: 3, 5, 7
	*/
	{
		int rangeStart, rangeEnd;

		std::cout << "Enter the start and the end of the range: ";
		std::cin >> rangeStart >> rangeEnd;

		// If the range start was bigger than the end, swap their values
		if (rangeStart > rangeEnd)
		{
			int temp = rangeStart;
			rangeStart = rangeEnd;
			rangeEnd = temp;
		}

		// increment it; so the start number will not be printed
		rangeStart++;

		for (int i = rangeStart; i < rangeEnd; i++)
		{
			// If number is even
			if (i % 2 == 0)
				continue;

			// If it's the first number, print the number only without comma
			if (i == rangeStart || i == rangeStart + 1)
			{
				std::cout << i;
				continue; // Continue the loop without executing below line
			}

			// If It's not the first number, print comma then the number
			std::cout << ", " << i;
		}

		std::cout << '\n';
	}

	return 0;
}
