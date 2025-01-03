#include "Handler.h"
#include "GenerateRNArray.h"
#include "GenerateRNString.h"
#include "Lotto.h"
#include <numeric>

void Handler::HandleEvenOdd(std::ostream& os, std::istream& is) {
    std::size_t n;

    os << "How many times do you want to iterate? : ";
    is >> n;

    std::vector<int> eo_vector = std::move(GenerateRNArray(n, 0, 1));
    PrintVector(os, eo_vector);
    os << '\n';
    os.flush();
}

void Handler::HandleRNString(std::ostream& os, std::istream& is) {
    std::size_t n;

    os << "Enter a length of the random number string : ";
    is >> n;

    std::string rn_str = std::move(GenerateRNString(n));
    os << rn_str << '\n';
    os.flush();
}

void Handler::HandleLotto(std::ostream& os) {
    std::vector<int> nums = std::move(GenerateLotto());
    PrintVector(os, nums);
    os << '\n';
    os.flush();
}

void Handler::HandleLottoSum(std::ostream& os) {
    std::vector<int> nums = std::move(GenerateLotto());
    int sum = std::accumulate(nums.begin(), nums.end(), int(0));
    os << sum << '\n';
    os.flush();
}

void Handler::PrintVector(std::ostream& os, const std::vector<int>& v) {

    for (int i : v)
        os << i << ' ';

}
