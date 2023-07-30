/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
using namespace std;

// Write Your Functions Here
float avg(int money[], int monSize)
{
	float sum = 0;

	for (int i = 0; i < monSize; i++)
		sum += money[i];

	float average = sum / monSize;

	return average;
}

int main()
{
	int money[] = {10, 20, 15, 25, 30, 35};
	int monsize = size(money);
	cout << avg(money, monsize) << "\n"; // 22.5
	return 0;
}
