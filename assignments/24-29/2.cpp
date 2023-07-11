/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

using namespace std;

int main()
{
	/*
	Explanation:
		10 * 20 = 200
		15 % 3 = 0
		<10 * 20> + <15 % 3> = 200
		190 + 10 = 200
		<10 * 20 + 15 % 3> + <190 + 10> = 400

	*/

	// The final solution
	cout << 10 * 20 + 15 % 3 + 190 + 10 - 400 << "\n"; // 0

	return 0;
}
