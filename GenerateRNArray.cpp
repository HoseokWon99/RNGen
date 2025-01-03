#include "GenerateRNArray.h"
#include "RNGenerator.h"

std::vector<int> GenerateRNArray(std::size_t len, int l_bound, int r_bound) {
    std::vector<int> rn_arr{};
    rn_arr.reserve(len);

    RNGenerator rn_gen{l_bound, r_bound};

    for (std::size_t i = 0; i != len; ++i)
        rn_arr.push_back(rn_gen());

    return rn_arr;
}