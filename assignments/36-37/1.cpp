/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

int main()
{
	int year;

	std::cout << "Enter a year to get its event: ";
	std::cin >> year;

	switch (year)
	{
	case 1982:
		std::cout << "My Birth Day\n";
		break;

	case 1989:
		std::cout << "My First Work\n";
		break;

	case 1995:
		std::cout << "Windows 95\n";
		break;

	case 2000:
		std::cout << "Windows Millennium\n";
		break;

	case 2002:
		std::cout << "Created My vBulletin Forum\n";
		break;

	default:
		std::cout << "No Events in This Year\n";
	}

	/*
		1982 => "My Birth Day"
		1989 => "My First Work"
		1995 => "Windows 95"
		2000 => "Windows Millennium"
		2002 => "Created My vBulletin Forum"
		Any Other Year => "No Events in This Year"
	*/

	return 0;
}
