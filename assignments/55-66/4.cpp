/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>
using namespace std;

// Your Function Here
int calculation(int a = 100, int b = 50, int c = 150)
{
	return a + b + c;
}

int main()
{
	cout << calculation(50, 100, 150) << "\n"; // 300
	cout << calculation(100, 50) << "\n";	   // 300
	cout << calculation(100) << "\n";		   // 300
	return 0;
}
