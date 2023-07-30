/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
using namespace std;

// Write Your Function Here
int books(int smallBooks, int mediumBooks, int bigBooks, int shelvesCount)
{
	int totalSpace = (smallBooks * 2) + (mediumBooks * 4) + (bigBooks * 6);

	int availableSpace = (shelvesCount * 20) - totalSpace;

	// If there is available space, return it. If not, return 0
	return (availableSpace > 0 ? availableSpace : 0);
}

int main()
{
	cout << books(10, 4, 3, 4) << "\n"; // 26
	cout << books(10, 4, 3, 2) << "\n"; // 0
	return 0;
}
