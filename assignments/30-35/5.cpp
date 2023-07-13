/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

using namespace std;

int main()
{
	int by = 82; // by => Birth Year
	int s = 500; // s => Salary

	cout << (by > 80 ? (s < 600 ? "Ok" : "High") : ("Not Ok")) << '\n';

	/*
	if (by > 80)
	{
		if (s < 600)
			cout << "Ok\n";
		else
			cout << "High\n";
	}
	else
	{
		cout << "Not Ok\n";
	}
	*/
	return 0;
}
