#include "RNGenerator.h"
#include <chrono>
#include <utility>

RNGenerator::RNGenerator(int l_bound, int r_bound)
: _engine(RNGenerator::GenerateSeed()), _distribution(l_bound, r_bound) { }

int RNGenerator::operator()() {
    return _distribution(_engine);
}

int RNGenerator::GenerateSeed() {
    const auto now = std::chrono::system_clock::now();
    return static_cast<int>(std::chrono::system_clock::to_time_t(now));
}


