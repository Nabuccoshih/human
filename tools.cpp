#include <iostream>
#include <ctime>
#include "tools.h"

namespace tools
{
    time_t secSinceEpoch()
    {
        time_t currentTime;
        return time(&currentTime);
    }

    int nbAleaInt(int max)
    {
        srand(time(0));
        return (rand() % max) + 1;
    }
}