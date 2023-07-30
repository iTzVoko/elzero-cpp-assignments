/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
using namespace std;

// Write Your Function Here
int plusandmultiply(int numbers[], int numsSize)
{
	int evenSum = 0;
	int oddProduct = 1;

	for (int i = 0; i < numsSize; i++)
	{
		if (numbers[i] % 2 == 0)
			evenSum += numbers[i];
		else
			oddProduct *= numbers[i];
	}

	return evenSum + oddProduct;
}

int main()
{
	int numbers[] = {10, 20, 3, 30, 5, 7, 40};
	int numssize = size(numbers);
	cout << plusandmultiply(numbers, numssize) << "\n";
	// Even Numbers -> 10 + 20 + 30 + 40 = 100
	// Odd Numbers  -> 3 * 5 * 7 = 105
	// Total = 100 + 105 = 205
	return 0;
}
