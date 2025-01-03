#pragma once
#include <random>

class RNGenerator {

public:
    RNGenerator(int, int);
    ~RNGenerator() = default;

    int operator ()();

private:
    std::mt19937_64 _engine;
    std::uniform_int_distribution<int> _distribution;

    static int GenerateSeed();
};
