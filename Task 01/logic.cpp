#include "logic.h"

bool are_all_digits_diffrent(long long number) {

	int digit1;
	int digit2;

	while (number > 0) {
		digit1 = number % 10;
		digit2 = number / 10;

		if (digit1 != digit2) {
			return true;
		}
		number /= 10;
	}

	return false;
}