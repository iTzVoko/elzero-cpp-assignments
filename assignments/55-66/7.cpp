/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
using namespace std;

// Write Your Function Here
int beforeresult(int num, int beforeCount)
{
	int sum = num;

	// When beforeCount be 0, the loop will stop, because 0 means false
	while (beforeCount--)
		sum += --num;

	// This is a simpler solution using for loop
	// for (int i = 0; i < beforeCount; i++)
	// {
	// 	num--;
	// 	sum += num;
	// }

	return sum;
}

int main()
{
	cout << beforeresult(10, 5) << "\n"; // 10 + 9 + 8 + 7 + 6 + 5 = 45
	// Main Number [10]
	// Numbers Before [9 + 8 + 7 + 6 + 5] <- 5 Numbers
	cout << beforeresult(15, 3) << "\n"; // 15 + 14 + 13 + 12 = 54
	// Main Number [1015
	// Numbers Before [14 + 13 + 12] <- 3 Numbers
	return 0;
}
