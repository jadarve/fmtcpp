
#include "fmtcpp.h"

#include <iostream>

using namespace std;

int main() {

    auto table = fmt::TableFormatter<2>{};

    table << 94 << "moni moni";

    std::cout.setf(std::ios_base::hex, std::ios_base::basefield);
    std::cout.setf(std::ios_base::showbase);
    std::cout << 94 << '\n';

    std::cout.unsetf(std::ios_base::uppercase);
    std::cout << 94 << "\n";
}