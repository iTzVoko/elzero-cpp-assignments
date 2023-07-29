/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
using namespace std;

// Write Your Function Here
float money(float salary, int days)
{
	int weeks = days / 7;
	int holidays = weeks * 2;
	int gettingOutDays = days - holidays;

	return salary / gettingOutDays;
}

int main()
{
	/*
	  Hints
	  21 Days Has 3 "Weeks"
	  Every "Week" You Have 2 Holidays.
	  Total = 3 * 2 = 6 Holidays From 21 Days
	*/

	cout << money(2015, 21) << "\n"; // 134.333
	cout << money(4500, 40) << "\n"; // 150
	return 0;
}
