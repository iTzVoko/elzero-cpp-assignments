/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
using namespace std;

// Do Not Edit Code Below This Line
int plusnums(int numone, int numtwo);
int minusnums(int numone, int numtwo);
int divnums(int numone, int numtwo);

int main()
{
	cout << plusnums(50, 60) << "\n";	// 110
	cout << minusnums(150, 50) << "\n"; // 100
	cout << divnums(100, 5) << "\n";	// 20
	return 0;
}

int plusnums(int numone, int numtwo)
{
	return numone + numtwo;
}

int minusnums(int numone, int numtwo)
{
	return numone - numtwo;
}

int divnums(int numone, int numtwo)
{
	return numone / numtwo;
}
