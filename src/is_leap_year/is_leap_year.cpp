/* is_leap_year
		2021-08-21 added
		hermite2053
*/

#include <iostream>

#define VALID_UPPER_BOUND	(9999)
#define VALID_LOWER_BOUND	(1)

bool is_leap_year(int y);

int main(void)
{
	const std::string mes_prom	= "key in YEAR > ";
	const std::string mes_invalid		= "invalid year!\n";
	const std::string mes_t			= "TRUE\n";
	const std::string mes_f			= "FALSE\n";

	int		year;
	int		rtn = 0;

	std::cout << mes_prom;
	std::cin >> year;

	if ( year >= VALID_LOWER_BOUND && year <= VALID_UPPER_BOUND )
	{
		bool	res = false;
		res = is_leap_year(year);

		if (res == true)
		{
			std::cout << mes_t;
		}
		else
		{
			std::cout << mes_f;
		}
	}
	else
	{
		std::cout << mes_invalid;
		rtn = -1;
	}

	return rtn;
}

bool is_leap_year(int y)
{
	bool is_leap = false;

	if ( ( y % 4 == 0 &&	y % 100 != 0 ) || y % 400 == 0 )
	{
		is_leap = true;
	}

	return is_leap;
}
