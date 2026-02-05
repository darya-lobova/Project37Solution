#include "logic.h"

int main() {

	long long number;

	do {
		cout << "Input positive integer number: ";
		cin >> number;
	} while (number <= 0);

	bool result = are_all_digits_diffrent(number);

	string msg = result ? "All digits are deferent."
		: "There are at least two same digits.";

	print(msg);

	return 0;
}