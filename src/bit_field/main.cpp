/**
 * @file main.cpp
 * @author LM137(hermite2053)
 * @date 2021-10-13
*/

#include <iostream>
//#include <cstdint>
#include "bit_acc.hpp"

int main(void)
{
	std::uint8_t	data = 0;
	int			bit;
	bool		n;

	std::cout << "key in target bit > ";
	std::cin >> bit;

	std::cout << "key in value (0 or 1) > ";
	std::cin >> n;

	write_bit(&data, bit, n);

	std::cout << "data=" << (int)data << "\n";

	return 0;
}
