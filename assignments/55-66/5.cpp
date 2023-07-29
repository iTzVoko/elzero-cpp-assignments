/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
#include <cmath>
using namespace std;

// Write Your Function Here
void thepower(int base, int exponent)
{
	cout << pow(base, exponent) << '\n';

	int power = base;

	while (exponent > 1)
	{
		exponent--;

		power *= base;
	}

	/*
	 * It can be simplified more
	 *
	 * Explanation:
	 * When the exponent be 0 after decrementing, the loop will
	 * stop, because 0 means false

	while (--exponent)
		power *= base;

	 * Remove the first while loop to make this while loop work
	*/

	cout << power << '\n';
}

int main()
{
	thepower(2, 5); // 32
	return 0;
}
