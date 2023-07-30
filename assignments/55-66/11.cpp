/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
using namespace std;

// Write Your Function Here
int firstnegative(int numbers[], int numsSize)
{
	int maxNegNum = numbers[0];

	for (int i = 1; i < numsSize; i++)
	{
		if (numbers[i] < 0 && numbers[i] > maxNegNum)
			maxNegNum = numbers[i];
	}

	return maxNegNum;
}

int main()
{
	int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0, -5, -10}; // -5
	int numssize = size(numbers);
	cout << firstnegative(numbers, numssize) << "\n";
	return 0;
}
