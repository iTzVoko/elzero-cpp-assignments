/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Friends Array
	string friends[] = {"Ahmed", "Osama", "Ameer"};
	int friendsCount = size(friends);

	// Output Needed
	/*
	=========
	= Ahmed =
	==================
	== A, h, m, e, d =
	==================

	=========
	= Osama =
	==================
	== O, s, a, m, a =
	==================

	=========
	= Ameer =
	==================
	== A, m, e, e, r =
	==================
	*/

	for (int i = 0; i < friendsCount; i++)
	{
		// If it's not the first string, put newline above it
		if (i != 0)
			cout << '\n';

		cout
			<< "=========\n"
			<< "= " << friends[i] << " =\n"
			<< "==================\n"
			<< "== ";

		for (int j = 0; j < friends[i].size(); j++)
		{
			// If it's the first letter, do not put comma before it (name)
			// And if it's not the first letter, put comma before it (, name)
			cout << (j == 0 ? "" : ", ") << friends[i][j];
		}

		cout
			<< " =\n"
			<< "==================\n";
	}

	return 0;
}
