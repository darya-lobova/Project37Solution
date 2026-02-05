#include "logic.h"

bool are_all_digits_diffrent(long long number) {

	int digit1;
	int digit2;
	int remaining_digits;

	while (number > 0) {
		digit1 = number % 10;
		remaining_digits = number / 10;
		
		while (remaining_digits > 0) {
			digit2 = remaining_digits % 10;
			if (digit1 == digit2) {
				return false;
				break;
			}
			remaining_digits /= 10;
		}
		number /= 10;
	}

	return true;
}