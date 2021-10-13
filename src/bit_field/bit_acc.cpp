/**
 * @file bit_acc.cpp
 * @author LM137(hermite2053)
 * @date 2021-10-13
*/

#include <cstdio>
#include "bit_acc.hpp"

int write_bit(std::uint8_t *dst, int bit, bool n)
{
	int ret = 0;

	if ( dst == NULL ) {
		return -1;
	}

	if ( bit < 0 || bit > 7 ) {
		return -2;
	}

	if ( n ) {
		*dst |= (n << bit);
	}
	else {
		*dst &= ~(n << bit);
	}

	return 0;
}
