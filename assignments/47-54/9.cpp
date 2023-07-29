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
	string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

	// Output Needed
	// "Mohamed"
	// "Sayed"

	// For loop
	for (int i = 1; i < 3; i++)
	{
		cout << friends[i] << '\n';
	}

	std::cout << "============\n";

	// While loop
	int i = 1;

	while (i < 3)
	{
		cout << friends[i] << '\n';

		i++;
	}

	return 0;
}
