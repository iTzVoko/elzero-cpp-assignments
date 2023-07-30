/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
using namespace std;

// Write Your Function Here
int pricing(int phonesCount, int usedPhonesCount,
			int newPhonePrice, int taxesPercentage)
{
	int newPhonesCount = phonesCount - usedPhonesCount;
	int usedPhonePrice = newPhonePrice - 200;

	// 40 * 800 = 32000
	int totalNewPhonesPrice = newPhonesCount * newPhonePrice;

	// 10 * 600 = 6000
	int totalUsedPhonesPrice = usedPhonesCount * usedPhonePrice;

	int totalPrice = totalNewPhonesPrice + totalUsedPhonesPrice;

	int discountedPrice = totalPrice - totalPrice * (taxesPercentage * 0.01);

	return discountedPrice;
}

int main()
{
	cout << pricing(50, 10, 800, 20) << "\n"; // 30400
	return 0;
}
