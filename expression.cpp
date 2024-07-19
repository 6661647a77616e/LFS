#include <iostream>
#include <cstdint>
int main() {
    // Example 1: Clearing the lower 2 bits of a value
    uint32_t value1 = 0x1F; // Binary: 00011111
    uint32_t result1 = value1 & ~0x3u; // Binary: 00011100
    std::cout << "Example 1:" << std::endl;
    std::cout << "Original value: 0x" << std::hex << value1 << std::endl;
    std::cout << "Result: 0x" << std::hex << result1 << std::endl;

    // Example 2: Setting the lower 2 bits of a value
    uint32_t value2 = 0x1F; // Binary: 00011111
    uint32_t result2 = value2 | 0x3u; // Binary: 00011111
    std::cout << "\nExample 2:" << std::endl;
    std::cout << "Original value: 0x" << std::hex << value2 << std::endl;
    std::cout << "Result: 0x" << std::hex << result2 << std::endl;

    return 0;
}
