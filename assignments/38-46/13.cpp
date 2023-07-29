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
	string fName = "Elzero ";
	string mName = "Web ";
	string lName = "School";

	// Output Needed
	// Elzero Web School
	cout << fName << mName << lName << '\n';

	// Elzero Web School
	cout << fName + mName + lName << '\n';

	// Elzero Web School
	cout << fName.append(mName).append(lName) << '\n';

	return 0;
}
