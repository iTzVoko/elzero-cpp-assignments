/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Write Your Function Here
string swapping(string str)
{
	int strLength = str.length(); // length and size are the same thing

	for (int i = 0; i < strLength; i++)
	{
		if (str[i] == 'h' || str[i] == 'H')
			continue;

		str[i] = (islower(str[i]) ? toupper(str[i]) : tolower(str[i]));
	}

	return str;
}

int main()
{
	cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
	return 0;
}
