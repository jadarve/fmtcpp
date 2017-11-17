#include <array>
#include <iostream>

namespace fmt {

template<int columns>
class TableFormatter {

public:
    template<typename T>
    TableFormatter<columns>& operator <<(const T& obj) {
        
        // std::cout.unsetf(0xFFFFFFFF);
        // std::cout << "operator <<: " << currentColumn << " : ";
        // std::cout.setf(formatFlags[currentColumn]);
        std::cout.setf(std::ios_base::hex, std::ios_base::basefield);
        std::cout.setf(std::ios_base::showbase);
        std::cout << obj << "\n";

        currentColumn = (currentColumn + 1) % columns;
        return *this;
    }

private:
    int currentColumn;

    std::array<std::ios_base::fmtflags, 2> formatFlags {{std::ios_base::hex, std::ios::uppercase}};
};

} // namespace fmt