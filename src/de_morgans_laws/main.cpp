/**
 * @file main.cpp
 * @brief shows De Morgan's law
 * @author LM137(hermite2053)
 * @date 2021-10-14
*/

#include <iostream>

using namespace std;

int
main(void)
{
	bool a, b;

	cout << "Let's see De Morgan's law. Input 0 or 1.\r\n";

	cout << "A=";
	cin >> a;
	cout  << "B=";
	cin >> b;

	cout << "(not A) and (not B) = " << ((!a) && (!b)) << ".\r\n";
	cout << "not (A or B)        = " << (!(a || b)) << ".\r\n";

	cout << "(not A) or (not B)  = " << ((!a) || (!b)) << ".\r\n";
	cout << "not (A and B)       = " << (!(a && b)) << ".\r\n";

	return 0;
}
