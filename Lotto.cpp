#include "Lotto.h"
#include "RNGenerator.h"

std::vector<int> GenerateLotto() {
    int lotto[45];
    memset(lotto, 0, 45);

    std::vector<int> selected{};
    selected.reserve(6);

    RNGenerator rn_gen(1, 45);

    while (selected.size() != 6) {
        int rn = rn_gen();

        if (lotto[rn-1]) continue;
        else lotto[rn-1] = 1;

        selected.push_back(rn);
    }

    return selected;
}