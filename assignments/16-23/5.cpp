/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

int main()
{
	char a = '~';
	char b = '&';
	char c = '%';
	char d = 'A';

	// Output Needed
	// "ASCII Value of ~ Is 126"
	std::cout << "ASCII Value of " << a << " Is " << int(a) << '\n';

	// "ASCII Value of & Is 38"
	std::cout << "ASCII Value of " << b << " Is " << int(b) << '\n';

	// "ASCII Value of % Is 37"
	std::cout << "ASCII Value of " << c << " Is " << int(c) << '\n';

	// "ASCII Value of A Is 65"
	std::cout << "ASCII Value of " << d << " Is " << int(d) << '\n';

	return 0;
}
