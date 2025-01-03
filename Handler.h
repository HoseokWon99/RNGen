#pragma once
#include <istream>
#include <ostream>
#include <vector>

struct Handler {
    static void HandleEvenOdd(std::ostream&, std::istream&);
    static void HandleRNString(std::ostream&, std::istream&);
    static void HandleLotto(std::ostream&);
    static void HandleLottoSum(std::ostream&);

private:
    static void PrintVector(std::ostream&, const std::vector<int>&);

};