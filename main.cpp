#include <iostream>
#include "Handler.h"

int main() {
    std::cout
    << "1. Odd&Even -> Press 1\n"
    << "2. Random Number String -> Press 2\n"
    << "3. Lotto -> Press 3\n"
    << "4. Lotto Sum -> Press 4\n"
    << "If you want to quit, Press 0\n\n";

    unsigned int command = 1999;

    while (command) {
        std::cout << "Select Menu : ";
        std::cin >> command;

        switch (command) {
            case 1:
                Handler::HandleEvenOdd(std::cout, std::cin);
                break;
            case 2:
                Handler::HandleRNString(std::cout, std::cin);
                break;
            case 3:
                Handler::HandleLotto(std::cout);
                break;
            case 4:
                Handler::HandleLottoSum(std::cout);
                break;
            default:
                break;
        }

    }

    return 0;
}
