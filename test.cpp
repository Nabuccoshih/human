#include <iostream>
#include <cstdlib>
#include <ctime>
#include "tools.h"

int mmain()
{
	std::cout << tools::nbAleaInt(108) << std::endl;
	int annee = (3600 * 24) * tools::nbAleaInt(108);
	std::cout << annee << std::endl;

return 0;
}