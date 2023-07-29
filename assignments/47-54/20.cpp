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
	string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};
	int namesCount = size(names);

	// Output Needed
	// "Osama"
	// "Ahmed"
	// "Hagar"
	// "Salwa"

	for (int i = 0; i < namesCount; i++)
	{
		if (names[i].size() == 5)
			cout << names[i] << '\n';
	}

	return 0;
}
