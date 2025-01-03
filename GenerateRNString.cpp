#include "GenerateRNString.h"
#include "RNGenerator.h"

std::string GenerateRNString(std::size_t len) {
    RNGenerator rn_gen{0, 9};

    std::string rn_str{};
    rn_str.reserve(len);

    for (std::size_t i = 0; i != len; ++i) {
        char c = (char)(rn_gen()+48);
        rn_str.push_back(c);
    }

    return rn_str;
}