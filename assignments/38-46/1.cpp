/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 * Note: `#include <string>` Should always be used when using string data type.
 * 		 But Osama Elzero usually doesn't add it, I don't know why.
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int nums[]{100, 300, 600, 900};
	string awards[]{"iPhone", "iPad", "PC", "Car"};

	// Output Needed
	// "Number 100 Award Is: iPhone"
	cout << "Number " << nums[0] << " Award Is: " << awards[0] << '\n';

	// "Number 300 Award Is: iPad"
	cout << "Number " << nums[1] << " Award Is: " << awards[1] << '\n';

	// "Number 600 Award Is: PC"
	cout << "Number " << nums[2] << " Award Is: " << awards[2] << '\n';

	// "Number 900 Award Is: Car"
	cout << "Number " << nums[3] << " Award Is: " << awards[3] << '\n';

	return 0;
}
