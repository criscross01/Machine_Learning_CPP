#ifndef RANDOM_H
#define RANDOM_H
#include <random>

class Random
{
    public:
        Random();
        virtual ~Random();

        int getRandInt(int low, int hight);
        double getRandFloat(int low, int high);
    private:
    std::mt19937 mt;
};

#endif // RANDOM_H
