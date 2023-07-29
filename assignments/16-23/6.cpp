/*
 * بسم الله الرحمن الرحيم
 * اللهم صلِّ على محمد وآل محمد
 *
 * Solved by: @iTzVoko
 */
#include <iostream>

int main()
{
	int a = 69;
	int b = 108;
	int c = 122;
	int d = 101;
	int e = 114;
	int f = 111;

	// Output Needed
	// "Character Of This ASCII Value 69 Is E"
	std::cout << "Character Of This ASCII Value " << a << " Is " << char(a) << '\n';

	// "Character Of This ASCII Value 108 Is l"
	std::cout << "Character Of This ASCII Value " << b << " Is " << char(b) << '\n';

	// "Character Of This ASCII Value 122 Is z"
	std::cout << "Character Of This ASCII Value " << c << " Is " << char(c) << '\n';

	// "Character Of This ASCII Value 101 Is e"
	std::cout << "Character Of This ASCII Value " << d << " Is " << char(d) << '\n';

	// "Character Of This ASCII Value 114 Is r"
	std::cout << "Character Of This ASCII Value " << e << " Is " << char(e) << '\n';

	// "Character Of This ASCII Value 111 Is o"
	std::cout << "Character Of This ASCII Value " << f << " Is " << char(f) << '\n';

	// Output Needed In Last Line
	// "Elzero"
	std::cout << char(a) << char(b) << char(c) << char(d) << char(e) << char(f) << '\n';

	return 0;
}
