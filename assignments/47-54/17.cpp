/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 * Note: Watch ternary operator video to understand the code:
 * 		 https://youtu.be/8ptGpQ_2Np8
 */
#include <iostream>

int main()
{
	for (int i = 1; i <= 102; i++)
	{
		if (i > 20 && i < 100)
			continue;

		std::cout << (i < 10 ? "00" : (i < 100 ? "0" : "")) << i << '\n';
	}

	// Output Needed
	// 001
	// 002
	// 003
	// 004
	// 005
	// 006
	// 007
	// 008
	// 009
	// 010
	// 011
	// 012
	// 013
	// 014
	// 015
	// 016
	// 017
	// 018
	// 019
	// 020
	// 100
	// 101
	// 102

	return 0;
}
