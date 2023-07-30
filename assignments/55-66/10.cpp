/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
#include <limits.h>
using namespace std;

// Write Your Function Here
int minpositive(int numbers[], int numsSize)
{
	int minPosNum = INT_MAX;

	for (int i = 0; i < numsSize; i++)
	{
		if (numbers[i] > 0 && numbers[i] < minPosNum)
			minPosNum = numbers[i];
	}

	return minPosNum;
}

int main()
{
	int numbers[] = {-10, -20, 15, 100, 10, 5, -50, 0}; // 5
	int numssize = size(numbers);
	cout << minpositive(numbers, numssize) << "\n";
	return 0;
}
