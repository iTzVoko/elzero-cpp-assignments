/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Friends Array
	string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
	int friendsCount = size(friends);

	// Output Needed
	// "Ahmed"
	// "Ashraf"
	// "Amany"

	// For loop
	for (int i = 0; i < friendsCount; i++)
	{
		// You can also use [i].at(0) way
		if (friends[i][0] == 'A')
		{
			cout << friends[i] << '\n';
		}
	}

	std::cout << "============\n";

	// While loop
	int i = 0;

	while (i < friendsCount)
	{
		if (friends[i][0] == 'A')
		{
			cout << friends[i] << '\n';
		}

		i++;
	}

	return 0;
}
