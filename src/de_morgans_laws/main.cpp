/**
 * @file main.cpp
 * @brief shows De Morgan's law
 * @author LM137(hermite2053)
 * @date 2021-10-14
*/

#include <iostream>

int
main(void)
{
	bool a = true;
	bool b = false;

	std::cout << "Let's see De Morgan's law.\r\n";

	std::cout << "A=";
	std::cin >> a;
	std::cout  << "B=";
	std::cin >> b;

	std::cout << "(not A) and (not B) = " << ((!a) && (!b)) << ".\r\n";
	std::cout << "not (A or B)        = " << (!(a || b)) << ".\r\n";

	std::cout << "(not A) or (not B)  = " << ((!a) || (!b)) << ".\r\n";
	std::cout << "not (A and B)       = " << (!(a && b)) << ".\r\n";

	return 0;
}
