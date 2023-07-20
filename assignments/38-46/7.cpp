/*
 * بسم الله الرحمن الرحيم
 *
 * Solved by: @iTzVoko
 * Note: "#include <string>" Should always be used when using string data type,
 * 		 But Osama Elzero usually doesn't add it, I don't know why.
 * Note: Commas at the end of each array doesn't do anything; it's
 * 		 for clarity only.
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Create The Array Here
	string names[3][3] = {
		{"Ahmed", "Sayed", "Mahmoud"},
		{"Sameh", "Mahdy", "Gamal"},
		{"Mohamed", "Adel", "Majed"},
	};

	cout << "First Collection Of Names:\n";
	cout << names[0][0] << "\n"; // Ahmed
	cout << names[1][1] << "\n"; // Mahdy
	cout << names[2][2] << "\n"; // Majed

	cout << "Second Collection Of Names:\n";
	cout << names[2][1] << "\n"; // Adel
	cout << names[1][2] << "\n"; // Gamal
	cout << names[0][2] << "\n"; // Mahmoud

	cout << "Third Collection Of Names:\n";
	cout << names[0][1] << "\n"; // Sayed
	cout << names[1][0] << "\n"; // Sameh
	cout << names[2][0] << "\n"; // Mohamed

	return 0;
}
