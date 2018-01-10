#include "random.h"
#include <ctime>

Random::Random():
mt(time(nullptr))
{}

Random::~Random()
{
    //dtor
}

int Random::getRandInt(int low, int high)
{
    std::uniform_int_distribution<int> dist(low,high);
    return dist(mt);
}

double Random::getRandFloat(int low, int high)
{
    std::uniform_real_distribution<double> dist(low,high);
    return dist(mt);
}
